#-------------------------------------------------
#
# Project created by QtCreator 2016-04-18T22:31:03
#
#-------------------------------------------------

QT       += core sql gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LoginApp
TEMPLATE = app
CONFIG   += console c++11

SOURCES += main.cpp\
            frontpage.cpp \
            mainwindow.cpp \
            secdialog.cpp \
            sql_database.cpp

HEADERS  += mainwindow.h \
            frontpage.h \
            header.h \
            secdialog.h \
            sql_database.h

FORMS    += \
            frontpage.ui \
            secdialog.ui

DISTFILES += \
    Uyvhv.qml \
    UyvhvForm.ui.qml \
    customers.txt

RESOURCES += \
    resource.qrc

