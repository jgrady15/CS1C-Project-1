/********************************************************************************
** Form generated from reading UI file 'bigmain.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIGMAIN_H
#define UI_BIGMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BigMain
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BigMain)
    {
        if (BigMain->objectName().isEmpty())
            BigMain->setObjectName(QString::fromUtf8("BigMain"));
        BigMain->resize(800, 440);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        BigMain->setFont(font);
        centralwidget = new QWidget(BigMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(700, 0, 93, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(600, 0, 93, 28));
        BigMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BigMain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        BigMain->setMenuBar(menubar);
        statusbar = new QStatusBar(BigMain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BigMain->setStatusBar(statusbar);

        retranslateUi(BigMain);
        QObject::connect(pushButton_2, SIGNAL(clicked()), BigMain, SLOT(changeWindow()));

        QMetaObject::connectSlotsByName(BigMain);
    } // setupUi

    void retranslateUi(QMainWindow *BigMain)
    {
        BigMain->setWindowTitle(QCoreApplication::translate("BigMain", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("BigMain", "Help", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BigMain", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BigMain: public Ui_BigMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIGMAIN_H
