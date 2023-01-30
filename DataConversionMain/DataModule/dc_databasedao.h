#ifndef DC_DATABASEDAO_H
#define DC_DATABASEDAO_H
#include "ksdbserver.h"
#include "readxml.h"
#include "dc_database.h"
class DC_databaseDao
{
public:
    DC_databaseDao();

    bool inserDatabase(QString databaseName);
    bool inserDatabase(DC_Database &database);
    bool updateDatabase(DC_Database &database);
    bool deletById(QString index);
    bool deletByNmae(QString databaseName);
    QList<DC_Database> selectALL();
    QStringList selectAllToStrlist();

    bool updateDatabaseByName(QString oldName, QString newName);
private:
    KsDbServer dbserver;

};

#endif // DC_DATABASEDAO_H
