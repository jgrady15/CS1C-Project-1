/********************************************************************************
** Form generated from reading UI file 'helpmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPMENU_H
#define UI_HELPMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helpMenu
{
public:
    QLabel *label;
    QPushButton *pampletButton;
    QPushButton *contactButton;
    QPushButton *reviewButton;
    QPushButton *adminButton;

    void setupUi(QWidget *helpMenu)
    {
        if (helpMenu->objectName().isEmpty())
            helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        helpMenu->resize(400, 231);
        label = new QLabel(helpMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 10, 51, 20));
        pampletButton = new QPushButton(helpMenu);
        pampletButton->setObjectName(QString::fromUtf8("pampletButton"));
        pampletButton->setGeometry(QRect(160, 40, 75, 23));
        contactButton = new QPushButton(helpMenu);
        contactButton->setObjectName(QString::fromUtf8("contactButton"));
        contactButton->setGeometry(QRect(160, 70, 75, 23));
        reviewButton = new QPushButton(helpMenu);
        reviewButton->setObjectName(QString::fromUtf8("reviewButton"));
        reviewButton->setGeometry(QRect(160, 100, 75, 23));
        adminButton = new QPushButton(helpMenu);
        adminButton->setObjectName(QString::fromUtf8("adminButton"));
        adminButton->setGeometry(QRect(160, 130, 75, 23));

        retranslateUi(helpMenu);
        QObject::connect(pampletButton, SIGNAL(clicked()), helpMenu, SLOT(pamphletHelp()));
        QObject::connect(contactButton, SIGNAL(clicked()), helpMenu, SLOT(contactHelp()));
        QObject::connect(reviewButton, SIGNAL(clicked()), helpMenu, SLOT(reviewHelp()));
        QObject::connect(adminButton, SIGNAL(clicked()), helpMenu, SLOT(adminHelp()));

        QMetaObject::connectSlotsByName(helpMenu);
    } // setupUi

    void retranslateUi(QWidget *helpMenu)
    {
        helpMenu->setWindowTitle(QCoreApplication::translate("helpMenu", "Form", nullptr));
        label->setText(QCoreApplication::translate("helpMenu", "Help Menu", nullptr));
        pampletButton->setText(QCoreApplication::translate("helpMenu", "Pamphlet", nullptr));
        contactButton->setText(QCoreApplication::translate("helpMenu", "Contact Us", nullptr));
        reviewButton->setText(QCoreApplication::translate("helpMenu", "Reviews", nullptr));
        adminButton->setText(QCoreApplication::translate("helpMenu", "Admin Logon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class helpMenu: public Ui_helpMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPMENU_H
