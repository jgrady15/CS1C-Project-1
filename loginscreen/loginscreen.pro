#-------------------------------------------------
#
# Project created by QtCreator 2016-04-18T22:31:03
#
#-------------------------------------------------

QT       += core sql gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LoginApp
TEMPLATE = app


SOURCES +=\
        adminoption.cpp \
        adminwindow.cpp \
        emailwidget.cpp \
        frontpage.cpp \
        loginwindow.cpp \
        main.cpp \
        reviewwindow.cpp \
        sql_database.cpp

HEADERS  += \
    adminoption.h \
    adminwindow.h \
    emailwidget.h \
    frontpage.h \
    header.h \
    loginwindow.h \
    reviewwindow.h \ \
    sql_database.h

FORMS    += \
    adminoption.ui \
    adminwindow.ui \
    emailwidget.ui \
    frontpage.ui \
    loginwindow.ui \
    reviewwindow.ui

DISTFILES += \
    Uyvhv.qml \
    UyvhvForm.ui.qml

RESOURCES += \
    resource.qrc




win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../SmtpClient-for-Qt-1.1/ -lSMTPEmail
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../SmtpClient-for-Qt-1.1/ -lSMTPEmail
else:unix: LIBS += -L$$PWD/../SmtpClient-for-Qt-1.1/ -lSMTPEmail

INCLUDEPATH += $$PWD/../SmtpClient-for-Qt-1.1
DEPENDPATH += $$PWD/../SmtpClient-for-Qt-1.1

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../OpenSSL-Win64/lib/ -llibcrypto
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../OpenSSL-Win64/lib/ -llibcrypto
else:unix: LIBS += -L$$PWD/../OpenSSL-Win64/lib/ -llibcrypto

INCLUDEPATH += $$PWD/../OpenSSL-Win64/include
DEPENDPATH += $$PWD/../OpenSSL-Win64/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../OpenSSL-Win64/lib/ -llibssl
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../OpenSSL-Win64/lib/ -llibssl
else:unix: LIBS += -L$$PWD/../OpenSSL-Win64/lib/ -llibssl

INCLUDEPATH += $$PWD/../OpenSSL-Win64/include
DEPENDPATH += $$PWD/../OpenSSL-Win64/include
