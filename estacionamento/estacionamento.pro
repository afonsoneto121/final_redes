#-------------------------------------------------
#
# Project created by QtCreator 2016-06-03T09:12:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = estacionamento
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    conexao.cpp \
    configform.cpp \
    comunicacao.cpp

HEADERS  += mainwindow.h \
    conexao.h \
    configform.h \
    comunicacao.h

FORMS    += mainwindow.ui \
    configform.ui
