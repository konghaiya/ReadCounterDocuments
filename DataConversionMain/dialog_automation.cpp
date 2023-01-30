#include "dialog_automation.h"
#include "ui_dialog_automation.h"
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QPainter>
#include <QDateTime>
#include "ksreadconfig.h"
#include "OverallSituation.h"
QString GetTransmidName(QString path)
{
    QDir dir(path);

    //加载目录下所有文件，可以添加过滤
    QFileInfoList subFileList = dir.entryInfoList(QDir::Files | QDir::CaseSensitive);//过滤条件为只限文件并区分大小写

    //遍历并输出指定类型的文件名
    for (int i = 0;i < subFileList.length(); i++)
    {
        QFileInfo info = subFileList[i];
        QString suffix = info.suffix();//获取后缀名
        if (suffix.compare("exe") == 0)//如果后缀为"txt"
        {
            qDebug()<< info.fileName();//输出文件名称
            return info.fileName();
        }
    }
    return "";
}


Dialog_automation::Dialog_automation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_automation)
{
    ui->setupUi(this);
    this->prent=(QDialog *)parent;
    m_p_dispose = NULL;
    m_TransmidName = "TransMid.exe";
    //setWindowFlags(Qt::FramelessWindowHint);//无边框
    ui->pushButton_5->setDisabled(true);
}

Dialog_automation::~Dialog_automation()
{
    delete ui;
}

void Dialog_automation::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/Img/img/4.jpg"));
}


