#include "operatrionbt3.h"
#include "ui_operatrionbt3.h"

OperatrionBt3::OperatrionBt3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OperatrionBt3)
{
    ui->setupUi(this);
}

OperatrionBt3::OperatrionBt3(QString id, QWidget *parent):
    QWidget(parent),
    ui(new Ui::OperatrionBt3)
{
    ui->setupUi(this);

    this->id=id;
}

OperatrionBt3::~OperatrionBt3()
{
    delete ui;
}

void OperatrionBt3::on_pushButton_2_clicked()
{
    emit signalDelete(id);
}
