#include "dialog_interface.h"
#include "ui_dialog_interface.h"
#include "Module/operatrionbt5.h"
#include "dialog_dt_data.h"
#include <QMessageBox>
Dialog_interface::Dialog_interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_interface)
{
    ui->setupUi(this);
    ui->tableWidget_cc->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_cc->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget_rc->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_rc->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
}

Dialog_interface::~Dialog_interface()
{
    delete ui;
}
gt_interface Dialog_interface::getGt_it()
{
    return gt_it;
}

void Dialog_interface::TablAddItem(int row, int coulmn, QString text,QTableWidget *tableWidget)
{
    QTableWidgetItem *item=new QTableWidgetItem(text);
    item->setTextAlignment(Qt::AlignCenter);
    tableWidget->setItem(row,coulmn,item);
}

void Dialog_interface::UpdataTable()
{
    ui->tableWidget_cc->clearContents();
    ui->tableWidget_rc->clearContents();
    QList<interfaceMsg> rclist;
    QList<interfaceMsg> cclist;
    GtDataBase::selectInterfaceMsg(rclist,gt_it,"0");

    ui->tableWidget_rc->setRowCount(rclist.count());
    int i=0;
    for(auto it=rclist.begin();it!=rclist.end();++it,i++)
    {
        interfaceMsg account = *it;
        TablAddItem(i,0,account.getPt_name(),ui->tableWidget_rc);
        TablAddItem(i,1,account.getPt_ms(),ui->tableWidget_rc);
        TablAddItem(i,2,account.getPt_msg_type(),ui->tableWidget_rc);
        TablAddItem(i,3,account.getPt_bz(),ui->tableWidget_rc);
        TablAddItem(i,4,account.getPt_is_must(),ui->tableWidget_rc);
        Dictionaries dt =GtDataBase::selectDictionariesByName(account.getPt_name(),gt_it.getInterface_gt_type());
        operatrionbt5 *pt=new operatrionbt5(dt,ui->tableWidget_rc);
        connect(pt,SIGNAL(signal_dt(Dictionaries*)),this,SLOT(slotDetails(Dictionaries*)));
        ui->tableWidget_rc->setCellWidget(i,5,pt);
    }
    i=0;
    GtDataBase::selectInterfaceMsg(cclist,gt_it,"1");
    ui->tableWidget_cc->setRowCount(cclist.count());
    for(auto it=cclist.begin();it!=cclist.end();++it,i++)
    {
        interfaceMsg account = *it;
        TablAddItem(i,0,account.getPt_name(),ui->tableWidget_cc);
        TablAddItem(i,1,account.getPt_ms(),ui->tableWidget_cc);
        TablAddItem(i,2,account.getPt_msg_type(),ui->tableWidget_cc);
        TablAddItem(i,3,account.getPt_bz(),ui->tableWidget_cc);

        Dictionaries dt =GtDataBase::selectDictionariesByName(account.getPt_name(),gt_it.getInterface_gt_type());
        operatrionbt5 *pt=new operatrionbt5(dt,ui->tableWidget_cc);
        connect(pt,SIGNAL(signal_dt(Dictionaries*)),this,SLOT(slotDetails(Dictionaries*)));
        ui->tableWidget_cc->setCellWidget(i,4,pt);
    }
}

void Dialog_interface::slotDetails(Dictionaries *id)
{
    if(id->getDt_name().isEmpty())
    {
        QMessageBox::information(NULL, "提醒", "该字段无字典信息",QMessageBox::Yes);
        return;
    }
    Dialog_Dt_Data *dt_data=new Dialog_Dt_Data(this);
    dt_data->setGt_Dt(*id);
    dt_data->show();
}

void Dialog_interface::setGt_it(const gt_interface &value)
{
    gt_it = value;

    ui->label_top->setText(QString("功能号：%1  柜台：%2  类型：%3").arg(gt_it.getInterface_gnh(true)).
                           arg(gt_it.getInterface_gt_type()).arg(gt_it.getInterface_yw_type()));
    ui->textEdit_ms->setText(gt_it.getInterface_ms());
    ui->textEdit_bz->setText(gt_it.getInterface_bz());

    UpdataTable();
}

