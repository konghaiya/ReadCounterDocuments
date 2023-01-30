#include "operatrionbt4.h"
#include "ui_operatrionbt4.h"

operatrionbt4::operatrionbt4(QWidget *parent):
    QWidget(parent),
    ui(new Ui::operatrionbt4)
{
    ui->setupUi(this);

}

operatrionbt4::operatrionbt4(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::operatrionbt4)
{
    ui->setupUi(this);
    this->id = id;
}

operatrionbt4::operatrionbt4(gt_interface &id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::operatrionbt4)
{
    ui->setupUi(this);
    this->gt_it = id;
}

operatrionbt4::~operatrionbt4()
{
    delete ui;
}

void operatrionbt4::on_pushButton_2_clicked()
{
    emit signalDetails(&gt_it);
}
