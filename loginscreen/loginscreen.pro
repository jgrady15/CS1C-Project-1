#-------------------------------------------------
#
# Project created by QtCreator 2016-04-18T22:31:03
#
#-------------------------------------------------

QT       += core sql
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LoginApp
TEMPLATE = app


SOURCES += main.cpp\
        adminoptions.cpp \
        adminwindow.cpp \
        frontpage.cpp \
        loginwindow.cpp \
        reviewwindow.cpp

HEADERS  += \
    adminoptions.h \
    adminwindow.h \
    frontpage.h \
    loginwindow.h \
    reviewwindow.h

FORMS    += \
    adminoptions.ui \
    adminwindow.ui \
    frontpage.ui \
    loginwindow.ui \
    reviewwindow.ui

DISTFILES += \
    Uyvhv.qml \
    UyvhvForm.ui.qml

RESOURCES += \
    resource.qrc

