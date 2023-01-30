#include "dialog_dispose.h"
#include "ui_dialog_dispose.h"
#include <QMessageBox>
#include <QSettings>  //读写ini文件
#include <QTextCodec>
#include "DC_Process.h"
#include <QPainter>
#include <QDir>
#include <QFileDialog>
#include <QDebug>


Dialog_dispose::Dialog_dispose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_dispose)
{
    ui->setupUi(this);
    m_TransmidName="TransMid.exe";
}


Dialog_dispose::Dialog_dispose(QString configPath, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_dispose)
{
    ui->setupUi(this);
    this->m_configPath = configPath;
    //setWindowFlags(Qt::FramelessWindowHint);//无边框
}


void Dialog_dispose::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/Img/img/4.jpg"));
}



Dialog_dispose::~Dialog_dispose()
{
    delete ui;
}

void Dialog_dispose::set_configPath(QString configPath)
{
    if(this->m_configPath.compare(configPath) != 0)
    {
        this->m_configPath=configPath;
        ui->pushButton->setDisabled(false);
        ui->pushButton_2->setDisabled(false);
        ui->pushButton_3->setDisabled(false);
        ui->pushButton_4->setDisabled(false);
    }
}

void Dialog_dispose::set_TransmidName(QString TransmidName)
{
    this->m_TransmidName = TransmidName;
}


void Dialog_dispose::on_pushButton_clicked()
{
     QSettings *configIni = new QSettings(m_configPath + "DataConversion.ini", QSettings::IniFormat);
     configIni->setValue("system/JhGtData",1);
     configIni->setValue("system/UseGtData",0);
     delete configIni;
     if (QMessageBox::information(NULL, "成功", QString("设置成功需要重启 %1 程序!").arg(m_configPath +m_TransmidName),
                                  QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
     {
         if(KillProcess(m_TransmidName))
         {
             StartProcess(m_configPath +m_TransmidName);
         }
     }
     ui->pushButton->setDisabled(true);
     ui->pushButton_2->setDisabled(false);
     ui->pushButton_3->setDisabled(false);
     ui->pushButton_4->setDisabled(false);
}

void Dialog_dispose::on_pushButton_2_clicked()
{
    QSettings *configIni = new QSettings(m_configPath + "DataConversion.ini", QSettings::IniFormat);
    configIni->setValue("system/JhGtData",0);
    delete configIni;
    if (QMessageBox::information(NULL, "成功", QString("设置成功需要重启 %1 程序!").arg(m_configPath +m_TransmidName),
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        if(KillProcess(m_TransmidName))
        {
            StartProcess(m_configPath +m_TransmidName);
        }
    }
    ui->pushButton_2->setDisabled(true);
    ui->pushButton->setDisabled(false);
    ui->pushButton_3->setDisabled(false);
    ui->pushButton_4->setDisabled(false);

}

void Dialog_dispose::on_pushButton_3_clicked()
{
    QSettings *configIni = new QSettings(m_configPath + "DataConversion.ini", QSettings::IniFormat);
    configIni->setValue("system/UseGtData",1);
    delete configIni;
    if (QMessageBox::information(NULL, "成功", QString("设置成功需要重启 %1 程序!").arg(m_configPath +m_TransmidName),
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        if(KillProcess(m_TransmidName))
        {
            StartProcess(m_configPath +m_TransmidName);
        }
    }
    ui->pushButton_3->setDisabled(true);
    ui->pushButton_4->setDisabled(false);
    ui->pushButton_2->setDisabled(false);
    ui->pushButton->setDisabled(false);
}

void Dialog_dispose::on_pushButton_4_clicked()
{
    QSettings *configIni = new QSettings(m_configPath + "DataConversion.ini", QSettings::IniFormat);
    configIni->setValue("system/UseGtData",0);
    delete configIni;
    if (QMessageBox::information(NULL, "成功", QString("设置成功需要重启 %1 程序!").arg(m_configPath +m_TransmidName),
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        if(KillProcess(m_TransmidName))
        {
            StartProcess(m_configPath +m_TransmidName);
        }
    }
    ui->pushButton_4->setDisabled(true);
    ui->pushButton->setDisabled(false);
    ui->pushButton_2->setDisabled(false);
    ui->pushButton_3->setDisabled(false);

}

void Dialog_dispose::on_pushButton_5_clicked()
{
    this->hide();
    emit dispose_hide();
}

void Dialog_dispose::on_pushButton_6_clicked()
{
    QFileInfo fileInfo(m_configPath+"DataConversion.xml");
    if(fileInfo.isFile())
    {
         QMessageBox::information(NULL, "错误", QString("%1 路径下已存在 入参校验配置文件 DataConversion.xml ").arg(m_configPath),QMessageBox::Yes);
         return;
    }

    if(!QFile::copy("./DataConversionResource/DataConversion.xml",m_configPath+"DataConversion.xml"))
    {
        QMessageBox::information(NULL, "错误", QString("部署 %1 失败").arg("DataConversion.xml"),QMessageBox::Yes);
        return ;
    }
    QMessageBox::information(NULL, "成功", QString("%1 路径下已导入成功 入参校验配置文件 DataConversion.xml ").arg(m_configPath),QMessageBox::Yes);
}
