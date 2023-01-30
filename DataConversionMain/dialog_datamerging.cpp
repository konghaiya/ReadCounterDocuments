#include "dialog_datamerging.h"
#include "ui_dialog_datamerging.h"
#include <QMessageBox>
#include<QFileInfo>
#include<QFileDialog>
#include<QElapsedTimer>
#include<QTextCursor>
#include<QDateTime>
#include"OverallSituation.h"
Dialog_dataMerging::Dialog_dataMerging(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_dataMerging)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection); //设置选择模式，选择单行
    ui->lineEdit_3->setPlaceholderText("输入需要合并的柜台功能号,多个以逗号分隔,如果为空则合并全部数据");
}

Dialog_dataMerging::~Dialog_dataMerging()
{
    delete ui;
}

void Dialog_dataMerging::beginMerGingData()
{
    QString sql ="SELECT name FROM sqlite_master WHERE type='table' ORDER BY name;";
    ui->textEdit->append(sql);
    ui->textEdit->update();
    QStringList tableNamelist=m_dbserverhb.GetValueFromSql(sql,1);
    QMap<QString ,QString> tableNameMap;
    for(int i=0;i<tableNamelist.length();i++)
    {
        tableNameMap.insert(tableNamelist.value(i),tableNamelist.value(i));
    }

    qDebug()<<tableNamelist;
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
                return;
            }
        }
    }
    for(int i=0;i<tableNamelist.length();i++)
    {
        if(tableNamelist.value(i)==0)
            continue;
        QString tableName=tableNamelist.value(i);

        if(!MergingGtCodeMap.isEmpty())
        {
            if(MergingGtCodeMap.find(tableName)==MergingGtCodeMap.end())
            {
                continue;
            }
        }

        if(tableName.compare("sqlite_sequence")==0)
            continue;
        ui->textEdit->append("beginMerGing Table:"+tableName);
        zjzhclunmCount= -1;
        if(!MerGingTable(tableName))
            return;
    }
    ui->textEdit->append("数据合并完成!");
}

bool Dialog_dataMerging::MerGingTable(QString tableName)
{
    QString sql="select * from "+tableName;
    ui->textEdit->append(sql);
    if(!m_dbserverhb.operateTableBySql(sql))
    {
        return false;
    }
    ui->textEdit->append("seccssful!");
    QSqlRecord sqlRecord(m_dbserverhb.getSqlQuery()->record());
    QStringList tableHeadList;
    QString HeadString= GetColumnNameString(sqlRecord,tableHeadList);
    sql = QString("select * from sqlite_master where name='%1'").arg(tableName);
    ui->textEdit->append(sql);
    if(!m_dbserverBase.operateTableBySql(sql))
    {
        return false;
    }
    ui->textEdit->append("seccssful!");
    if(!m_dbserverBase.getSqlQuery()->next())
    {
        sql=QString("CREATE TABLE %1(%2)").arg(tableName).arg(HeadString);

        ui->textEdit->append(sql);
        if(!m_dbserverBase.operateTableBySql(sql))
        {
            return false;
        }
        ui->textEdit->append("seccssful!");

    }
    static int n=0;
    while (m_dbserverhb.getSqlQuery()->next())
    {
        sql ="INSERT INTO %1(%2) SELECT %3 WHERE not exists (SELECT * from %4 where %5)";
        QStringList dataList;
        for (int i=0; i<sqlRecord.count();i++)
        {
            dataList<<m_dbserverhb.getSqlQuery()->value(i).toString();
        }
        sql=sql.arg(tableName).arg(HeadString).arg(GetValueString(dataList)).arg(tableName).arg(GetNoRepeatString(tableHeadList,dataList));
        ui->textEdit->append(sql);
        if(!m_dbserverBase.operateTableBySql(sql))
        {
            return false;
        }
        ui->textEdit->append("seccssful!");
        if(n%10 == 0)
        {
            QApplication::processEvents();
        }
        n++;
    }
    return true;
}

QString Dialog_dataMerging::GetColumnNameString(QSqlRecord sqlRecord,QStringList& tableNames)
{
    QString strName;
    for(int i = 0; i < sqlRecord.count(); i++){
        QString value = sqlRecord.fieldName(i);
        if (value.isEmpty())
        {
            continue;
        }
        tableNames<<value;
        if(value.compare("zjzh") == 0)
        {
            zjzhclunmCount=i;
        }
        strName += value;
        strName += ",";
    }
    strName = strName.left(strName.length() -1);
    return strName;
}

