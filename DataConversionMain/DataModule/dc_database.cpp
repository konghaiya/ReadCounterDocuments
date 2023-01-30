#include "dc_database.h"

DC_Database::DC_Database()
{
}

QString DC_Database::GetMsg(QStringList &accountListMsg,int i)
{
    if (accountListMsg.value(i) == 0)
    {
        return "";
    }
    return accountListMsg.value(i);
}

DC_Database::DC_Database(QStringList& dataMsgList)
{
    this->index = GetMsg(dataMsgList,0);
    this->databaseName = GetMsg(dataMsgList,1);
}
QString & DC_Database::getIndex()
{
    return index;
}

void DC_Database::setIndex(const QString &value)
{
    index = value;
}
QString & DC_Database::getDatabaseName()
{
    return databaseName;
}

void DC_Database::setDatabaseName(const QString &value)
{
    databaseName = value;
}


