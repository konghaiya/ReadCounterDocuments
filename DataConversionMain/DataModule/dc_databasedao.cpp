#include "dc_databasedao.h"

DC_databaseDao::DC_databaseDao()
{
}

bool DC_databaseDao::inserDatabase(QString databaseName)
{
    SqlData sqldata=ReadXml::GetValue("Insert","DC_db");

    return dbserver.InsertDB(sqldata.value.arg(databaseName));
}

bool DC_databaseDao::inserDatabase(DC_Database &database)
{
    SqlData sqldata=ReadXml::GetValue("Insert","DC_db");

    return dbserver.InsertDB(sqldata.value.arg(database.getDatabaseName()));
}

bool DC_databaseDao::updateDatabase(DC_Database &database)
{
    SqlData sqldata=ReadXml::GetValue("updateById","DC_db");
    return dbserver.operateTableBySql(sqldata.value.arg(database.getDatabaseName()).arg(database.getIndex()));
}

bool DC_databaseDao::updateDatabaseByName(QString oldName,QString newName)
{
    SqlData sqldata=ReadXml::GetValue("updateByName","DC_db");
    return dbserver.operateTableBySql(sqldata.value.arg(newName).arg(oldName));
}

bool DC_databaseDao::deletById(QString index)
{
    SqlData sqldata=ReadXml::GetValue("deleteById","DC_db");
    return dbserver.operateTableBySql(sqldata.value.arg(index));
}

bool DC_databaseDao::deletByNmae(QString databaseName)
{
    SqlData sqldata=ReadXml::GetValue("deleteByName","DC_db");
    return dbserver.operateTableBySql(sqldata.value.arg(databaseName));
}

QList<DC_Database> DC_databaseDao::selectALL()
{
    SqlData sqldata=ReadXml::GetValue("selectAll","DC_db");

    QVector<QStringList> msgvec=dbserver.GetRecordValueFromSql(sqldata.value,sqldata.count);

    QList<DC_Database> relist;

    for(int i=0;i<msgvec.count();i++)
    {
        QStringList msglist=msgvec.at(i);

        relist.append(DC_Database(msglist));
    }
    return relist;
}

QStringList DC_databaseDao::selectAllToStrlist()
{
    SqlData sqldata=ReadXml::GetValue("selectAllName","DC_db");

    return dbserver.GetValueFromSql(sqldata.value,sqldata.count);
}