QString Dialog_dataMerging::GetValueString(QStringList tabledata)
{
    QString strValue;
    for(int i = 0;i < tabledata.length();++i)
    {
        QString value=tabledata.value(i);
        if(zjzhclunmCount == i)
        {
            if(!m_HbAccountMap.value(value).isEmpty())
            {
                value=m_HbAccountMap.value(value);
            }
        }
        if (value.isEmpty())
        {
            value="--";
        }
        strValue += "'";
        strValue += value;
        strValue += "',";
    }
    strValue = strValue.left(strValue.length() -1);
    return strValue;
}

void Dialog_dataMerging::SetBaseDb(QString dbPath)
{
    ui->lineEdit->setText(dbPath);
    ui->lineEdit->setReadOnly(true);
    ui->pushButton->setDisabled(true);
}

QString Dialog_dataMerging::GetNoRepeatString(QStringList HeadList,QStringList tabledata)
{
    QString strValue;
    for(int i = 0;i < tabledata.length();++i)
    {
        QString key = HeadList.value(i);
        if (key.isEmpty())
        {
            if (i==tabledata.length()-1)
            {
                strValue=strValue.left(strValue.length()-4);
            }
            continue;
        }
        QString value = tabledata.value(i);
        if(zjzhclunmCount == i)
        {
            if(!m_HbAccountMap.value(value).isEmpty())
            {
                value=m_HbAccountMap.value(value);
            }
        }
        if (value.isEmpty())
        {
            value="--";
        }
        strValue += key;
        strValue += "='";
        strValue += value;
        strValue += "'";
        if (i < (tabledata.length()-1))
        {
            strValue += " and ";
        }

    }
    return strValue;
}

void Dialog_dataMerging::on_pushButton_clicked()
{

    QString srcDirPath = QFileDialog::getOpenFileName(
                this, "选择要基础数据库文件",
                DC_Path,
                "数据库文件(*.db);; 所有文件 (*.*);; ");

    if(!srcDirPath.isEmpty())
    {
        ui->lineEdit->setText(srcDirPath);
        DC_Path = srcDirPath;
    }
}


void Dialog_dataMerging::on_pushButton_2_clicked()
{
    QString srcDirPath = QFileDialog::getOpenFileName(
                this, "选择要合并数据库文件",
                DC_Path,
                "数据库文件(*.db);; 所有文件 (*.*);; ");

    if(!srcDirPath.isEmpty())
    {
        ui->lineEdit_2->setText(srcDirPath);
        DC_Path = srcDirPath;
    }
}

bool Dialog_dataMerging::AccountHb()
{
    m_HbAccountMap.clear();
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        if(ui->tableWidget->item(i,0)&& !ui->tableWidget->item(i,0)->text().isEmpty())
        {
            if(ui->tableWidget->item(i,1) ==NULL || ui->tableWidget->item(i,1)->text().isEmpty()|| ui->tableWidget->item(i,1)->text() == "")
            {
                QMessageBox::information(NULL, "错误", QString("第 %1 行 ,%2 不能为空").arg(i+1).arg("合并帐号不能为空"),QMessageBox::Yes);
                return false;
            }
        }
        else if(ui->tableWidget->item(i,1)&& !ui->tableWidget->item(i,1)->text().isEmpty())
        {
            if(ui->tableWidget->item(i,0) ==NULL || ui->tableWidget->item(i,0)->text().isEmpty() || ui->tableWidget->item(i,0)->text() == "")
            {
                QMessageBox::information(NULL, "错误", QString("第 %1 行 ,%2 不能为空").arg(i+1).arg("基础帐号不能为空"),QMessageBox::Yes);
                return false;
            }
        }
        else if(MergingType &&(!ui->tableWidget->item(i,0) || ui->tableWidget->item(i,0)->text().isEmpty()))
        {
            QMessageBox::information(NULL, "错误", QString("第 %1 行 ,%2 不能为空").arg(i+1).arg("帐号不能为空"),QMessageBox::Yes);
            return false;
        }
        if(ui->tableWidget->item(i,0)==NULL || ui->tableWidget->item(i,1) == NULL)
        {
            return true;
        }
        m_HbAccountMap.insert(ui->tableWidget->item(i,1)->text(),ui->tableWidget->item(i,0)->text());
    }
    return true;
}

