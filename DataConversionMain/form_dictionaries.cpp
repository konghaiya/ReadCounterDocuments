#include "form_dictionaries.h"
#include "ui_form_dictionaries.h"
#include "./Module/operatrionbt5.h"
#include <QMessageBox>
#include "dialog_dt_data.h"
Form_Dictionaries::Form_Dictionaries(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Dictionaries)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget->setSelectionMode( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
}

Form_Dictionaries::~Form_Dictionaries()
{
    delete ui;
}

void Form_Dictionaries::TablAddItem(int row, int coulmn, QString text)
{
    QTableWidgetItem *item=new QTableWidgetItem(text);
    item->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(row,coulmn,item);
}

void Form_Dictionaries::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter)
    {
        on_pushButton_2_clicked();
    }
}

void Form_Dictionaries::on_pushButton_2_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::information(NULL, "错误", "搜索内容不能为空",QMessageBox::Yes);
        return;
    }
    int i=0;
    QList<Dictionaries> dtList;
    DaServer.selectDictionaries(dtList,ui->lineEdit->text());
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(dtList.count());
    for(auto it=dtList.begin();it!=dtList.end();++it,i++)
    {
        Dictionaries account = *it;
        TablAddItem(i,0,account.getDt_name());
        TablAddItem(i,1,account.getDt_msg_type());
        TablAddItem(i,2,account.getDt_ms());
        TablAddItem(i,3,account.getDt_gt_type());
        operatrionbt5 *pt=new operatrionbt5(account,ui->tableWidget);
        connect(pt,SIGNAL(signal_dt(Dictionaries*)),this,SLOT(slotDetails(Dictionaries*)));
        ui->tableWidget->setCellWidget(i,4,pt);
    }
}

void Form_Dictionaries::slotDetails(Dictionaries *id)
{
    Dialog_Dt_Data *dt_data=new Dialog_Dt_Data(this);
    dt_data->setGt_Dt(*id);
    dt_data->show();
}
