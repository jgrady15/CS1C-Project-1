/********************************************************************************
** Form generated from reading UI file 'adminoption.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINOPTION_H
#define UI_ADMINOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminOption
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *adminOption)
    {
        if (adminOption->objectName().isEmpty())
            adminOption->setObjectName(QString::fromUtf8("adminOption"));
        adminOption->resize(400, 182);
        pushButton = new QPushButton(adminOption);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 20, 171, 28));
        pushButton_2 = new QPushButton(adminOption);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 100, 101, 28));
        pushButton_3 = new QPushButton(adminOption);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 60, 101, 31));

        retranslateUi(adminOption);
        QObject::connect(pushButton, SIGNAL(clicked()), adminOption, SLOT(viewCustomerList()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), adminOption, SLOT(sendPamphlet()));

        QMetaObject::connectSlotsByName(adminOption);
    } // setupUi

    void retranslateUi(QDialog *adminOption)
    {
        adminOption->setWindowTitle(QCoreApplication::translate("adminOption", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("adminOption", "View and Edit Company List", nullptr));
        pushButton_2->setText(QCoreApplication::translate("adminOption", "Send Pamphlet", nullptr));
        pushButton_3->setText(QCoreApplication::translate("adminOption", "View Customer List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminOption: public Ui_adminOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINOPTION_H