bool Dialog_dataMerging::GetMergingGtcode()
{
    MergingGtCodeMap.clear();
    if(!ui->lineEdit_3->text().isEmpty())
    {
        QRegExp reg("[,|，|、]");//("\\W+");//("[,|\uff0c|\u3001]");
        QStringList MergingGtCodelist=ui->lineEdit_3->text().split(reg);
        for(int i=0;i<MergingGtCodelist.length();i++)
        {
            MergingGtCodeMap.insert("HX_"+MergingGtCodelist.value(i),"HX_"+MergingGtCodelist.value(i));
        }
    }
}


void Dialog_dataMerging::on_pushButton_3_clicked()
{
    ui->textEdit->clear();
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::information(this,"错误", "基础数据库文件不能为空！",QMessageBox::Yes);
        return;
    }
    if(ui->lineEdit_2->text().isEmpty())
    {
        QMessageBox::information(this,"错误", "合并数据库文件不能为空！",QMessageBox::Yes);
        return;
    }
    /*
    if(hbdataFile.compare(ui->lineEdit_2->text())==0)
    {
        QMessageBox::information(this,"错误", "已经合并过该数据,无需重复合并！",QMessageBox::Yes);
        return;
    }
    */
    if(!m_dbserverBase.SetSqlQuery(ui->lineEdit->text()))
    {
        QMessageBox::information(this,"错误", "打开基础数据库失败！请确认选择数据库文件是否正确",QMessageBox::Yes);
        return;
    }
    if(MergingType)
    {
        temporaryFileName= "./DataConversionResource/DC_data/"+QDateTime::currentDateTime().toString("THS_yyyyMMddhhmmssddd")+".db";
        if(!QFile::copy(ui->lineEdit->text(),temporaryFileName))
        {
            QMessageBox::information(NULL, "错误", "拷贝数据库发生异常",QMessageBox::Yes);
            return ;
        }
        if(!m_dbserverhb.SetSqlQuery(temporaryFileName))
        {
            QMessageBox::information(this,"错误", "打开合并数据库失败！请确认选择数据库文件是否正确",QMessageBox::Yes);
            return;
        }
    }
    else if(!m_dbserverhb.SetSqlQuery(ui->lineEdit_2->text()))
    {
        QMessageBox::information(this,"错误", "打开合并数据库失败！请确认选择数据库文件是否正确",QMessageBox::Yes);
        return;
    }
    if (QMessageBox::information(this, "提醒", QString("是否需要将 %1 中的数据合并到 %2 文件中？").arg(ui->lineEdit_2->text()).arg(ui->lineEdit->text()),
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
    {
        return ;
    }
    if(!AccountHb())
    {
        return;
    }
    GetMergingGtcode();
    hbdataFile= ui->lineEdit_2->text();
    QElapsedTimer mstimer;     // 定义对象
    mstimer.start();
    beginMerGingData();
    ui->pushButton_3->setDisabled(true);
    double time = (double)mstimer.nsecsElapsed()/(double)1000000;
    ui->textEdit->append(QString("总耗时:%1s").arg(time/1000));
    m_dbserverBase.closeSlafDatabase();
    m_dbserverhb.closeSlafDatabase();
    ui->pushButton_3->setDisabled(false);
    if(MergingType)
    {
        qDebug()<<"deletefile="<<temporaryFileName;
        QFile::remove(temporaryFileName);
    }
}

void Dialog_dataMerging::on_pushButton_4_clicked()
{
    int rowIndex = ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(rowIndex + 1);//总行数增加1
}

void Dialog_dataMerging::on_pushButton_5_clicked()
{
    int rowIndex = ui->tableWidget->currentRow();
    if (rowIndex != -1)
    {
        ui->tableWidget->removeRow(rowIndex);
    }
    else
    {
        QMessageBox::information(NULL, "错误", "无选中行",QMessageBox::Yes);
    }
}
bool Dialog_dataMerging::getMergingType() const
{
    return MergingType;
}

void Dialog_dataMerging::setMergingType(bool value)
{
    MergingType = value;
    if(MergingType)
    {
        ui->label_2->hide();
        ui->lineEdit_2->hide();
        ui->pushButton_2->hide();
    }
    else
    {
        ui->label_2->show();
        ui->lineEdit_2->show();
        ui->pushButton_2->show();
    }
}


void Dialog_dataMerging::on_lineEdit_textChanged(const QString &arg1)
{
    if(MergingType)
    {
        ui->lineEdit_2->setText(arg1);
    }
}
