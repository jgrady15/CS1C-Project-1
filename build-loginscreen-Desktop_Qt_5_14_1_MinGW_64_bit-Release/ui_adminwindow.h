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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *adminWindow_searchBar;
    QPushButton *adminWindow_searchButton;
    QComboBox *adminWindow_sortComboBox;
    QLabel *label;
    QPushButton *adminWindow_deleteButton;
    QPushButton *adminWindow_addNewButton;
    QPushButton *adminWindow_refreshButton;
    QListWidget *adminWindow_displayListCompanyName;
    QListWidget *adminWindow_displayListInterestLevel;
    QListWidget *adminWindow_displayListKeyCustomer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName(QString::fromUtf8("adminWindow"));
        adminWindow->resize(800, 600);
        centralwidget = new QWidget(adminWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        adminWindow_searchBar = new QLineEdit(centralwidget);
        adminWindow_searchBar->setObjectName(QString::fromUtf8("adminWindow_searchBar"));
        adminWindow_searchBar->setGeometry(QRect(20, 60, 281, 31));
        adminWindow_searchButton = new QPushButton(centralwidget);
        adminWindow_searchButton->setObjectName(QString::fromUtf8("adminWindow_searchButton"));
        adminWindow_searchButton->setGeometry(QRect(310, 60, 71, 31));
        adminWindow_sortComboBox = new QComboBox(centralwidget);
        adminWindow_sortComboBox->setObjectName(QString::fromUtf8("adminWindow_sortComboBox"));
        adminWindow_sortComboBox->setGeometry(QRect(630, 60, 151, 31));
        adminWindow_sortComboBox->setEditable(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(630, 40, 71, 20));
        adminWindow_deleteButton = new QPushButton(centralwidget);
        adminWindow_deleteButton->setObjectName(QString::fromUtf8("adminWindow_deleteButton"));
        adminWindow_deleteButton->setGeometry(QRect(470, 60, 71, 31));
        adminWindow_addNewButton = new QPushButton(centralwidget);
        adminWindow_addNewButton->setObjectName(QString::fromUtf8("adminWindow_addNewButton"));
        adminWindow_addNewButton->setGeometry(QRect(390, 60, 71, 31));
        adminWindow_refreshButton = new QPushButton(centralwidget);
        adminWindow_refreshButton->setObjectName(QString::fromUtf8("adminWindow_refreshButton"));
        adminWindow_refreshButton->setGeometry(QRect(550, 60, 71, 31));
        adminWindow_displayListCompanyName = new QListWidget(centralwidget);
        adminWindow_displayListCompanyName->setObjectName(QString::fromUtf8("adminWindow_displayListCompanyName"));
        adminWindow_displayListCompanyName->setGeometry(QRect(20, 100, 361, 451));
        adminWindow_displayListInterestLevel = new QListWidget(centralwidget);
        adminWindow_displayListInterestLevel->setObjectName(QString::fromUtf8("adminWindow_displayListInterestLevel"));
        adminWindow_displayListInterestLevel->setEnabled(false);
        adminWindow_displayListInterestLevel->setGeometry(QRect(380, 100, 221, 451));
        adminWindow_displayListKeyCustomer = new QListWidget(centralwidget);
        adminWindow_displayListKeyCustomer->setObjectName(QString::fromUtf8("adminWindow_displayListKeyCustomer"));
        adminWindow_displayListKeyCustomer->setEnabled(false);
        adminWindow_displayListKeyCustomer->setGeometry(QRect(600, 100, 181, 451));
        adminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        adminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(adminWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminWindow->setStatusBar(statusbar);

        retranslateUi(adminWindow);
        QObject::connect(adminWindow_searchButton, SIGNAL(clicked()), adminWindow, SLOT(searchFor()));
        QObject::connect(adminWindow_sortComboBox, SIGNAL(activated(int)), adminWindow, SLOT(alphaNumOptions()));
        QObject::connect(adminWindow_deleteButton, SIGNAL(clicked()), adminWindow, SLOT(deleteInDB()));

        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "MainWindow", nullptr));
        adminWindow_searchButton->setText(QCoreApplication::translate("adminWindow", "Search", nullptr));
        adminWindow_sortComboBox->setCurrentText(QString());
        label->setText(QCoreApplication::translate("adminWindow", "Sort by . . .", nullptr));
        adminWindow_deleteButton->setText(QCoreApplication::translate("adminWindow", "Delete", nullptr));
        adminWindow_addNewButton->setText(QCoreApplication::translate("adminWindow", "Add New", nullptr));
        adminWindow_refreshButton->setText(QCoreApplication::translate("adminWindow", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
