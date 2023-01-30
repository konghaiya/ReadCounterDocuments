#-------------------------------------------------
#
# Project created by QtCreator 2021-03-01T09:27:45
#
#-------------------------------------------------

QT       -= gui

TARGET = DcLog
TEMPLATE = lib

DEFINES += DCLOG_LIBRARY

CONFIG(debug,release|debug) {
    MOC_DIR=./moc/debug
    OBJECTS_DIR=./obj/debug
    DESTDIR=../output/debug
}

CONFIG(release,release|debug) {
    MOC_DIR=./moc/release
    OBJECTS_DIR=./obj/release
    DESTDIR=../output/release
}


SOURCES += dclog.cpp

HEADERS += dclog.h\
        dclog_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
