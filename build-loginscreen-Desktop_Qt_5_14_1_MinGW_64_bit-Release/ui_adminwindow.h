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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *companyPage;
    QListWidget *companyPage_displayListCompanyName;
    QListWidget *companyPage_displayListInterestLevel;
    QPushButton *companyPage_addNewButton;
    QLineEdit *companyPage_searchBar;
    QPushButton *companyPage_editButton;
    QListWidget *companyPage_displayListKeyCustomer;
    QPushButton *companyPage_deleteButton;
    QLabel *label;
    QComboBox *companyPage_sortComboBox;
    QPushButton *companyPage_searchButton;
    QPushButton *companyPage_refreshButton;
    QWidget *customerPage;
    QListWidget *customerPage_displayListCustomerName;
    QListWidget *customerPage_displayListProductName;
    QListWidget *customerPage_displayListCost;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName(QString::fromUtf8("adminWindow"));
        adminWindow->resize(946, 644);
        centralwidget = new QWidget(adminWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 931, 591));
        companyPage = new QWidget();
        companyPage->setObjectName(QString::fromUtf8("companyPage"));
        companyPage_displayListCompanyName = new QListWidget(companyPage);
        companyPage_displayListCompanyName->setObjectName(QString::fromUtf8("companyPage_displayListCompanyName"));
        companyPage_displayListCompanyName->setGeometry(QRect(20, 100, 491, 451));
        companyPage_displayListInterestLevel = new QListWidget(companyPage);
        companyPage_displayListInterestLevel->setObjectName(QString::fromUtf8("companyPage_displayListInterestLevel"));
        companyPage_displayListInterestLevel->setEnabled(false);
        companyPage_displayListInterestLevel->setGeometry(QRect(510, 100, 221, 451));
        companyPage_addNewButton = new QPushButton(companyPage);
        companyPage_addNewButton->setObjectName(QString::fromUtf8("companyPage_addNewButton"));
        companyPage_addNewButton->setGeometry(QRect(430, 60, 71, 31));
        companyPage_searchBar = new QLineEdit(companyPage);
        companyPage_searchBar->setObjectName(QString::fromUtf8("companyPage_searchBar"));
        companyPage_searchBar->setGeometry(QRect(20, 60, 321, 31));
        companyPage_editButton = new QPushButton(companyPage);
        companyPage_editButton->setObjectName(QString::fromUtf8("companyPage_editButton"));
        companyPage_editButton->setGeometry(QRect(590, 60, 71, 31));
        companyPage_displayListKeyCustomer = new QListWidget(companyPage);
        companyPage_displayListKeyCustomer->setObjectName(QString::fromUtf8("companyPage_displayListKeyCustomer"));
        companyPage_displayListKeyCustomer->setEnabled(false);
        companyPage_displayListKeyCustomer->setGeometry(QRect(730, 100, 181, 451));
        companyPage_deleteButton = new QPushButton(companyPage);
        companyPage_deleteButton->setObjectName(QString::fromUtf8("companyPage_deleteButton"));
        companyPage_deleteButton->setGeometry(QRect(510, 60, 71, 31));
        label = new QLabel(companyPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(750, 40, 71, 20));
        companyPage_sortComboBox = new QComboBox(companyPage);
        companyPage_sortComboBox->setObjectName(QString::fromUtf8("companyPage_sortComboBox"));
        companyPage_sortComboBox->setGeometry(QRect(750, 60, 161, 31));
        companyPage_sortComboBox->setEditable(false);
        companyPage_searchButton = new QPushButton(companyPage);
        companyPage_searchButton->setObjectName(QString::fromUtf8("companyPage_searchButton"));
        companyPage_searchButton->setGeometry(QRect(350, 60, 71, 31));
        companyPage_refreshButton = new QPushButton(companyPage);
        companyPage_refreshButton->setObjectName(QString::fromUtf8("companyPage_refreshButton"));
        companyPage_refreshButton->setGeometry(QRect(670, 60, 71, 31));
        stackedWidget->addWidget(companyPage);
        customerPage = new QWidget();
        customerPage->setObjectName(QString::fromUtf8("customerPage"));
        customerPage_displayListCustomerName = new QListWidget(customerPage);
        customerPage_displayListCustomerName->setObjectName(QString::fromUtf8("customerPage_displayListCustomerName"));
        customerPage_displayListCustomerName->setEnabled(false);
        customerPage_displayListCustomerName->setGeometry(QRect(20, 20, 491, 531));
        customerPage_displayListProductName = new QListWidget(customerPage);
        customerPage_displayListProductName->setObjectName(QString::fromUtf8("customerPage_displayListProductName"));
        customerPage_displayListProductName->setEnabled(false);
        customerPage_displayListProductName->setGeometry(QRect(510, 20, 221, 531));
        customerPage_displayListCost = new QListWidget(customerPage);
        customerPage_displayListCost->setObjectName(QString::fromUtf8("customerPage_displayListCost"));
        customerPage_displayListCost->setEnabled(false);
        customerPage_displayListCost->setGeometry(QRect(730, 20, 181, 531));
        stackedWidget->addWidget(customerPage);
        adminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 946, 21));
        adminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(adminWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminWindow->setStatusBar(statusbar);

        retranslateUi(adminWindow);
        QObject::connect(companyPage_editButton, SIGNAL(clicked()), adminWindow, SLOT(updateDB()));
        QObject::connect(companyPage_addNewButton, SIGNAL(clicked()), adminWindow, SLOT(addCompany()));
        QObject::connect(companyPage_displayListCompanyName, SIGNAL(activated(QModelIndex)), adminWindow, SLOT(selectCompany(QModelIndex)));
        QObject::connect(companyPage_refreshButton, SIGNAL(clicked()), adminWindow, SLOT(searchFor()));
        QObject::connect(companyPage_deleteButton, SIGNAL(clicked()), adminWindow, SLOT(deleteInDB()));
        QObject::connect(companyPage_searchButton, SIGNAL(clicked()), adminWindow, SLOT(searchFor()));

        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "MainWindow", nullptr));
        companyPage_addNewButton->setText(QCoreApplication::translate("adminWindow", "Add New", nullptr));
        companyPage_editButton->setText(QCoreApplication::translate("adminWindow", "Edit", nullptr));
        companyPage_deleteButton->setText(QCoreApplication::translate("adminWindow", "Delete", nullptr));
        label->setText(QCoreApplication::translate("adminWindow", "Sort by . . .", nullptr));
        companyPage_sortComboBox->setCurrentText(QString());
        companyPage_searchButton->setText(QCoreApplication::translate("adminWindow", "Search", nullptr));
        companyPage_refreshButton->setText(QCoreApplication::translate("adminWindow", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
