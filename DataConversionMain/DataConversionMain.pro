#-------------------------------------------------
#
# Project created by QtCreator 2020-11-25T14:02:43
#
#-------------------------------------------------

QT       += core gui sql xml
QT += axcontainer
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG +=C++11

RC_ICONS = 1.ico


INCLUDEPATH +=../KsDbServer
INCLUDEPATH +=../ReadXml
INCLUDEPATH +=../DcLog

CONFIG(debug,release|debug) {
    LIBS +=-L../output/debug -lKsDbServer
    LIBS +=-L../output/debug -lReadXml
    LIBS +=-L../output/debug -lDcLog

    MOC_DIR=./moc/debug
    OBJECTS_DIR=./obj/debug
    DESTDIR=../output/debug
}

CONFIG(release,release|debug) {
    LIBS +=-L../output/release -lKsDbServer
    LIBS +=-L../output/release -lReadXml
    LIBS +=-L../output/release -lDcLog


    MOC_DIR=./moc/release
    OBJECTS_DIR=./obj/release
    DESTDIR=../output/release
}



TARGET = DataConversion
TEMPLATE = app


SOURCES += main.cpp\
        dataconversionmain.cpp \
    dialog_automation.cpp \
    dialog_dispose.cpp \
    widget_showdata.cpp \
    dialog_leadingindatabase.cpp \
    Module/deletebutton.cpp \
    Module/operatrionbt.cpp \
    Module/operatrionbt2.cpp \
    Module/operatrionbt3.cpp \
    DataModule/dc_account.cpp \
    DataModule/dc_accountdao.cpp \
    DataModule/dc_database.cpp \
    DataModule/dc_databasedao.cpp \
    dialog_dataupdate.cpp \
    dialog_datamerging.cpp \
    dialog_chosemergingtype.cpp \
    form_gtinterfacemain.cpp \
    dialog_readgtfile.cpp \
    form_gtmsgshowmain.cpp \
    DataModule/gt_interface.cpp \
    gtdatabase.cpp \
    Module/operatrionbt4.cpp \
    dialog_interface.cpp \
    DataModule/interfacemsg.cpp \
    form_dictionaries.cpp \
    DataModule/dictionaries.cpp \
    Module/operatrionbt5.cpp \
    dialog_dt_data.cpp \
    DataModule/dt_data.cpp \
    dialog_createtableheader.cpp

HEADERS  += dataconversionmain.h \
    dialog_automation.h \
    dialog_dispose.h \
    DC_Process.h \
    widget_showdata.h \
    dialog_leadingindatabase.h \
    Module/deletebutton.h \
    Module/operatrionbt.h \
    Module/operatrionbt2.h \
    Module/operatrionbt3.h \
    DataModule/dc_account.h \
    DataModule/dc_accountdao.h \
    DataModule/dc_database.h \
    DataModule/dc_databasedao.h \
    dialog_dataupdate.h \
    dialog_datamerging.h \
    OverallSituation.h \
    dialog_chosemergingtype.h \
    form_gtinterfacemain.h \
    dialog_readgtfile.h \
    form_gtmsgshowmain.h \
    DataModule/gt_interface.h \
    gtdatabase.h \
    Module/operatrionbt4.h \
    dialog_interface.h \
    DataModule/interfacemsg.h \
    form_dictionaries.h \
    DataModule/dictionaries.h \
    Module/operatrionbt5.h \
    dialog_dt_data.h \
    DataModule/dt_data.h \
    dialog_createtableheader.h

FORMS    += dataconversionmain.ui \
    dialog_automation.ui \
    dialog_dispose.ui \
    widget_showdata.ui \
    dialog_leadingindatabase.ui \
    Module/operatrionbt.ui \
    Module/operatrionbt2.ui \
    Module/operatrionbt3.ui \
    dialog_dataupdate.ui \
    dialog_datamerging.ui \
    dialog_chosemergingtype.ui \
    form_gtinterfacemain.ui \
    dialog_readgtfile.ui \
    form_gtmsgshowmain.ui \
    Module/operatrionbt4.ui \
    dialog_interface.ui \
    form_dictionaries.ui \
    Module/operatrionbt5.ui \
    dialog_dt_data.ui \
    dialog_createtableheader.ui

RESOURCES += \
    DC_img.qrc
