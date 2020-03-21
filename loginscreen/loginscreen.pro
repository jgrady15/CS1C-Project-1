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


SOURCES +=\
        adminWindow.cpp \
        adminoption.cpp \
        emailwidget.cpp \
        frontpage.cpp \
        loginwindow.cpp \
        main.cpp \
        reviewwindow.cpp

HEADERS  += \
    adminoption.h \
    adminwindow.h \
    emailwidget.h \
    frontpage.h \
    loginwindow.h \
    reviewwindow.h \

FORMS    += \
    adminoption.ui \
    adminwindow.ui \
    emailwidget.ui \
    frontpage.ui \
    loginwindow.ui \
    reviewwindow.ui

DISTFILES += \
    Uyvhv.qml \
    UyvhvForm.ui.qml \
    images/Pamphlet.pdf

RESOURCES += \
    resource.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../OpenSSL-Win64/lib/ -llibcrypto
else:unix: LIBS += -L$$PWD/../OpenSSL-Win64/lib/ -llibcrypto

INCLUDEPATH += $$PWD/../OpenSSL-Win64/include


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../OpenSSL-Win64/lib/ -llibssl
else:unix: LIBS += -L$$PWD/../OpenSSL-Win64/lib/ -llibssl

INCLUDEPATH += $$PWD/../OpenSSL-Win64/include


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../SmtpClient-for-Qt-1.1/ -lSMTPEmail
else:unix: LIBS += -L$$PWD/../SmtpClient-for-Qt-1.1/ -lSMTPEmail

INCLUDEPATH += $$PWD/../SmtpClient-for-Qt-1.1
