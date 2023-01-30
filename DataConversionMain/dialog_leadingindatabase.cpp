#include "dialog_leadingindatabase.h"
#include "ui_dialog_leadingindatabase.h"
#include<QHeaderView>
#include<QMessageBox>
#include<QDebug>
#include<QFileDialog>
#include<QList>
#include<QPainter>
#include "./DataModule/dc_accountdao.h"
#include "./DataModule/dc_databasedao.h"
#include "OverallSituation.h"
Dialog_leadingInDatabase::Dialog_leadingInDatabase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_leadingInDatabase)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget->setSelectionMode( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
}

Dialog_leadingInDatabase::~Dialog_leadingInDatabase()
{
    delete ui;
}

void Dialog_leadingInDatabase::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/Img/img/4.jpg"));
}

bool Dialog_leadingInDatabase::leadingIndatabase()
{
    if(ui->lineEdit->text().isEmpty())
    {
       QMessageBox::information(NULL, "错误", "数据库文件路径不能为空",QMessageBox::Yes);
       return false;
    }
    if(ui->lineEdit_2->text().isEmpty())
    {
       QMessageBox::information(NULL, "错误", "数据库名称不能为空",QMessageBox::Yes);
       return false;
    }

    QFileInfo fileInfo("./DataConversionResource/DC_data/"+ui->lineEdit_2->text());
    if(fileInfo.isFile())
    {
        QMessageBox::information(NULL, "错误", "该数据库文件名已经存在",QMessageBox::Yes);
        return false;
    }
    return true;
}

void Dialog_leadingInDatabase::on_pushButton_2_clicked()
{
    int rowIndex = ui->tableWidget->rowCount();
     ui->tableWidget->setRowCount(rowIndex + 1);//总行数增加1
}

void Dialog_leadingInDatabase::on_pushButton_5_clicked()
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

void Dialog_leadingInDatabase::on_pushButton_clicked()
{
    QString srcDirPath = QFileDialog::getOpenFileName(
                this, "选择要导入的数据库文件",
                DC_Path,
                "数据库文件(*.db);; 所有文件 (*.*);; ");

    if(!srcDirPath.isEmpty())
    {
        ui->lineEdit->setText(srcDirPath);
        DC_Path= srcDirPath;
    }
}

void Dialog_leadingInDatabase::TableMsgWarning(int i,QString headerName)
{
        QMessageBox::information(NULL, "错误", QString("第 %1 行 ,%2 不能为空").arg(i+1).arg(headerName),QMessageBox::Yes);
}

void Dialog_leadingInDatabase::on_pushButton_3_clicked()
{
    if(!leadingIndatabase())
    {
        return ;
    }
    QList<DC_account> AccountList;
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        QStringList AccountMsg;
        AccountMsg<<QString("0");
        for(int j=0;j<ui->tableWidget->columnCount();j++)
        {
            if(ui->tableWidget->item(i,j) == NULL or ui->tableWidget->item(i,j)->text().isEmpty())
            {
                TableMsgWarning(i,ui->tableWidget->horizontalHeaderItem(j)->text());
                return;
            }
            AccountMsg<<ui->tableWidget->item(i,j)->text();
        }
        AccountMsg<<ui->lineEdit_2->text();
        AccountList.append(DC_account(AccountMsg));
        qDebug()<<AccountMsg;
    }

    qDebug()<<QString("accountlist length= %1").arg(AccountList.length());
    if (QMessageBox::information(NULL, "提醒", "是否要提交数据!",
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
    {
        return ;
    }

    if(!QFile::copy(ui->lineEdit->text(),"./DataConversionResource/DC_data/"+ui->lineEdit_2->text()))
    {
        QMessageBox::information(NULL, "错误", "导入数据库文件失败，请检查导入的文件是否正确",QMessageBox::Yes);
        return ;
    }
    DC_databaseDao dbDao; //把帐号信息插入数据库
    if (!dbDao.inserDatabase(ui->lineEdit_2->text()))
    {
        return;
    }

    DC_accountDao accountDao; //把帐号信息插入数据库
    if (!accountDao.insertAccount(AccountList))
    {
        return;
    }

    QMessageBox::information(NULL, "成功", "导入数据库成功",QMessageBox::Yes);
    this->hide();
    emit leading_hide();
}

void Dialog_leadingInDatabase::on_pushButton_4_clicked()
{
    this->hide();
}

void Dialog_leadingInDatabase::on_lineEdit_2_textChanged(const QString &arg1)
{
    QFileInfo fileInfo("./DataConversionResource/DC_data/"+arg1);
    if(fileInfo.isFile())
    {
        ui->label_warning->setText("该文件名已经存在");
    }
    else
    {
        ui->label_warning->setText("");
    }
}
