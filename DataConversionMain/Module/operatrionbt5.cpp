#include "operatrionbt5.h"
#include "ui_operatrionbt5.h"

operatrionbt5::operatrionbt5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::operatrionbt5)
{
    ui->setupUi(this);
}

operatrionbt5::operatrionbt5(Dictionaries &dt, QWidget *parent):
    QWidget(parent),
    ui(new Ui::operatrionbt5)
{
    ui->setupUi(this);
    this->dt=dt;
}

operatrionbt5::~operatrionbt5()
{
    delete ui;
}

void operatrionbt5::on_pushButton_clicked()
{
    emit signal_dt(&dt);
}
