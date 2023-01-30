#include "dialog_dt_data.h"
#include "ui_dialog_dt_data.h"
#include "gtdatabase.h"
Dialog_Dt_Data::Dialog_Dt_Data(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Dt_Data)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget->setSelectionMode( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
}

Dialog_Dt_Data::~Dialog_Dt_Data()
{
    delete ui;
}

void Dialog_Dt_Data::TablAddItem(int row, int coulmn, QString text,QTableWidget *tableWidget)
{
    QTableWidgetItem *item=new QTableWidgetItem(text);
    item->setTextAlignment(Qt::AlignCenter);
    tableWidget->setItem(row,coulmn,item);
}


void Dialog_Dt_Data::UpdataTable()
{
    ui->tableWidget->clearContents();
    QList<Dt_Data> rclist;
    GtDataBase::selectDtData(rclist,gt_dt);

    ui->tableWidget->setRowCount(rclist.count());
    int i=0;
    for(auto it=rclist.begin();it!=rclist.end();++it,i++)
    {
        Dt_Data account = *it;
        TablAddItem(i,0,account.getDt_value(),ui->tableWidget);
        TablAddItem(i,1,account.getDt_value_ms(),ui->tableWidget);
    }
}


void Dialog_Dt_Data::setGt_Dt(const Dictionaries &value)
{
    gt_dt = value;

    ui->label_top->setText(QString("字段名称：%1  柜台：%2").arg(gt_dt.getDt_name()).arg(gt_dt.getDt_gt_type()));

    UpdataTable();
}
