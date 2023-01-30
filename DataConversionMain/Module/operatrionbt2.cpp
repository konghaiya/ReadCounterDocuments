#include "operatrionbt2.h"
#include "ui_operatrionbt2.h"

Operatrionbt2::Operatrionbt2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Operatrionbt2)
{
    ui->setupUi(this);
}

Operatrionbt2::Operatrionbt2(QString id, QWidget *parent):
    QWidget(parent),
    ui(new Ui::Operatrionbt2)
{
    ui->setupUi(this);

    this->id=id;
}

Operatrionbt2::~Operatrionbt2()
{
    delete ui;
}

void Operatrionbt2::on_pushButton_clicked()
{
    emit signalDetails(id);
}

void Operatrionbt2::on_pushButton_3_clicked()
{
    emit signalDelete(id);
}