bool Dialog_automation::Automation_system(QString TransmidName,QString mbName,bool isjmp)
{
    if(mbName.isEmpty())
    {
        mbName=TransmidName;
    }

    QFileInfo fileInfo2(m_srcDirPath+mbName);
    if(!fileInfo2.isFile() && isjmp)
    {
        return true;
    }

    QFileInfo fileInfo(m_srcDirPath+mbName+".DataConversion");
    if(!fileInfo.isFile())
    {
        if (!QFile::rename(m_srcDirPath+mbName,m_srcDirPath+mbName+".DataConversion"))
        {
            QMessageBox::information(NULL, "错误", QString("该路径下无 %1,请检查路径是否正确或者选择柜台是否正确").arg(mbName),QMessageBox::Yes);
            return false;
        }
    }
    else
    {
        if (QMessageBox::information(NULL, "提醒", QString("该目录已经部署过模拟柜台程序 %1，是否需要重新部署!").arg(mbName),
                                     QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
        {
            return true;
        }
        QFileInfo fileInfo_b(m_srcDirPath+mbName);
        if(fileInfo_b.isFile())
        {
            QFile::remove(m_srcDirPath+mbName);
        }
    }
    QString curPath = QDir::currentPath();

    qDebug()<<curPath;

    QFileInfo fileInfo1(m_srcDirPath+mbName+".DataConversion_bak");
    if(fileInfo1.isFile())
    {
        if (!QFile::rename(m_srcDirPath+mbName+".DataConversion_bak",m_srcDirPath+mbName))
        {
            QMessageBox::information(NULL, "错误", QString("重命名 %1 发生错误").arg(m_srcDirPath+mbName+".DataConversion_bak"),QMessageBox::Yes);
            return false;
        }
    }
    else
    {
        if(!QFile::copy(QString("./DataConversionResource/%1").arg(TransmidName),m_srcDirPath+mbName))
        {
            QMessageBox::information(NULL, "错误", QString("部署 %1 失败").arg(TransmidName),QMessageBox::Yes);
            return false;
        }
    }

    return true;
}

bool Dialog_automation::Automation_mustFile()
{
    QString mustFiles=KsReadConfig::GetValue("mustFile");
    QRegExp reg("[,|，|、]");//("\\W+");//("[,|\uff0c|\u3001]");
    QStringList list = mustFiles.split(reg);
    qDebug()<<"@list = "<<list;

    for(int i=0;i<list.length();i++)
    {
        QString mustfile=list.value(i);
        if(mustfile.isEmpty() || mustfile == "0")
        {
            continue;
        }
        QFileInfo fileInfo2(m_srcDirPath+mustfile);
        if(!fileInfo2.isFile())
        {
            if(!QFile::copy("./DataConversionResource/"+mustfile,m_srcDirPath+mustfile))
            {
                QMessageBox::information(NULL, "错误", QString("部署%1失败").arg(mustfile),QMessageBox::Yes);
                return false;
            }

        }
    }
    return true;
}

bool Dialog_automation::Automation_bak_system(QString TransmidName ,bool isjamp)
{
    QFileInfo fileInfo(m_srcDirPath+TransmidName+".DataConversion");
    if(fileInfo.isFile())
    {
        if (!QFile::rename(m_srcDirPath+TransmidName,m_srcDirPath+TransmidName+".DataConversion_bak"))
        {
            QMessageBox::information(NULL, "错误", QString("该路径下无 %1,请检查路径是否正确或者选择柜台是否正确").arg(TransmidName),QMessageBox::Yes);
            return false;
        }

        if (!QFile::rename(m_srcDirPath+TransmidName+".DataConversion",m_srcDirPath+TransmidName))
        {
            QMessageBox::information(NULL, "错误", "请检查还原路径是否正确或者选择柜台是否正确",QMessageBox::Yes);
            return false;
        }
        QMessageBox::information(NULL, "成功", "还原成功",QMessageBox::Yes);
        return true;
    }
    if(isjamp)
    {
        return true;
    }
    QMessageBox::information(NULL, "错误", "请检查还原路径是否正确或者选择柜台是否正确",QMessageBox::Yes);
    return false;
}


void Dialog_automation::on_pushButton_clicked()
{
    m_srcDirPath = QFileDialog::getExistingDirectory(this, "choose src Directory",DC_Path);

    DC_Path = m_srcDirPath;

    qDebug()<<m_srcDirPath;

    ui->lineEdit->setText(m_srcDirPath);
    if (m_srcDirPath.right(1) != "/")
    {
        qDebug()<<"HHHH";
        m_srcDirPath=m_srcDirPath+"/";
    }

    QFileInfo fileInfo(m_srcDirPath+GetTransmidName(m_srcDirPath)+".DataConversion");
    if(fileInfo.isFile())
    {
        ui->pushButton_5->setDisabled(false);
    }
    else
    {
       ui->pushButton_5->setDisabled(true);
    }
}

void Dialog_automation::on_pushButton_3_clicked()
{

    QString GuiTai=ui->comboBox->currentText();

    m_srcDirPath= ui->lineEdit->text();
    if (m_srcDirPath.right(1) != "/")
    {
        qDebug()<<"HHHH";
        m_srcDirPath=m_srcDirPath+"/";
    }


    if(!this->m_dataName.isEmpty())
    {
        qDebug()<<"yyyyyy";
        QFileInfo dataFile(m_srcDirPath+"DataConversion.db");
        if(dataFile.isFile())
        {
            if (QMessageBox::information(NULL, "提醒", "改目录下已经存在DC数据库文件,是否进行覆盖",
                                         QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
            {
                return;
            }
            if(!QFile::rename(m_srcDirPath+"DataConversion.db",m_srcDirPath+"DataConversion.db"+QDateTime::currentDateTime().toString("_yyyyMMddhhmmssddd")))
            {
                QMessageBox::information(NULL, "异常", QString("重命名DataConversion.db发生异常"),QMessageBox::Yes);
                return ;
            }
        }
        if(!QFile::copy("./DataConversionResource/DC_data/"+m_dataName,m_srcDirPath+"DataConversion.db"))
        {
            QMessageBox::information(NULL, "错误", QString("部署%1 文件失败").arg(m_dataName),QMessageBox::Yes);
            return ;
        }
    }


    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::information(NULL, "错误", "Transmid 目录路径不能为空",QMessageBox::Yes);
        return;
    }


    if(GuiTai == "恒生")
    {
        if(!Automation_system("HsT2Link.dll"))
        {
            return;
        }
        if(!Automation_system("TransMid.exe"))
        {
            return;
        }
    }
    else if (GuiTai == "金正W")
    {
        if(!Automation_system("KCBPLink.dll","KCBPLink.dll",true))
        {
            return;
        }
        if(!Automation_system("TransMid.exe"))
        {
            return;
        }
    }
    else if (GuiTai == "金正W统一接入")
    {
        if(!Automation_system("TransMid_fs.exe","TransMid.exe"))
        {
            return;
        }
    }
    else if (GuiTai == "金正U")
    {
        m_TransmidName=GetTransmidName(m_srcDirPath);
        if(!Automation_bak_system(m_TransmidName))
        {
            return;
        }
    }
    else
    {
        if(!Automation_system("TransMid.exe"))
        {
            return;
        }
    }
    if(!Automation_mustFile())
    {
        return;
    }
    QMessageBox::information(NULL, "成功", "部署成功进入配置页面",QMessageBox::Yes);

    if (m_p_dispose == NULL)
    {
        m_p_dispose = new Dialog_dispose(this);
        //关闭信号
        connect(m_p_dispose,SIGNAL(dispose_hide()),this,SLOT(slot_dispose_hide()));
    }
    m_p_dispose->set_configPath(m_srcDirPath);
    m_p_dispose->set_TransmidName(m_TransmidName);
    m_p_dispose->show();
    this->hide();
    return;
}

void Dialog_automation::slot_dispose_hide()
{
    this->show();
}
QString Dialog_automation::dataName()
{
    return m_dataName;
}

void Dialog_automation::setDataName(const QString &dataName)
{
    m_dataName = dataName;
}


void Dialog_automation::on_pushButton_2_clicked()
{
    if (QMessageBox::information(NULL, "提醒", " 确定还原目录？",
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
    {
        return;
    }

    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::information(NULL, "错误", "Transmid 目录路径不能为空",QMessageBox::Yes);
        return;
    }

    m_srcDirPath= ui->lineEdit->text();

    if (m_srcDirPath.right(1) != "/")
    {
        qDebug()<<"HHHH";
        m_srcDirPath=m_srcDirPath+"/";
    }
    QString GuiTai=ui->comboBox->currentText();

    if(GuiTai == "恒生")
    {
        Automation_bak_system("HsT2Link.dll");
        Automation_bak_system("TransMid.exe");
    }
    else if (GuiTai == "金正W")
    {
        Automation_bak_system("KCBPLink.dll",true);
        Automation_system("TransMid.exe");
    }
    else
    {
        m_TransmidName=GetTransmidName(m_srcDirPath);
        Automation_bak_system(m_TransmidName);
    }

}

void Dialog_automation::on_pushButton_4_clicked()
{
    this->hide();
    this->prent->show();
}

void Dialog_automation::on_pushButton_5_clicked()
{
    if (m_p_dispose == NULL)
    {
        m_p_dispose = new Dialog_dispose(this);
        //关闭信号
        connect(m_p_dispose,SIGNAL(dispose_hide()),this,SLOT(slot_dispose_hide()));
    }
    m_p_dispose->set_configPath(m_srcDirPath);
    m_p_dispose->set_TransmidName(GetTransmidName(m_srcDirPath));
    m_p_dispose->show();
    this->hide();
}
