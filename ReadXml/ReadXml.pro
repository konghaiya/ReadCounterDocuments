#-------------------------------------------------
#
# Project created by QtCreator 2019-03-05T18:19:57
#
#-------------------------------------------------

QT       += xml

QT       -= gui

TARGET = ReadXml
TEMPLATE = lib

CONFIG +=C++11

DEFINES += READXML_LIBRARY


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


SOURCES += readxml.cpp \
    ksreadconfig.cpp

HEADERS += readxml.h\
        readxml_global.h \
    ksreadconfig.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
