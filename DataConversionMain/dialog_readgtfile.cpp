#include "dialog_readgtfile.h"
#include "ui_dialog_readgtfile.h"
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include <QAxWidget>
Dialog_readGtFile::Dialog_readGtFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_readGtFile)
{
    ui->setupUi(this);
    progressDialog = new QProgressDialog(this);
    QFont font("ZYSong18030", 12);
    progressDialog->setFont(font);
    progressDialog->setWindowModality(Qt::WindowModal);
    progressDialog->setMinimumDuration(10);
    progressDialog->setFixedSize(400,80);
    progressDialog->hide();
    m_yw_type=0;
}

Dialog_readGtFile::~Dialog_readGtFile()
{
    delete progressDialog;
    delete ui;
}

bool Dialog_readGtFile::Cread_gt_interface_table()
{
    QString sql;

    sql = QString("select * from sqlite_master where name='gt_interface'");
    if(!m_dbserver.operateTableBySql(sql))
    {
        return false;
    }
    if(!m_dbserver.getSqlQuery()->next())
    {
        sql="CREATE TABLE gt_interface(interface_gnh,interface_gnms,interface_bz,interface_gt_type,interface_yw_type)";
        if(!m_dbserver.operateTableBySql(sql))
        {
            //if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                         //QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
           // {
                return false;
            //}

        }
    }
    return true;
}

bool Dialog_readGtFile::Insert_gnh_table(QString gnh, QString pt_name, QString pt_ms, QString pt_msg_type,
                                         QString pt_bz, QString pt_type, QString pt_is_must)
{
    QString sql;

    sql=QString("INSERT INTO %1 VALUES('%2','%3','%4','%5','%6','%7')").arg(gnh).arg(pt_name).
            arg(pt_ms).arg(pt_msg_type).arg(pt_bz).
            arg(pt_type).arg(pt_is_must);
    if(!m_dbserver.operateTableBySql(sql))
    {
        //if (QMessageBox::information(NULL, "提醒", "是否继续？",
                    //                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
       // {
            return false;
       // }
    }
    return true;
}

bool Dialog_readGtFile::Cread_gnh_table(QString gnh)
{
    QString sql;

    sql = QString("select * from sqlite_master where name='%1'").arg(gnh);
    if(!m_dbserver.operateTableBySql(sql))
    {
        return false;
    }
    if(!m_dbserver.getSqlQuery()->next())
    {
        sql=QString("CREATE TABLE %1(pt_name,pt_ms,pt_msg_type,pt_bz,pt_type,pt_is_must)").arg(gnh);
        if(!m_dbserver.operateTableBySql(sql))
        {
          //  if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                        // QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
           // {
                return false;
           // }

        }
    }
    else
    {
        sql=QString("DELETE FROM %1").arg(gnh);
        if(!m_dbserver.operateTableBySql(sql))
        {
           // if (QMessageBox::information(NULL, "提醒", "是否继续？",
               //                          QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
           // {
                return false;
           // }

        }
    }
    return true;
}

bool Dialog_readGtFile::Cread_Dictionaries_table()
{
    QString sql = "select * from sqlite_master where name='HX_Dictionaries'";
    if(!m_dbserver.operateTableBySql(sql))
    {
        return false;
    }
    if(!m_dbserver.getSqlQuery()->next())
    {
        sql="CREATE TABLE HX_Dictionaries(Dt_name,Dt_msg_type,Dt_ms,Dt_id,Dt_gt_type)";
        if(!m_dbserver.operateTableBySql(sql))
        {
            //if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                      //   QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
           // {
                return false;
           // }

        }
    }
    return true;
}

bool Dialog_readGtFile::Cread_Dt_Data_table()
{
    QString sql = "select * from sqlite_master where name='HX_Dt_Data'";
    if(!m_dbserver.operateTableBySql(sql))
    {
        return false;
    }
    if(!m_dbserver.getSqlQuery()->next())
    {
        sql="CREATE TABLE HX_Dt_Data(Dt_name,Dt_value,Dt_value_ms)";
        if(!m_dbserver.operateTableBySql(sql))
        {
            //if (QMessageBox::information(NULL, "提醒", "是否继续？",
                   //                      QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
          //  {
                return false;
           // }

        }
    }
    return true;
}


