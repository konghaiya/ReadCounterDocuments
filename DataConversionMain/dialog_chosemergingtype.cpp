#include "dialog_chosemergingtype.h"
#include "ui_dialog_chosemergingtype.h"

Dialog_ChoseMergingType::Dialog_ChoseMergingType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_ChoseMergingType)
{
    ui->setupUi(this);
    m_p_dataMerging=NULL;
}

Dialog_ChoseMergingType::~Dialog_ChoseMergingType()
{
    delete ui;
}

void Dialog_ChoseMergingType::on_pushButton_4_clicked()
{
    if(m_p_dataMerging == NULL)
    {
        m_p_dataMerging = new Dialog_dataMerging(this);
    }
    m_p_dataMerging->setMergingType(false);
    m_p_dataMerging->show();
    this->hide();
}

void Dialog_ChoseMergingType::on_pushButton_3_clicked()
{
    if(m_p_dataMerging == NULL)
    {
        m_p_dataMerging = new Dialog_dataMerging(this);
    }
    m_p_dataMerging->setMergingType(true);
    m_p_dataMerging->show();
    this->hide();
}
