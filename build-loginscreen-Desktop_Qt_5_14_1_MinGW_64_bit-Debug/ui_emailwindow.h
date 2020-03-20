/********************************************************************************
** Form generated from reading UI file 'emailwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAILWINDOW_H
#define UI_EMAILWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_emailWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *emailWindow)
    {
        if (emailWindow->objectName().isEmpty())
            emailWindow->setObjectName(QString::fromUtf8("emailWindow"));
        emailWindow->resize(800, 600);
        centralwidget = new QWidget(emailWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        emailWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(emailWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        emailWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(emailWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        emailWindow->setStatusBar(statusbar);

        retranslateUi(emailWindow);

        QMetaObject::connectSlotsByName(emailWindow);
    } // setupUi

    void retranslateUi(QMainWindow *emailWindow)
    {
        emailWindow->setWindowTitle(QCoreApplication::translate("emailWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class emailWindow: public Ui_emailWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAILWINDOW_H
