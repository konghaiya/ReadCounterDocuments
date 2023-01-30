#include "widget_showdata.h"
#include "ui_widget_showdata.h"
#include<QPainter>
#include <QMouseEvent>
#include <QDebug>
#include<QHeaderView>
#include<QMessageBox>
#include "./Module/operatrionbt.h"
#include <QDateTime>
#include <QFileDialog>
Widget_ShowData::Widget_ShowData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget_ShowData)
{
    ui->setupUi(this);
    m_p_leadingInDatabase =NULL;
    m_p_dataUpdate = NULL;
    m_p_automation = NULL;
    m_p_ChoseMergingType = NULL;
    setWindowFlags(Qt::FramelessWindowHint);//无边框
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget->setSelectionMode( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
    ui->pushButton_dr->setDisabled(true);
    ui->pushButton_up->setDisabled(true);
    ui->pushButton_delete->setDisabled(true);

    //ui->pushButton_up->hide();
    //ui->pushButton_delete->hide();
    UI_Update();
}

Widget_ShowData::~Widget_ShowData()
{
    delete ui;
}

void Widget_ShowData::TablAddItem(int row, int coulmn, QString text)
{
    QTableWidgetItem *item=new QTableWidgetItem(text);
    item->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(row,coulmn,item);
}

void Widget_ShowData::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter)
    {
        on_pushButton_2_clicked();
    }
}

void Widget_ShowData::AccountTable_Update(QString key)
{
    //ui->tableWidget->clearContents();
    accountList.clear();
    if(key.length() == 0)
    {
        accountList = accountDao.selectAccountAll();
    }
    else
    {
        accountList = accountDao.selectAccount(key);
    }
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
        TablAddItem(i,4,account.getBelongdb());
        OperatrionBt *pt=new OperatrionBt(account.getIndex(),i,ui->tableWidget);
        connect(pt,SIGNAL(signalDetails(QString,int)),this,SLOT(slotDetails(QString,int)));
        connect(pt,SIGNAL(signalUpdata(QString,int)),this,SLOT(slotUpdata(QString,int)));
        connect(pt,SIGNAL(signalDelete(QString,int)),this,SLOT(slotDelete(QString,int)));
        ui->tableWidget->setCellWidget(i,5,pt);
    }
}

void Widget_ShowData::Date_Update()
{
    ui->listWidget->clear();
    ui->listWidget->addItems(databaseDao.selectAllToStrlist());

    ui->pushButton_dr->setDisabled(true);
    ui->pushButton_dr->setStyleSheet("");
    ui->pushButton_up->setDisabled(true);
    ui->pushButton_up->setStyleSheet("");
    ui->pushButton_delete->setDisabled(true);
    ui->pushButton_delete->setStyleSheet("");
}

void Widget_ShowData::UI_Update()
{
    Date_Update();
    AccountTable_Update(ui->lineEdit->text());
}

void Widget_ShowData::paintEvent(QPaintEvent *event)
{
    //QPainter painter(this);
   // painter.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/Img/img/4.jpg"));
}

void Widget_ShowData::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_bDrag = true;
        //获得鼠标的初始位置
        mouseStartPoint = event->globalPos();
        //mouseStartPoint = event->pos();
        //获得窗口的初始位置
        windowTopLeftPoint = this->frameGeometry().topLeft();
    }
}

void Widget_ShowData::mouseMoveEvent(QMouseEvent *event)
{
    if(m_bDrag)
    {
        //获得鼠标移动的距离
        QPoint distance = event->globalPos() - mouseStartPoint;
        //QPoint distance = event->pos() - mouseStartPoint;
        //改变窗口的位置
        this->move(windowTopLeftPoint + distance);
    }
}

void Widget_ShowData::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_bDrag = false;
    }
}

void Widget_ShowData::on_pushButton_clicked()
{
    if (m_p_leadingInDatabase == NULL)
    {
        m_p_leadingInDatabase = new Dialog_leadingInDatabase(this);
        connect(m_p_leadingInDatabase,SIGNAL(leading_hide()),this,SLOT(slot_leading_hide()));
    }
    m_p_leadingInDatabase->show();
}

void Widget_ShowData::slot_leading_hide()
{
    UI_Update();
    if(m_p_leadingInDatabase)
    {
        delete m_p_leadingInDatabase;
        m_p_leadingInDatabase = NULL;
    }
}

void Widget_ShowData::on_pushButton_4_clicked()
{
    this->hide();
}

