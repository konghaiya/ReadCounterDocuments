#include "form_gtmsgshowmain.h"
#include "ui_form_gtmsgshowmain.h"

Form_GtMsgShowMain::Form_GtMsgShowMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_GtMsgShowMain)
{
    ui->setupUi(this);
    GtDataBase::DataServerInit();
    Init();
    m_p_readGtFile = NULL;
    m_p_createTableHeader = NULL;
}

Form_GtMsgShowMain::~Form_GtMsgShowMain()
{
    GtDataBase::CloseDbServer();
    delete ui;
}

void Form_GtMsgShowMain::Init()
{
    this->hblayout=new QHBoxLayout(ui->widget);
    interfaceMain =new Form_GtInterfaceMain(ui->widget);
    dictionaries = new Form_Dictionaries(ui->widget);
    hblayout->addWidget(interfaceMain);
    hblayout->addWidget(dictionaries);
    dictionaries->hide();
    ui->label_gnh->show();
    ui->label_zd->hide();
    ui->label_data_update->hide();
    ui->label_scsjb->hide();
}

void Form_GtMsgShowMain::on_bt_data_update_clicked()
{
    if(m_p_readGtFile == NULL)
    {
        m_p_readGtFile = new Dialog_readGtFile(this);
        connect(m_p_readGtFile,SIGNAL(readGtFileClose()),this,SLOT(readGtFileClose()));
        m_p_readGtFile->show();
    }
    GtDataBase::CloseDbServer();
    m_p_readGtFile->show();
    ui->label_data_update->show();
}

void Form_GtMsgShowMain::on_bt_zd_clicked()
{
    interfaceMain->hide();
    dictionaries->show();
    ui->label_gnh->hide();
    ui->label_zd->show();
    ui->label_data_update->hide();
    ui->label_scsjb->hide();
}

void Form_GtMsgShowMain::on_bt_gnh_clicked()
{
    interfaceMain->show();
    dictionaries->hide();
    ui->label_gnh->show();
    ui->label_zd->hide();
    ui->label_data_update->hide();
    ui->label_scsjb->hide();
}

void Form_GtMsgShowMain::readGtFileClose()
{
    ui->label_data_update->hide();
    GtDataBase::DataServerInit();
}

void Form_GtMsgShowMain::on_bt_scsjb_clicked()
{
    if(m_p_createTableHeader == NULL)
    {
        m_p_createTableHeader = new Dialog_createTableHeader(this);
        connect(m_p_createTableHeader,SIGNAL(createTableClose()),this,SLOT(createTableClose()));
        m_p_createTableHeader->show();
    }
    m_p_createTableHeader->show();
    ui->label_scsjb->show();
}

void Form_GtMsgShowMain::createTableClose()
{
    ui->label_scsjb->hide();
}

