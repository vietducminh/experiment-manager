#-------------------------------------------------
#
# Project created by QtCreator 2017-05-02T14:16:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myMenu
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    statistic.cpp \
    info.cpp

HEADERS  += mainwindow.h \
    statistic.h \
    info.h

FORMS    += mainwindow.ui \
    statistic.ui \
    info.ui
