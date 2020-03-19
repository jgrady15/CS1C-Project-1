/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *searchLine;
    QPushButton *searchButton;
    QComboBox *adDropMenu;
    QLabel *label;
    QTableView *tableView;
    QPushButton *deleteButton;
    QPushButton *updateButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName(QString::fromUtf8("adminWindow"));
        adminWindow->resize(800, 600);
        centralwidget = new QWidget(adminWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        searchLine = new QLineEdit(centralwidget);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));
        searchLine->setGeometry(QRect(20, 60, 113, 22));
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(140, 58, 61, 24));
        adDropMenu = new QComboBox(centralwidget);
        adDropMenu->setObjectName(QString::fromUtf8("adDropMenu"));
        adDropMenu->setGeometry(QRect(682, 60, 101, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(680, 40, 71, 16));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 100, 761, 431));
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(612, 60, 61, 24));
        updateButton = new QPushButton(centralwidget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(540, 60, 61, 24));
        adminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        adminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(adminWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminWindow->setStatusBar(statusbar);

        retranslateUi(adminWindow);
        QObject::connect(searchButton, SIGNAL(clicked()), adminWindow, SLOT(searchFor()));
        QObject::connect(adDropMenu, SIGNAL(activated(int)), adminWindow, SLOT(alphaNumOptions()));

        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "MainWindow", nullptr));
        searchButton->setText(QCoreApplication::translate("adminWindow", "Search", nullptr));
        label->setText(QCoreApplication::translate("adminWindow", "Sort by . . .", nullptr));
        deleteButton->setText(QCoreApplication::translate("adminWindow", "Delete", nullptr));
        updateButton->setText(QCoreApplication::translate("adminWindow", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
