#include "dataconversionmain.h"
#include "dialog_datamerging.h"
#include "widget_showdata.h"
#include <QApplication>
#include <QSharedMemory>
#include "readxml.h"
#include "ksreadconfig.h"
#include "ksdbserver.h"
#include "form_gtinterfacemain.h"
int main(int argc, char *argv[])
{

    QSharedMemory shared("DC_EXE");//共享内存控制只启动一个实例
    if (shared.attach())
    {
            return 0;
    }
    shared.create(1);

    QApplication a(argc, argv);
    KsDbServer::openDatabase();
    ReadXml::LoadXml("./config/DC_Sql.xml");
    KsReadConfig::ReadConfig("./config/SystemSet.ini");
    DataConversionMain w;
    //Dialog_leadingInDatabase w;
   // Widget_ShowData w;
    //Dialog_dataMerging w;
    //Form_GtInterfaceMain w;
    w.show();

    return a.exec();
}
