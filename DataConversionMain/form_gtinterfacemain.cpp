#include "form_gtinterfacemain.h"
#include "ui_form_gtinterfacemain.h"
#include<QMessageBox>
#include"./Module/operatrionbt4.h"
Form_GtInterfaceMain::Form_GtInterfaceMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_GtInterfaceMain)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget->setSelectionMode( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
}

Form_GtInterfaceMain::~Form_GtInterfaceMain()
{
    delete ui;
}

void Form_GtInterfaceMain::TablAddItem(int row, int coulmn, QString text)
{
    QTableWidgetItem *item=new QTableWidgetItem(text);
    item->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(row,coulmn,item);
}

void Form_GtInterfaceMain::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter)
    {
        on_pushButton_2_clicked();
    }
}

void Form_GtInterfaceMain::on_pushButton_2_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::information(NULL, "错误", "搜索内容不能为空",QMessageBox::Yes);
        return;
    }
    int i=0;
    interfaceData.clear();
    DaServer.selectInterface(interfaceData,ui->lineEdit->text());
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(interfaceData.count());
    for(auto it=interfaceData.begin();it!=interfaceData.end();++it,i++)
    {
        gt_interface account = *it;
        TablAddItem(i,0,account.getInterface_gnh(true));
        TablAddItem(i,1,account.getInterface_ms());
        TablAddItem(i,2,account.getInterface_yw_type());
        TablAddItem(i,3,account.getInterface_gt_type());
        TablAddItem(i,4,account.getInterface_bz());
        operatrionbt4 *pt=new operatrionbt4(account,ui->tableWidget);
        connect(pt,SIGNAL(signalDetails(gt_interface*)),this,SLOT(slotDetails(gt_interface*)));
        ui->tableWidget->setCellWidget(i,5,pt);
    }
}

void Form_GtInterfaceMain::slotDetails(gt_interface *id)
{
    Dialog_interface * itMsg=new Dialog_interface(this);
    itMsg->setGt_it(*id);
    itMsg->show();
}