bool Dialog_readGtFile::readHsGtFile(QString filePath)
{
    progressDialog->setValue(0);
    progressDialog->setWindowTitle(tr("请耐心等待,正在加载Excel驱动"));
    progressDialog->setLabelText(tr("正在加载Excel驱动.."));
    progressDialog->setCancelButtonText(tr("取消"));
    progressDialog->show();
    QApplication::processEvents();
    QAxObject excel("Excel.Application"); //加载Excel驱动
    if(!excel.setProperty("Visible", false)) //不显示Excel界面，如果为true会看到启动的Excel界面
    {
        progressDialog->hide();
        QMessageBox::information(NULL, "失败", "加载Excel驱动失败，请安装office 后重试",QMessageBox::Yes);
        return false;
    }

    QAxObject* pWorkBooks = excel.querySubObject("WorkBooks");

    pWorkBooks->dynamicCall("Open (const QString&)", filePath);//打开指定文

    QAxObject* pWorkBook = excel.querySubObject("ActiveWorkBook");

    QAxObject* pWorkSheets = pWorkBook->querySubObject("Sheets");//获取工作表

    int nSheetCount = pWorkSheets->property("Count").toInt();  //获取工作表的数目
    qDebug()<<"nSheetCount="<<nSheetCount;


    if (QMessageBox::information(NULL, "提醒", "是否删除旧数据库？（因为恒生柜台普通接口文件和两融是分开的,更新数据时第一次删除就可以了，更新第二个文件时不需要删除）",
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        m_dbserver.closeSlafDatabase();
        QFile::remove("./GtBaseData/HSBaseData.db");
    }

    m_dbserver.SetSqlQuery("./GtBaseData/HSBaseData.db");

    if(!readHsGtJkFile(pWorkBook))
    {
        return false;
    }
    if(!readHsGtZdFile(pWorkBook))
    {
        return false;
    }
    progressDialog->hide();
    pWorkBook->dynamicCall("Close()");
    return true;
}

bool Dialog_readGtFile::readHsGtJkFile(QAxObject *pWorkBook)
{
    progressDialog->setWindowTitle(tr("请耐心等待,正在更新恒生柜台接口信息！"));
    progressDialog->setLabelText(tr("正在更新恒生柜台接口信息..."));
    QAxObject* pWorkSheet = pWorkBook->querySubObject("Sheets(int)", 6);//获取接口信息表
    QVariant var;
    //读取当前工作表所有数据
    QAxObject *usedRange = pWorkSheet->querySubObject("UsedRange");
    var = usedRange->dynamicCall("Value");

    QAxObject * rows = usedRange->querySubObject("Rows");
    QAxObject * columns = usedRange->querySubObject("Columns");
    int intRows = rows->property("Count").toInt();
    int intCols = columns->property("Count").toInt();
    qDebug() << "xls行数："<<intRows;
    qDebug() << "xls列数："<<intCols;
    QVariantList allEnvDataList = var.toList();
    qDebug() <<"数据："<<allEnvDataList.length();

    progressDialog->setRange(0, intRows);

    bool rucan=false;
    bool chucan=false;
    QString gnh;  //功能号
    QString gnh_name; //功能描述
    QString gnh_ms; //功能描述
    QString gnh_bz; //备注
    int yhsm=0;
    bool yhsmStat=false;   //开始记录功能号

    QString sql;

    if(!Cread_gt_interface_table())
    {
        delete usedRange;
        return false;
    }
    for(int i=0;i<allEnvDataList.length();i++)
    {
        QVariantList RowDataList=allEnvDataList[i].toList();
        QString value= RowDataList.value(0).toString();
        if(yhsmStat && i == yhsm+1)
        {
            gnh_bz = RowDataList.value(1).toString();
            gnh_bz.remove("'", Qt::CaseInsensitive);
            gnh_bz.remove(QChar(','), Qt::CaseInsensitive);
            if(gnh_bz.compare("错误号") == 0)
            {
                gnh_bz = "";
            }
            if(gnh_ms.isEmpty())
            {
                gnh_ms= gnh_name;
            }
            sql=QString("INSERT INTO gt_interface(interface_gnh,interface_gnms,interface_bz,interface_gt_type,interface_yw_type) VALUES('%1','%2','%3','恒生','%4')").
                    arg(gnh).arg(gnh_ms).arg(gnh_bz).arg(m_yw_type);
            if(!m_dbserver.operateTableBySql(sql))
            {
                if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                             QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
                {
                    return false;
                }
            }

        }
        else if(value.compare("功能号") == 0)
        {

            if(m_yw_type == 0)
            {
               gnh="HX_"+RowDataList.value(1).toString();
            }
            else
            {
               gnh="HX_RZRQ_"+RowDataList.value(1).toString();
            }
            if(!Cread_gnh_table(gnh))
            {
                return false;
            }
        }
        else if(value.compare("功能名称") == 0)
        {
            gnh_name=RowDataList.value(1).toString();
            gnh_name.replace("'","");
        }
        else if(value.compare("功能描述") == 0)
        {
            gnh_ms=RowDataList.value(1).toString();
            gnh_ms.replace("'","");
        }
        else if(value.compare("业务说明") == 0)
        {
            yhsm=i;
            yhsmStat=true;
            chucan=false;
        }
        else if(value.compare("输入参数") == 0)
        {
            rucan=true;
        }
        else if(value.compare("输出参数") == 0)
        {
            rucan=false;
            chucan=true;
        }
        else if(rucan)
        {
            QString pt_bz=RowDataList.value(5).toString();
            pt_bz.remove("'", Qt::CaseInsensitive);
            pt_bz.remove(QChar(','), Qt::CaseInsensitive);

            if(!Insert_gnh_table(gnh,RowDataList.value(1).toString(),RowDataList.value(3).toString(),RowDataList.value(2).toString(),
                                 pt_bz,"0",RowDataList.value(4).toString()))
            {
                return false;
            }

        }
        else if(chucan)
        {
            QString pt_bz=RowDataList.value(5).toString();
            pt_bz.remove("'", Qt::CaseInsensitive);
            pt_bz.remove(QChar(','), Qt::CaseInsensitive);
            if(!Insert_gnh_table(gnh,RowDataList.value(1).toString(),RowDataList.value(3).toString(),RowDataList.value(2).toString(),
                                 pt_bz,"1",RowDataList.value(4).toString()))
            {
                return false;
            }
        }

        progressDialog->setValue(i);
        if (progressDialog->wasCanceled())
        {
            progressDialog->hide();
            return false;
        }
        //for(int j=0;j<RowDataList.length();j++)
       // {
         //   qDebug()<<RowDataList.value(j);
       // }

    }
    delete usedRange;
    return true;
}

bool Dialog_readGtFile::readHsGtZdFile(QAxObject *pWorkBook)
{
    progressDialog->setWindowTitle(tr("请耐心等待,正在更新恒生柜台字段信息！"));
    progressDialog->setLabelText(tr("正在更新恒生柜台字段信息..."));
    progressDialog->setValue(0);
    QAxObject* pWorkSheet = pWorkBook->querySubObject("Sheets(int)", 3);//获取第一张表
    QVariant var;
    //读取当前工作表所有数据
    QAxObject *usedRange = pWorkSheet->querySubObject("UsedRange");
    var = usedRange->dynamicCall("Value");

    QAxObject * rows = usedRange->querySubObject("Rows");
    QAxObject * columns = usedRange->querySubObject("Columns");
    int intRows = rows->property("Count").toInt();
    int intCols = columns->property("Count").toInt();
    qDebug() << "xls行数："<<intRows;
    qDebug() << "xls列数："<<intCols;
    QVariantList allEnvDataList = var.toList();
    qDebug() <<"数据："<<allEnvDataList.length();

    progressDialog->setRange(0, intRows);

    if(!Cread_Dictionaries_table())
    {
        delete usedRange;
        return false;
    }

    bool beginstat=false;
    QString sql;
    for(int i=0;i<allEnvDataList.length();i++)
    {
        QVariantList RowDataList=allEnvDataList[i].toList();
        QString value= RowDataList.value(0).toString();
        if(beginstat)
        {
            sql =QString("INSERT INTO HX_Dictionaries(Dt_name,Dt_msg_type,Dt_ms,Dt_id,Dt_gt_type) VALUES('%1','%2','%3','%4','恒生')").
                    arg(RowDataList.value(1).toString()).arg(RowDataList.value(2).toString()).
                    arg(RowDataList.value(3).toString()).arg(RowDataList.value(4).toString());
            if(!m_dbserver.operateTableBySql(sql))
            {
                if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                             QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
                {
                    delete usedRange;
                    return false;
                }

            }
        }
        else if(value.compare("序号") == 0)
        {
            beginstat=true;
        }
        progressDialog->setValue(i);
        if (progressDialog->wasCanceled())
        {
            progressDialog->hide();
            delete usedRange;
            return false;
        }
    }
    delete usedRange;

    if(readHsGtZdValueFile(pWorkBook))
    {
        return true;
    }
    return false;
}

bool Dialog_readGtFile::readHsGtZdValueFile(QAxObject *pWorkBook)
{
    progressDialog->setWindowTitle(tr("请耐心等待,正在更新恒生柜台字典信息！"));
    progressDialog->setLabelText(tr("正在更新恒生柜台字典信息..."));
    progressDialog->setValue(0);
    QAxObject* pWorkSheet = pWorkBook->querySubObject("Sheets(int)", 4);//获取第一张表
    QVariant var;
    //读取当前工作表所有数据
    QAxObject *usedRange = pWorkSheet->querySubObject("UsedRange");
    var = usedRange->dynamicCall("Value");

    QAxObject * rows = usedRange->querySubObject("Rows");
    QAxObject * columns = usedRange->querySubObject("Columns");
    int intRows = rows->property("Count").toInt();
    int intCols = columns->property("Count").toInt();
    qDebug() << "xls行数："<<intRows;
    qDebug() << "xls列数："<<intCols;
    QVariantList allEnvDataList = var.toList();
    qDebug() <<"数据："<<allEnvDataList.length();

    progressDialog->setRange(0, intRows);

    if(!Cread_Dt_Data_table())
    {
        delete usedRange;
        return false;
    }
    bool beginstat=false;
    QString sql;
    QVector<QString> VcDt_name;
    for(int i=0;i<allEnvDataList.length();i++)
    {
        QVariantList RowDataList=allEnvDataList[i].toList();
        QString value= RowDataList.value(0).toString();
        if(value.compare("序号") == 0)
        {
            beginstat=true;
        }
        else if(beginstat && !value.isEmpty())
        {
            sql=QString("select Dt_name from HX_Dictionaries where Dt_id='%1'").arg(RowDataList.value(1).toString());
            VcDt_name= m_dbserver.GetRecordValueFromTableBySql(sql,1);
        }
        else if(beginstat)
        {
            for(int i=0;i<VcDt_name.length();i++)
            {
                QString Dt_name=VcDt_name.value(i);
                sql =QString("INSERT INTO HX_Dt_Data(Dt_name,Dt_value,Dt_value_ms) VALUES('%1','%2','%3')").
                        arg(Dt_name).arg(RowDataList.value(1).toString()).
                        arg(RowDataList.value(2).toString());
                if(!m_dbserver.operateTableBySql(sql))
                {
                    if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
                    {
                        delete usedRange;
                        return false;
                    }

                }
            }
        }

        progressDialog->setValue(i+1);
        if (progressDialog->wasCanceled())
        {
            progressDialog->hide();
            delete usedRange;
            return false;
        }
    }
    delete usedRange;
    return true;
}

bool Dialog_readGtFile::readJzwGtFile(QString filePath)
{
    QString dbfileName="./GtBaseData/JZWBaseData.db";

    if(ui->comboBox->currentText().compare("金正U") == 0)
    {
        dbfileName="./GtBaseData/JZUBaseData.db";

    }

    if (QMessageBox::information(NULL, "提醒", "是否删除旧数据库？（因为恒生柜台普通接口文件和两融是分开的,更新数据时第一次删除就可以了，更新第二个文件时不需要删除）",
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        m_dbserver.closeSlafDatabase();
        QFile::remove(dbfileName);
    }
    m_dbserver.SetSqlQuery(dbfileName);

    progressDialog->setValue(0);
    progressDialog->setWindowTitle(tr("请耐心等待,正在加载Word.Application驱动"));
    progressDialog->setLabelText(tr("正在加载Word.Application驱动.."));
    progressDialog->setCancelButtonText(tr("取消"));
    progressDialog->show();
    QApplication::processEvents();

    QAxWidget *m_word = new QAxWidget("Word.Application");
    m_word->setProperty("Visible",false);
    QAxObject *m_document = m_word->querySubObject("Documents");
    m_document->querySubObject("Open(const QString&)",filePath);
    QAxObject *m_docx = m_word->querySubObject("ActiveDocument");//获取当前工作簿
    if (NULL == m_docx) return false;

    if(ui->comboBox_2->currentText().compare("字典") == 0)
    {
        if(!readJzwGtZdFile(m_docx))
        {
            progressDialog->hide();
            return false;
        }
    }
    else if(!readJzwGtJkFile(m_docx))
    {
        progressDialog->hide();
        return false;
    }
    //关闭Document
    m_docx->dynamicCall("Close()");
    delete m_docx;
    m_document->dynamicCall("Close()");
    delete m_document;
    m_word->dynamicCall("Quit()");
    m_word->clear();
    delete m_word;
}


QString Dialog_readGtFile::getWorldTableValue(QAxObject *table,int row,int col)
{
    QAxObject *cell = table->querySubObject("Cell(int,int)",row,col);
    if (NULL ==cell) return "";
    QString value=cell->querySubObject("Range")->property("Text").toString();
    value=value.simplified();
    value.remove(' ');
    value.remove('');
    value.remove("'");
    cell->clear();
    delete cell;
    cell=NULL;
    return value;
}

bool Dialog_readGtFile::readJzwGtJkFile(QAxObject *m_docx)
{
    progressDialog->setWindowTitle(QString("请耐心等待,正在更新%1柜台接口信息！").arg(ui->comboBox->currentText()));
    progressDialog->setLabelText(QString("正在更新%1柜台接口信息...").arg(ui->comboBox->currentText()));
    progressDialog->setValue(0);

    if(!Cread_gt_interface_table())
    {
        return false;
    }

    QAxObject* tables = m_docx->querySubObject("Tables"); //获取所有表格
    int tablecount = 1;
    if (NULL != tables)
    {
        tablecount = tables->dynamicCall("Count").toInt(); //获取表格个数
        tables->clear();
        delete tables;
        tables = NULL;
    }

    qDebug()<<tablecount;

    QString gnh;
    QString gnh_ms;
    QString gnh_bz;
    bool rucan=false;
    bool chucan=false;

    QString sql;
    for(int i = 1; i < tablecount+1; ++i)
    {
        QAxObject *table = m_docx->querySubObject("Tables(int)",i); //获取某个表格
        if (NULL ==table) continue;
        if(getWorldTableValue(table,1,1).indexOf("功能代码") < 0)
        {
            continue;
        }
        QString str_gnh = getWorldTableValue(table,1,2);
       // QRegExp rx("\\d+");
        //rx.indexIn(str_gnh, 0);
        //gnh = rx.cap(0);
        str_gnh.replace("(","_");
        str_gnh.remove(")");
        gnh = str_gnh;
        progressDialog->setLabelText(QString("正在更新接口%1 的信息,总进度：%2%").arg(gnh).arg((double)i*100/tablecount));
        if(m_yw_type == 0)
        {
           gnh="HX_"+gnh;
        }
        else
        {
           gnh="HX_RZRQ_"+gnh;
        }
        if(!Cread_gnh_table(gnh))
        {
            continue;
        }
        gnh_ms =getWorldTableValue(table,2,2);
        int row = table->querySubObject("Rows")->property("Count").toInt();

        progressDialog->setRange(0, row);

       // int col = table->querySubObject("Columns")->property("Count").toInt();
        for (int j = 3; j < row+1; ++j)
        {
            QString value = getWorldTableValue(table,j,1);
            qDebug()<<"value=="<<value;
            if(value.indexOf("请求数据") >= 0)
            {
                rucan =true;
                chucan =false;
            }
            else if(value.indexOf("返回数据") >= 0)
            {
                rucan =false;
                chucan =true;
            }
            else if(value.indexOf("错误描述") >= 0)
            {
                rucan =false;
                chucan =false;
            }
            else if(value.indexOf("备注信息") >= 0)
            {
                gnh_bz=getWorldTableValue(table,j,2);
                sql=QString("INSERT INTO gt_interface(interface_gnh,interface_gnms,interface_bz,interface_gt_type,interface_yw_type) VALUES('%1','%2','%3','%4','%5')").
                        arg(gnh).arg(gnh_ms).arg(gnh_bz).arg(ui->comboBox->currentText()).arg(m_yw_type);
                if(!m_dbserver.operateTableBySql(sql))
                {
                    if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
                    {
                        return false;
                    }
                }
            }
            else if(rucan)
            {
                if(!Insert_gnh_table(gnh,getWorldTableValue(table,j,3),getWorldTableValue(table,j,2),
                                     getWorldTableValue(table,j,4),getWorldTableValue(table,j,6),"0",getWorldTableValue(table,j,5)))
                {
                    return false;
                }
            }
            else if(chucan)
            {
                if(!Insert_gnh_table(gnh,getWorldTableValue(table,j,3),getWorldTableValue(table,j,2),
                                     getWorldTableValue(table,j,4),getWorldTableValue(table,j,5),"1",""))
                {
                    return false;
                }
            }

            progressDialog->setValue(j);
            if (progressDialog->wasCanceled())
            {
                progressDialog->hide();
                return false;
            }
        }
        table->clear();
        delete table;
        table = NULL;

    }
    progressDialog->hide();
    return true;
}

bool Dialog_readGtFile::readJzwGtZdFile(QAxObject *m_docx)
{
    progressDialog->setWindowTitle(QString("请耐心等待,正在更新%1柜台字典信息！").arg(ui->comboBox->currentText()));
    progressDialog->setLabelText(QString("正在更新%1柜台字典信息...").arg(ui->comboBox->currentText()));
    progressDialog->setValue(0);

    QAxObject* tables = m_docx->querySubObject("Tables"); //获取所有表格
    int tablecount = 1;
    if (NULL != tables)
    {
        tablecount = tables->dynamicCall("Count").toInt(); //获取表格个数
        tables->clear();
        delete tables;
        tables = NULL;


    }

    if(!Cread_Dt_Data_table())
    {
        return false;
    }

    if(!Cread_Dictionaries_table())
    {
        return false;
    }

    QString sql;
    for(int i = 1; i < tablecount+1; ++i)
    {
        QAxObject *table = m_docx->querySubObject("Tables(int)",i); //获取某个表格
        if (NULL ==table) continue;

        QString Dt_name=getWorldTableValue(table,1,1);
        QString Dt_ms = getWorldTableValue(table,1,2);
        progressDialog->setLabelText(QString("正在更新字典%1 的信息,总进度：%2%").arg(Dt_name).arg((double)i*100/tablecount));

        sql =QString("INSERT INTO HX_Dictionaries(Dt_name,Dt_ms,Dt_gt_type) VALUES('%1','%2','%3')").
                arg(Dt_name).arg(Dt_ms).arg(ui->comboBox->currentText());
        if(!m_dbserver.operateTableBySql(sql))
        {
            if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                         QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
            {
                table->clear();
                delete table;
                table = NULL;
                progressDialog->hide();
                return false;
            }

        }

        int row = table->querySubObject("Rows")->property("Count").toInt();

        progressDialog->setRange(0, row);
        for (int j = 2; j < row+1; ++j)
        {
            sql =QString("INSERT INTO HX_Dt_Data(Dt_name,Dt_value,Dt_value_ms) VALUES('%1','%2','%3')").
                    arg(Dt_name).arg(getWorldTableValue(table,j,1)).
                    arg(getWorldTableValue(table,j,2));
            if(!m_dbserver.operateTableBySql(sql))
            {
                if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                             QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
                {
                    table->clear();
                    delete table;
                    table = NULL;
                    progressDialog->hide();
                    return false;
                }

            }
            progressDialog->setValue(j);
            if (progressDialog->wasCanceled())
            {
                progressDialog->hide();
                return false;
            }
        }
        table->clear();
        delete table;
        table = NULL;
    }
}


bool Dialog_readGtFile::readDDGtFile(QString filePath)
{
    progressDialog->setValue(0);
    progressDialog->setWindowTitle(tr("请耐心等待,正在加载Excel驱动"));
    progressDialog->setLabelText(tr("正在加载Excel驱动.."));
    progressDialog->setCancelButtonText(tr("取消"));
    progressDialog->show();
    QApplication::processEvents();
    QAxObject excel("Excel.Application"); //加载Excel驱动
    if(!excel.setProperty("Visible", false)) //不显示Excel界面，如果为true会看到启动的Excel界面
    {
        progressDialog->hide();
        QMessageBox::information(NULL, "失败", "加载Excel驱动失败，请安装office 后重试",QMessageBox::Yes);
        return false;
    }

    QAxObject* pWorkBooks = excel.querySubObject("WorkBooks");

    pWorkBooks->dynamicCall("Open (const QString&)", filePath);//打开指定文

    QAxObject* pWorkBook = excel.querySubObject("ActiveWorkBook");

    QAxObject* pWorkSheets = pWorkBook->querySubObject("Sheets");//获取工作表

    int nSheetCount = pWorkSheets->property("Count").toInt();  //获取工作表的数目
    qDebug()<<"nSheetCount="<<nSheetCount;

    /*if(nSheetCount < 8)
    {
        progressDialog->hide();
        QMessageBox::information(NULL, "错误", "选择的文件非顶点柜台文档",QMessageBox::Yes);
        return false;
    }*/
    if (QMessageBox::information(NULL, "提醒", "是否删除旧数据库？（因为顶点柜台普通接口文件和两融是分开的,更新数据时第一次删除就可以了，更新第二个文件时不需要删除）",
                                 QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        m_dbserver.closeSlafDatabase();
        QFile::remove("./GtBaseData/DDBaseData.db");
    }

    m_dbserver.SetSqlQuery("./GtBaseData/DDBaseData.db");

    if(!readDDGtJkFile(pWorkBook))
    {
        return false;
    }
    if(!readDDGtZdFile(pWorkBook))
    {
        return false;
    }
    progressDialog->hide();
    pWorkBook->dynamicCall("Close()");
    return true;
}

bool Dialog_readGtFile::readDDGtJkFile(QAxObject *pWorkBook)
{
    progressDialog->setWindowTitle(tr("请耐心等待,正在更新顶点柜台接口信息！"));
    progressDialog->setLabelText(tr("正在更新顶点柜台接口信息..."));
    QAxObject* pWorkSheet = pWorkBook->querySubObject("Sheets(int)", 1);//获取接口信息表
    QVariant var;
    //读取当前工作表所有数据
    QAxObject *usedRange = pWorkSheet->querySubObject("UsedRange");
    var = usedRange->dynamicCall("Value");

    QAxObject * rows = usedRange->querySubObject("Rows");
    QAxObject * columns = usedRange->querySubObject("Columns");
    int intRows = rows->property("Count").toInt();
    int intCols = columns->property("Count").toInt();
    qDebug() << "xls行数："<<intRows;
    qDebug() << "xls列数："<<intCols;
    QVariantList allEnvDataList = var.toList();
    qDebug() <<"数据："<<allEnvDataList.length();

    progressDialog->setRange(0, intRows);

    bool rucan=false;
    bool chucan=false;
    QString gnh;  //功能号
    QString gnh_ms; //功能描述
    QString gnh_bz; //备注

    QString sql;

    if(!Cread_gt_interface_table())
    {
        delete usedRange;
        return false;
    }
    for(int i=0;i<allEnvDataList.length();i++)
    {
        QVariantList RowDataList=allEnvDataList[i].toList();
        QString value= RowDataList.value(1).toString();
        if(value.compare("功能号") == 0)
        {
            chucan=false;
            if(m_yw_type == 0)
            {
               gnh="HX_"+RowDataList.value(2).toString();
            }
            else
            {
               gnh="HX_RZRQ_"+RowDataList.value(2).toString();
            }
            if(!Cread_gnh_table(gnh))
            {
                return false;
            }
        }
        else if(value.compare("功能名称") == 0)
        {
            gnh_ms=RowDataList.value(2).toString();
            gnh_ms.replace("'","");
        }
        else if(value.compare("功能说明") == 0)
        {
            gnh_bz = RowDataList.value(2).toString();
            gnh_bz.remove("'", Qt::CaseInsensitive);
            gnh_bz.remove(QChar(','), Qt::CaseInsensitive);
            sql=QString("INSERT INTO gt_interface(interface_gnh,interface_gnms,interface_bz,interface_gt_type,interface_yw_type) VALUES('%1','%2','%3','顶点','%4')").
                    arg(gnh).arg(gnh_ms).arg(gnh_bz).arg(m_yw_type);
            if(!m_dbserver.operateTableBySql(sql))
            {
                if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                             QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
                {
                    return false;
                }
            }
        }
        else if(value.compare("输入参数") == 0)
        {
            rucan=true;
            QString type = RowDataList.value(2).toString();
            if (type.compare("参数名") != 0)
            {
                QString pt_bz=RowDataList.value(6).toString();
                pt_bz.remove("'", Qt::CaseInsensitive);
                pt_bz.remove(QChar(','), Qt::CaseInsensitive);

                if(!Insert_gnh_table(gnh,RowDataList.value(2).toString(),pt_bz,RowDataList.value(4).toString(),
                                     pt_bz,"0",RowDataList.value(5).toString()))
                {
                    return false;
                }

            }
        }
        else if(value.compare("输出参数") == 0)
        {
            rucan=false;
            chucan=true;
            QString pt_bz=RowDataList.value(6).toString();
            pt_bz.remove("'", Qt::CaseInsensitive);
            pt_bz.remove(QChar(','), Qt::CaseInsensitive);

            if(!Insert_gnh_table(gnh,RowDataList.value(2).toString(),pt_bz,RowDataList.value(4).toString(),
                                 pt_bz,"1",RowDataList.value(5).toString()))
            {
                return false;
            }
        }
        else if(rucan)
        {
            QString pt_bz=RowDataList.value(6).toString();
            pt_bz.remove("'", Qt::CaseInsensitive);
            pt_bz.remove(QChar(','), Qt::CaseInsensitive);

            if(!Insert_gnh_table(gnh,RowDataList.value(2).toString(),pt_bz,RowDataList.value(4).toString(),
                                 pt_bz,"0",RowDataList.value(5).toString()))
            {
                return false;
            }

        }
        else if(chucan)
        {
            QString pt_bz=RowDataList.value(6).toString();
            pt_bz.remove("'", Qt::CaseInsensitive);
            pt_bz.remove(QChar(','), Qt::CaseInsensitive);

            if(!Insert_gnh_table(gnh,RowDataList.value(2).toString(),pt_bz,RowDataList.value(4).toString(),
                                 pt_bz,"1",RowDataList.value(5).toString()))
            {
                return false;
            }
        }

        progressDialog->setValue(i);
        if (progressDialog->wasCanceled())
        {
            progressDialog->hide();
            return false;
        }

    }
    delete usedRange;
    return true;
}

bool Dialog_readGtFile::readDDGtZdFile(QAxObject *pWorkBook)
{
    progressDialog->setWindowTitle(tr("请耐心等待,正在更新顶点柜台字段信息！"));
    progressDialog->setLabelText(tr("正在更新顶点柜台字典信息..."));
    progressDialog->setValue(0);
    QAxObject* pWorkSheet = pWorkBook->querySubObject("Sheets(int)", 2);//获取第一张表
    QVariant var;
    //读取当前工作表所有数据
    QAxObject *usedRange = pWorkSheet->querySubObject("UsedRange");
    var = usedRange->dynamicCall("Value");

    QAxObject * rows = usedRange->querySubObject("Rows");
    QAxObject * columns = usedRange->querySubObject("Columns");
    int intRows = rows->property("Count").toInt();
    int intCols = columns->property("Count").toInt();
    qDebug() << "xls行数："<<intRows;
    qDebug() << "xls列数："<<intCols;
    QVariantList allEnvDataList = var.toList();
    qDebug() <<"数据："<<allEnvDataList.length();

    progressDialog->setRange(0, intRows);

    if(!Cread_Dt_Data_table())
    {
        return false;
    }

    if(!Cread_Dictionaries_table())
    {
        delete usedRange;
        return false;
    }

    bool beginstat=false;
    QString sql;
    QString Dt_name;
    for(int i=0;i<allEnvDataList.length();i++)
    {
        QVariantList RowDataList=allEnvDataList[i].toList();
        QString value= RowDataList.value(1).toString();
        if(beginstat && !value.isEmpty())
        {
            Dt_name = value;
            sql =QString("INSERT INTO HX_Dictionaries(Dt_name,Dt_ms,Dt_gt_type) VALUES('%1','%2','顶点')").
                    arg(Dt_name).arg(RowDataList.value(2).toString());
            if(!m_dbserver.operateTableBySql(sql))
            {
                if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                             QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
                {
                    delete usedRange;
                    return false;
                }

            }
            sql =QString("INSERT INTO HX_Dt_Data(Dt_name,Dt_value,Dt_value_ms) VALUES('%1','%2','%3')").
                    arg(Dt_name).arg(RowDataList.value(3).toString()).
                    arg(RowDataList.value(4).toString());
            if(!m_dbserver.operateTableBySql(sql))
            {
                if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                             QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
                {
                    delete usedRange;
                    return false;
                }

            }
        }
        else if(beginstat)
        {
            sql =QString("INSERT INTO HX_Dt_Data(Dt_name,Dt_value,Dt_value_ms) VALUES('%1','%2','%3')").
                    arg(Dt_name).arg(RowDataList.value(3).toString()).
                    arg(RowDataList.value(4).toString());
            if(!m_dbserver.operateTableBySql(sql))
            {
                if (QMessageBox::information(NULL, "提醒", "是否继续？",
                                             QMessageBox::Yes,QMessageBox::No) == QMessageBox::No)
                {
                    delete usedRange;
                    return false;
                }

            }
        }
        else if(value.compare("数据字典") == 0)
        {
            beginstat=true;
        }
        progressDialog->setValue(i);
        if (progressDialog->wasCanceled())
        {
            progressDialog->hide();
            delete usedRange;
            return false;
        }
    }
    delete usedRange;

    return true;
}

void Dialog_readGtFile::on_pushButton_clicked()
{
    QString strFile = QFileDialog::getOpenFileName(this,QStringLiteral("选择Excel文件"),"",tr("Exel file(*.xls *.xlsx *.xlsm *.doc *.docx)"));

    if (strFile.isEmpty())

    {
        return;
    }
    ui->lineEdit->setText(strFile);
}

void Dialog_readGtFile::on_pushButton_3_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::information(NULL, "错误", "柜台文档路径不能为空！请选择需要更新的柜台文档",QMessageBox::Yes);
        return ;
    }

    if(ui->comboBox_2->currentText().compare("两融") == 0)
    {
        m_yw_type=1;
    }
    else
    {
        m_yw_type=0;
    }

    if(ui->comboBox->currentText().compare("恒生") == 0)
    {
        if(readHsGtFile(ui->lineEdit->text()))
        {
            QMessageBox::information(NULL, "成功", "更新完成",QMessageBox::Yes);
        }
    }
    else if(ui->comboBox->currentText().compare("金正W") == 0)
    {

        if(readJzwGtFile(ui->lineEdit->text()))
        {
            QMessageBox::information(NULL, "成功", "更新完成",QMessageBox::Yes);
        }
    }
    else if(ui->comboBox->currentText().compare("金正U") == 0)
    {

        if(readJzwGtFile(ui->lineEdit->text()))
        {
            QMessageBox::information(NULL, "成功", "更新完成",QMessageBox::Yes);
        }
    }
    else if(ui->comboBox->currentText().compare("顶点") == 0)
    {

        if(readDDGtFile(ui->lineEdit->text()))
        {
            QMessageBox::information(NULL, "成功", "更新完成",QMessageBox::Yes);
        }
    }
    m_dbserver.closeSlafDatabase();
}

void Dialog_readGtFile::closeEvent(QCloseEvent *event)
{
    emit readGtFileClose();
}
