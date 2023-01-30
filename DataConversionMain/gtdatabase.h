#ifndef GTDATABASE_H
#define GTDATABASE_H
#include "ksdbserver.h"
#include "./DataModule/gt_interface.h"
#include "./DataModule/interfacemsg.h"
#include "./DataModule/dictionaries.h"
#include "./DataModule/dt_data.h"
#include "readxml.h"
class GtDataBase
{
public:
    GtDataBase();

    static void DataServerInit();
    static bool CloseDbServer();


    static void selectInterface(QList<gt_interface> &relist,QString info);

    static void dataHb(QList<gt_interface> &dalist, KsDbServer &daserver, SqlData &sqldata);
    static void dataHb(QList<Dictionaries> &dalist, KsDbServer &daserver, SqlData &sqldata);
    static void selectInterfaceMsg(QList<interfaceMsg> &relist, gt_interface msg, QString type);

    static void selectDictionaries(QList<Dictionaries> &relist,QString info);
    static Dictionaries selectDictionariesByName(QString DtName, QString gt_type);
    static void selectDtData(QList<Dt_Data> &relist, Dictionaries msg);
    static KsDbServer &Setdbserver(QString gt_type);
private:

    static KsDbServer HS_dbserver;
    static KsDbServer JZW_dbserver;
    static KsDbServer DD_dbserver;
    static KsDbServer JZU_dbserver;
};

#endif // GTDATABASE_H
