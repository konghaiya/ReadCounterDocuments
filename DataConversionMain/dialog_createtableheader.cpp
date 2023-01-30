#include "dialog_createtableheader.h"
#include "ui_dialog_createtableheader.h"
#include "OverallSituation.h"
#include "gtdatabase.h"
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include <QFileInfo>
#include<QElapsedTimer>
#include<QTextCursor>
#include<QDateTime>
Dialog_createTableHeader::Dialog_createTableHeader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_createTableHeader)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("需要创建数据表头的数据库文件，为空则新建数据库文件");
    ui->lineEdit_2->setPlaceholderText("功能号之间用英文逗号分隔,为空则创建该柜台所有功能号的表头");
}

Dialog_createTableHeader::~Dialog_createTableHeader()
{
    delete ui;
}

void Dialog_createTableHeader::on_pushButton_clicked()
{
    QString srcDirPath = QFileDialog::getOpenFileName(
                this, "选择要导入的数据库文件",
                DC_Path,
                "数据库文件(*.db);; 所有文件 (*.*);; ");

    if(!srcDirPath.isEmpty())
    {
        ui->lineEdit->setText(srcDirPath);
        dbfile = srcDirPath;
    }
}

void Dialog_createTableHeader::closeEvent(QCloseEvent *event)
{
    emit createTableClose();
}


bool Dialog_createTableHeader::GetMergingGtcode()
{
    MergingGtCodeMap.clear();
    if(!ui->lineEdit_2->text().isEmpty())
    {
        QRegExp reg("[,|，|、|]");  //("\\W+");//("[,|\uff0c|\u3001]");
        QStringList MergingGtCodelist=ui->lineEdit_2->text().split(reg);
        for(int i=0;i<MergingGtCodelist.length();i++)
        {
            MergingGtCodeMap.insert(MergingGtCodelist.value(i),MergingGtCodelist.value(i));
        }
    }

}

bool Dialog_createTableHeader::GetTableHeads(QStringList& tableHeaders ,QString tableName)
{
    tableHeaders = GtDataBase::Setdbserver(ui->comboBox->currentText()).GetValueFromSql(QString("select * from %1 where pt_type = '1'").arg(tableName) , 1);
    return true;
}

QString Dialog_createTableHeader::GetColumnNameString(QStringList& tableHeaders)
{
    QString strName;
    for(int i = 0; i < tableHeaders.count(); i++){
        QString value = tableHeaders.value(i);
        if (value.isEmpty())
        {
            continue;
        }
        strName += value;
        strName += ",";
    }
    strName = strName + "zjzh";
    return strName;
}

bool Dialog_createTableHeader::createTable()
{
    KsDbServer &dbserver=GtDataBase::Setdbserver(ui->comboBox->currentText());
    KsDbServer myDbserver;
    myDbserver.SetSqlQuery(dbfile);
    QString sql ="SELECT name FROM sqlite_master WHERE type='table' ORDER BY name;";
    ui->textEdit->append(sql);
    ui->textEdit->update();
    QStringList tableNamelist=dbserver.GetValueFromSql(sql,1);
    QMap<QString ,QString> tableNameMap;
    for(int i=0;i<tableNamelist.length();i++)
    {
        QString tableName = tableNamelist.value(i).remove("HX_");
        tableName = tableName.remove("RZRQ_");
        QRegExp rx("^\\d+");
        rx.indexIn(tableName, 0);
        tableName = rx.cap(0);
        if(tableName.isEmpty())
        {
            QRegExp rx4("(\\d+)");
            QStringList list;
            int pos2 = 0;
            while ((pos2 = rx4.indexIn(tableNamelist.value(i), pos2)) != -1)
            {
                list << rx4.cap(1);                                   // 第一个捕获到的文本
                pos2 += rx4.matchedLength();             // 上一个匹配的字符串的长度
            }
            tableName = list.value(1);
        }
        if(tableName.isEmpty())
        {
            continue;
        }

        tableNameMap.insert(tableName,tableNamelist.value(i));
    }
    ui->textEdit->append("seccssful!");
    ui->textEdit->update();
    if(!MergingGtCodeMap.isEmpty())
    {
        for(auto it=MergingGtCodeMap.begin();it!= MergingGtCodeMap.end();it++)
        {
            qDebug()<<"hhhhhhh==="<<it.value();
            if(tableNameMap.find(it.value())==tableNameMap.end())
            {
                QMessageBox::information(NULL, "错误", QString("数据库 %1 中 无功能号：%2 的数据").arg(ui->lineEdit_2->text()).arg(it.value()),QMessageBox::Yes);
                return false;
            }
        }

        for(auto it=MergingGtCodeMap.begin();it!= MergingGtCodeMap.end();it++)
        {
            auto item = tableNameMap.find(it.value());
            if(item == tableNameMap.end())
            {
                continue;
            }
            QString key = item.key();
            QStringList Headers;
            GetTableHeads(Headers , item.value());
            if(Headers.length() == 0)
            {
                continue;
            }
            QString sql=QString("CREATE TABLE %1(%2)").arg("HX_"+key).arg(GetColumnNameString(Headers));
            ui->textEdit->append(sql);
            if(!myDbserver.operateTableBySql(sql))
            {
               ui->textEdit->append("failed!");
            }
            else
            {
                ui->textEdit->append("seccssful!");
            }
        }
    }
    else
    {
        qDebug()<<"hhhhhhhhhh";
        int n=0;
        for(auto it=tableNameMap.begin();it!= tableNameMap.end();it++,n++)
        {
            QString key = it.key();
            QStringList Headers;
            GetTableHeads(Headers , it.value());
            if(Headers.length() == 0)
            {
                continue;
            }
            QString sql=QString("CREATE TABLE %1(%2)").arg("HX_"+key).arg(GetColumnNameString(Headers));
            ui->textEdit->append(sql);
            if(!myDbserver.operateTableBySql(sql))
            {
                ui->textEdit->append("failed!");
            }
            ui->textEdit->append("seccssful!");
            if(n%10 == 0)
            {
                QApplication::processEvents();
            }
        }
    }
    return true;

}


void Dialog_createTableHeader::on_pushButton_3_clicked()
{
    QString filename;
    if(ui->lineEdit->text().isEmpty())
    {

        if (QMessageBox::information(this, "提醒", "选择的导入数据库为空,需要新建数据库文件,请选择保存路径",
                                     QMessageBox::Yes,QMessageBox::Cancel) == QMessageBox::Cancel)
        {
            return;
        }

        filename = QFileDialog::getSaveFileName(this,
                                                tr("选择保存路径"),
                                                "DataConversion.db",
                                                tr("*.db")); //选择路径
        if(filename.indexOf(".db") < 0)
        {
            filename = filename+".db";
        }

        QFile file(filename);
        if (file.exists())
        {
            QMessageBox::information(this, "提醒", "该文件已经存在",
                                     QMessageBox::Yes,QMessageBox::Cancel);
            return ;
        }
        else
        {
            file.open( QIODevice::ReadWrite | QIODevice::Text );
            file.close();
        }
        dbfile = filename;
    }
    QElapsedTimer mstimer;     // 定义对象
    mstimer.start();
    GetMergingGtcode();
    createTable();
    double time = (double)mstimer.nsecsElapsed()/(double)1000000;
    ui->textEdit->append(QString("总耗时:%1s").arg(time/1000));
}
