#-------------------------------------------------
#
# Project created by QtCreator 2019-03-05T17:41:25
#
#-------------------------------------------------

QT       += sql xml gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KsDbServer
TEMPLATE = lib

DEFINES += KSDBSERVER_LIBRARY
INCLUDEPATH +=../DcLog


CONFIG(debug,release|debug) {
    LIBS +=-L../output/debug -lDcLog

    MOC_DIR=./moc/debug
    OBJECTS_DIR=./obj/debug
    DESTDIR=../output/debug
}

CONFIG(release,release|debug) {
    LIBS +=-L../output/release -lDcLog

    MOC_DIR=./moc/release
    OBJECTS_DIR=./obj/release
    DESTDIR=../output/release
}


SOURCES += ksdbserver.cpp

HEADERS += ksdbserver.h\
        ksdbserver_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
