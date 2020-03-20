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
        adminoptions.cpp \
        adminwindow.cpp \
        frontpage.cpp \
        loginwindow.cpp \
        main.cpp \
        reviewwindow.cpp

HEADERS  += \
    adminoptions.h \
    adminwindow.h \
    frontpage.h \
    loginwindow.h \
    reviewwindow.h \

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

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../Desktop/SmtpClient-for-Qt-1.1/ -lSMTPEmail
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../Desktop/SmtpClient-for-Qt-1.1/ -lSMTPEmail
else:unix: LIBS += -L$$PWD/../../../../Desktop/SmtpClient-for-Qt-1.1/ -lSMTPEmail

INCLUDEPATH += $$PWD/../../../../Desktop/SmtpClient-for-Qt-1.1
DEPENDPATH += $$PWD/../../../../Desktop/SmtpClient-for-Qt-1.1

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../../../../../../Program Files/OpenSSL-Win64/lib/' -llibssl
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../../../../../../Program Files/OpenSSL-Win64/lib/' -llibssl
else:unix: LIBS += -L$$PWD/'../../../../../../Program Files/OpenSSL-Win64/lib/' -llibssl

INCLUDEPATH += $$PWD/'../../../../../../Program Files/OpenSSL-Win64/include'
DEPENDPATH += $$PWD/'../../../../../../Program Files/OpenSSL-Win64/include'

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../../../../../../Program Files/OpenSSL-Win64/lib/' -llibcrypto
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../../../../../../Program Files/OpenSSL-Win64/lib/' -llibcrypto
else:unix: LIBS += -L$$PWD/'../../../../../../Program Files/OpenSSL-Win64/lib/' -llibcrypto

INCLUDEPATH += $$PWD/'../../../../../../Program Files/OpenSSL-Win64/include'
DEPENDPATH += $$PWD/'../../../../../../Program Files/OpenSSL-Win64/include'