void Widget_ShowData::on_listWidget_itemClicked(QListWidgetItem *item)
{
    qDebug()<<item->text();
    AccountTable_Update(item->text());

    {
        ui->pushButton_dr->setDisabled(false);
        ui->pushButton_dr->setStyleSheet("background-color: rgb(22, 155, 213);");
        ui->pushButton_up->setDisabled(false);
        ui->pushButton_up->setStyleSheet("background-color: rgb(22, 155, 213);");
        ui->pushButton_delete->setDisabled(false);
        ui->pushButton_delete->setStyleSheet("background-color: rgb(22, 155, 213);");
    }

}

void Widget_ShowData::slotDetails(QString id,int row)
{

}

void Widget_ShowData::slotUpdata(QString id,int row)
{
    if (QMessageBox::information(NULL, "提醒", QString("是否要提交第 %1 行修改后的数据!").arg(row+1),
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
    {
        return ;
    }
    QStringList AccountMsg;
    AccountMsg<<id;
    for(int j=0;j<ui->tableWidget->columnCount()-1;j++)
    {
        if(ui->tableWidget->item(row,j) == NULL or ui->tableWidget->item(row,j)->text().isEmpty())
        {
             QMessageBox::information(NULL, "错误", QString("第 %1 行 ,%2 不能为空").arg(row+1).
                                      arg(ui->tableWidget->horizontalHeaderItem(j)->text()),QMessageBox::Yes);
            return;
        }
        AccountMsg<<ui->tableWidget->item(row,j)->text();
    }
    if(accountDao.updateAccount(DC_account(AccountMsg)))
    {
        QMessageBox::information(NULL, "成功", "修改成功",QMessageBox::Yes);
    }
}

void Widget_ShowData::slotDelete(QString id,int row)
{
    if (QMessageBox::information(NULL, "提醒", QString("是否要删除第 %1 行的数据!").arg(row+1),
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
    {
        return ;
    }

    if(accountDao.deletAccountById(id))
    {
        QMessageBox::information(NULL, "成功", "删除成功",QMessageBox::Yes);
        AccountTable_Update();
    }
}


void Widget_ShowData::on_pushButton_2_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::information(NULL, "错误", "搜索内容为空！",QMessageBox::Yes);
        return;
    }

    AccountTable_Update(ui->lineEdit->text());

}

void Widget_ShowData::on_pushButton_dr_clicked()
{
    if (m_p_automation == NULL)
    {
        m_p_automation = new Dialog_automation(this);
    }
    m_p_automation->show();
    m_p_automation->setDataName(ui->listWidget->currentItem()->text());
}

void Widget_ShowData::on_pushButton_up_clicked()
{
    if(m_p_dataUpdate == NULL)
    {
        m_p_dataUpdate = new Dialog_dataUpdate(this);
        connect(m_p_dataUpdate,SIGNAL(dataUpdata_hide()),this,SLOT(slot_dataUpdata_hide()));
    }
    m_p_dataUpdate->setCurrentDataName(ui->listWidget->currentItem()->text());
    m_p_dataUpdate->Init();
    m_p_dataUpdate->show();
}

void Widget_ShowData::slot_dataUpdata_hide()
{
    UI_Update();
}

void Widget_ShowData::on_pushButton_delete_clicked()
{
    qDebug()<<QDateTime::currentDateTime().toString("_yyyyMMddhhmmssddd");
    QString dataName=ui->listWidget->currentItem()->text();
    if (QMessageBox::information(NULL, "提醒", QString("是否要删除 %1 数据库？如果删除该数据库与之对应的帐号信息也会被删除，请谨慎操作").arg(dataName),
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
    {
        return ;
    }

    if(!databaseDao.deletByNmae(dataName))
    {
        return;
    }
    if (!accountDao.deletAccountBydataName(dataName))
    {
        return;
    }
    QMessageBox::information(NULL, "成功", "删除成功!",QMessageBox::Yes);
    UI_Update();
    if(!QFile::rename("./DataConversionResource/DC_data/"+dataName,"./DataConversionResource/DC_data/"+dataName+QDateTime::currentDateTime().toString("_yyyyMMddhhmmssddd")))
    {
        QMessageBox::information(NULL, "异常", "重命名数据库文件异常!",QMessageBox::Yes);
    }
}

void Widget_ShowData::on_pushButton_3_clicked()
{
    if(m_p_ChoseMergingType == NULL)
    {
        m_p_ChoseMergingType = new Dialog_ChoseMergingType(this);
    }
    m_p_ChoseMergingType->show();
}

void Widget_ShowData::on_pushButton_5_clicked()
{
    this->showMinimized();
}
