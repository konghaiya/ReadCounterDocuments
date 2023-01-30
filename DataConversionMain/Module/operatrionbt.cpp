#include "operatrionbt.h"
#include "ui_operatrionbt.h"
OperatrionBt::OperatrionBt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OperatrionBt)
{
    ui->setupUi(this);
}

OperatrionBt::OperatrionBt(QString id, int row, QWidget *parent):
    QWidget(parent),
    ui(new Ui::OperatrionBt)
{
    ui->setupUi(this);
    ui->pushButton->hide();
    this->id=id;
    this->row = row;
}

OperatrionBt::~OperatrionBt()
{
    delete ui;
}

void OperatrionBt::setId(QString id)
{
    this->id=id;
}

QString OperatrionBt::getId()
{
    return this->id;
}

void OperatrionBt::on_pushButton_clicked()
{
    emit signalDetails(this->id,this->row);
}

void OperatrionBt::on_pushButton_2_clicked()
{
    emit signalUpdata(this->id,this->row);
}

void OperatrionBt::on_pushButton_3_clicked()
{
    emit signalDelete(this->id,this->row);
}
int OperatrionBt::getRow()
{
    return row;
}

void OperatrionBt::setRow(int value)
{
    row = value;
}

