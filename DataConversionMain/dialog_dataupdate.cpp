#include "dialog_dataupdate.h"
#include "ui_dialog_dataupdate.h"
#include <QMessageBox>
#include<QHeaderView>
#include<QFileInfo>
#include<QFileDialog>
#include "OverallSituation.h"
Dialog_dataUpdate::Dialog_dataUpdate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_dataUpdate)
{
    ui->setupUi(this);
    m_p_dataMerging = NULL;
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection); //设置选择模式，选择单行
}

Dialog_dataUpdate::~Dialog_dataUpdate()
{
    delete ui;
}

void Dialog_dataUpdate::TablAddItem(int row, int coulmn, QString text)
{
    QTableWidgetItem *item=new QTableWidgetItem(text);
    item->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(row,coulmn,item);
}

void Dialog_dataUpdate::Init()
{
    ui->tableWidget->clearContents();
    accountList.clear();
    accountList = accountDao.selectAccount(m_currentDataName);
    int i=0;
    ui->tableWidget->setRowCount(accountList.count());
    qDebug()<<QString("行数：%1").arg(accountList.count());
    for(auto it=accountList.begin();it!=accountList.end();++it,i++)
    {
        DC_account account = *it;
        TablAddItem(i,0,account.getAccount_number());
        TablAddItem(i,1,account.getAccount_type());
        TablAddItem(i,2,account.getAccount_GT());
        TablAddItem(i,3,account.getAccount_msg());
    }

    ui->lineEdit_2->setText(m_currentDataName);
    ui->label_warning->setText("");
}

void Dialog_dataUpdate::on_pushButton_clicked()
{
    if (QMessageBox::information(NULL, "提醒", QString("是否要重新上传数据库文件？该操作会替换之前的数据库"),
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
    {
        return ;
    }

    QString srcDirPath = QFileDialog::getOpenFileName(
                this, "选择要导入的数据库文件",
                DC_Path,
                "数据库文件(*.db);; 所有文件 (*.*);; ");

    if(!srcDirPath.isEmpty())
    {
        ui->lineEdit->setText(srcDirPath);
        DC_Path = srcDirPath;
    }

}
QString Dialog_dataUpdate::getCurrentDataName()
{
    return m_currentDataName;
}

void Dialog_dataUpdate::setCurrentDataName(const QString &value)
{
    m_currentDataName = value;
}

void Dialog_dataUpdate::TableMsgWarning(int i,QString headerName)
{
        QMessageBox::information(NULL, "错误", QString("第 %1 行 ,%2 不能为空").arg(i+1).arg(headerName),QMessageBox::Yes);
}


void Dialog_dataUpdate::on_pushButton_3_clicked()
{
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
    if (QMessageBox::information(NULL, "提醒", "是否要提交修改!",
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
    {
        return ;
    }
    if(!ui->lineEdit->text().isEmpty())
    {

        if(!QFile::copy(ui->lineEdit->text(),"./DataConversionResource/DC_data/"+ui->lineEdit_2->text()))
        {
            QMessageBox::information(NULL, "错误", "导入数据库文件失败，请检查导入的文件是否正确",QMessageBox::Yes);
            return ;
        }
    }
    if (ui->lineEdit->text().isEmpty() && m_currentDataName.compare(ui->lineEdit_2->text()) != 0)
    {
        if (QMessageBox::information(NULL, "提醒", "您对数据库名称作出了修改，是否要提交修改？",
                                     QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
        {

            if(!QFile::rename("./DataConversionResource/DC_data/"+m_currentDataName,"./DataConversionResource/DC_data/"+ui->lineEdit_2->text()))
            {
                QMessageBox::information(NULL, "异常", "重命名数据库文件异常!",QMessageBox::Yes);
                return ;
            }
            if(!databaseDao.updateDatabaseByName(m_currentDataName,ui->lineEdit_2->text()))
                return;
        }
    }
    if(!accountDao.deletAccountBydataName(m_currentDataName))
    {
        return;
    }

    if (!accountDao.insertAccount(AccountList))
    {
        return;
    }

    QMessageBox::information(NULL, "成功", "导入数据库成功",QMessageBox::Yes);
    this->hide();
    emit dataUpdata_hide();
}

void Dialog_dataUpdate::on_lineEdit_2_textChanged(const QString &arg1)
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



void Dialog_dataUpdate::on_pushButton_4_clicked()
{
    this->hide();
}

void Dialog_dataUpdate::on_pushButton_2_clicked()
{
    int rowIndex = ui->tableWidget->rowCount();
     ui->tableWidget->setRowCount(rowIndex + 1);//总行数增加1
}

void Dialog_dataUpdate::on_pushButton_5_clicked()
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

void Dialog_dataUpdate::on_pushButton_6_clicked()
{
    if(m_p_dataMerging == NULL)
    {
        m_p_dataMerging = new Dialog_dataMerging(this);
    }
    m_p_dataMerging->SetBaseDb("./DataConversionResource/DC_data/"+m_currentDataName);
    m_p_dataMerging->show();
}
