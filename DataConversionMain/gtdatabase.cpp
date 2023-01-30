#include "gtdatabase.h"

KsDbServer GtDataBase::HS_dbserver;
KsDbServer GtDataBase::JZW_dbserver;
KsDbServer GtDataBase::DD_dbserver;
KsDbServer GtDataBase::JZU_dbserver;

GtDataBase::GtDataBase()
{
}

void GtDataBase::DataServerInit()
{
    HS_dbserver.SetSqlQuery("./GtBaseData/HSBaseData.db");
    JZW_dbserver.SetSqlQuery("./GtBaseData/JZWBaseData.db");
    JZU_dbserver.SetSqlQuery("./GtBaseData/JZUBaseData.db");
    DD_dbserver.SetSqlQuery("./GtBaseData/DDBaseData.db");
}

bool GtDataBase::CloseDbServer()
{
    HS_dbserver.closeSlafDatabase();
    JZW_dbserver.closeSlafDatabase();
    JZU_dbserver.closeSlafDatabase();
    DD_dbserver.closeSlafDatabase();
}

void GtDataBase::dataHb(QList<gt_interface> &dalist,KsDbServer &daserver,SqlData &sqldata)
{
    QVector<QStringList> data=daserver.GetRecordValueFromSql(sqldata.value,sqldata.count);

    for(int i=0;i<data.count();i++)
    {
        QStringList msglist=data.at(i);

        dalist.append(gt_interface(msglist));
    }
}

void GtDataBase::dataHb(QList<Dictionaries> &dalist,KsDbServer &daserver,SqlData &sqldata)
{
    QVector<QStringList> data=daserver.GetRecordValueFromSql(sqldata.value,sqldata.count);

    for(int i=0;i<data.count();i++)
    {
        QStringList msglist=data.at(i);

        dalist.append(Dictionaries(msglist));
    }
}

void GtDataBase::selectInterface(QList<gt_interface> &relist,QString info)
{
    SqlData sqldata=ReadXml::GetValue("selectByKey","gt_interface");
    QString yw_type = info;
    if(info.compare("两融") == 0)
    {
        yw_type="1";
    }
    else if(info.compare("普通") == 0)
    {
        yw_type="0";
    }
    sqldata.value=sqldata.value.arg(info).arg(info).arg(yw_type).arg(info).arg(info);
    dataHb(relist,HS_dbserver,sqldata);
    dataHb(relist,JZW_dbserver,sqldata);
    dataHb(relist,JZU_dbserver,sqldata);
    dataHb(relist,DD_dbserver,sqldata);
}

KsDbServer & GtDataBase::Setdbserver(QString gt_type)
{
    if(gt_type.compare("恒生") == 0)
    {
        return HS_dbserver;
    }
    else if(gt_type.compare("金正W") == 0)
    {
        return JZW_dbserver;
    }
    else if(gt_type.compare("顶点") == 0)
    {
        return DD_dbserver;
    }
    else if(gt_type.compare("金正U") == 0)
    {
        return JZU_dbserver;
    }
    return HS_dbserver;
}

void GtDataBase::selectInterfaceMsg(QList<interfaceMsg> &relist,gt_interface msg,QString type)
{
    SqlData sqldata=ReadXml::GetValue("selectByType","HX_gnh");


    QVector<QStringList> data= Setdbserver(msg.getInterface_gt_type()).
            GetRecordValueFromSql(sqldata.value.arg(msg.getInterface_gnh()).arg(type),sqldata.count);
    for(int i=0;i<data.count();i++)
    {
        QStringList msglist=data.at(i);

        relist.append(interfaceMsg(msglist));
    }
}

void GtDataBase::selectDictionaries(QList<Dictionaries> &relist, QString info)
{
    SqlData sqldata=ReadXml::GetValue("selectByKey","HX_Dictionaries");
    sqldata.value=sqldata.value.arg(info).arg(info).arg(info);
    dataHb(relist,HS_dbserver,sqldata);
    dataHb(relist,JZW_dbserver,sqldata);
    dataHb(relist,JZU_dbserver,sqldata);
    dataHb(relist,DD_dbserver,sqldata);
}

Dictionaries GtDataBase::selectDictionariesByName(QString DtName, QString gt_type)
{
    SqlData sqldata=ReadXml::GetValue("selectByDt_name","HX_Dictionaries");
    QStringList list=Setdbserver(gt_type).GetValueFromSql(sqldata.value.arg(DtName),sqldata.count);
    return Dictionaries(list);
}

void GtDataBase::selectDtData(QList<Dt_Data> &relist, Dictionaries msg)
{
    SqlData sqldata=ReadXml::GetValue("selectByKey","HX_Dt_Data");
    qDebug()<<sqldata.value.arg(msg.getDt_name()).arg(msg.getDt_name());
    QVector<QStringList> data=Setdbserver(msg.getDt_gt_type()).GetRecordValueFromSql(sqldata.value.arg(msg.getDt_name()).arg(msg.getDt_name()),sqldata.count);

    for(int i=0;i<data.count();i++)
    {
        QStringList msglist=data.at(i);

        relist.append(Dt_Data(msglist));
    }
}


