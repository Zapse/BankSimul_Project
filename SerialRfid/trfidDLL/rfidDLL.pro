#-------------------------------------------------
#
# Project created by QtCreator 2017-04-12T08:38:55
#
#-------------------------------------------------

QT       += core serialport gui widgets

TARGET = rfidDLL
TEMPLATE = lib

DEFINES += RFIDDLL_LIBRARY

SOURCES += rfiddll.cpp \
    korttiui.cpp

HEADERS += rfiddll.h\
        korttiui.h \
        rfiddll_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}


DESTDIR = C:\Users\sante\Downloads\project\EXEBankSimul\EXEBankSimul

FORMS += \
    korttiui.ui
