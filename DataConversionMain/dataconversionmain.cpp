#include "dataconversionmain.h"
#include "ui_dataconversionmain.h"
#include  <QDebug>
#include <QMouseEvent>
#include "ksdbserver.h"
#include "OverallSituation.h"
QString DC_Path = "./";

DataConversionMain::DataConversionMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataConversionMain)
{
    ui->setupUi(this);
    m_p_automation = NULL;
    m_p_ShowData = NULL;
    m_p_readGtFile = NULL;
    m_p_InterfaceMain= NULL;
    setWindowFlags(Qt::FramelessWindowHint);//无边框
}

DataConversionMain::~DataConversionMain()
{
    if (m_p_ShowData != NULL)
    {
        delete m_p_ShowData;
    }
    if (m_p_InterfaceMain != NULL)
    {
        delete m_p_InterfaceMain;
    }
    delete ui;
    KsDbServer::closeDatabase();
}


void DataConversionMain::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/Img/img/6.jpg"));
}

void DataConversionMain::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_bDrag = true;
        //获得鼠标的初始位置
        mouseStartPoint = event->globalPos();
        //mouseStartPoint = event->pos();
        //获得窗口的初始位置
        windowTopLeftPoint = this->frameGeometry().topLeft();
    }
}

void DataConversionMain::mouseMoveEvent(QMouseEvent *event)
{
    if(m_bDrag)
    {
        //获得鼠标移动的距离
        QPoint distance = event->globalPos() - mouseStartPoint;
        //QPoint distance = event->pos() - mouseStartPoint;
        //改变窗口的位置
        this->move(windowTopLeftPoint + distance);
    }
}

void DataConversionMain::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_bDrag = false;
    }
}


void DataConversionMain::on_pushButton_clicked()
{
    this->hide();
    exit(1);
}

void DataConversionMain::on_pushButton_2_clicked()
{
    if (m_p_automation == NULL)
    {
        m_p_automation = new Dialog_automation(this);
    }
    m_p_automation->show();
}

void DataConversionMain::on_pushButton_3_clicked()
{
    if (m_p_ShowData == NULL)
    {
        m_p_ShowData = new Widget_ShowData();
    }
    m_p_ShowData->show();
}

void DataConversionMain::on_pushButton_4_clicked()
{
    this->showMinimized();
}

void DataConversionMain::on_pushButton_5_clicked()
{
    if (m_p_InterfaceMain == NULL)
    {
        m_p_InterfaceMain = new Form_GtMsgShowMain();
    }
    m_p_InterfaceMain->show();
}
