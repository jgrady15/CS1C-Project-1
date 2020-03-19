/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QPushButton *customerList_pushButton;
    QPushButton *editList_pushButton;
    QPushButton *snedPamphlet_pushButton;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QString::fromUtf8("SecDialog"));
        SecDialog->resize(400, 300);
        SecDialog->setStyleSheet(QString::fromUtf8(""));
        customerList_pushButton = new QPushButton(SecDialog);
        customerList_pushButton->setObjectName(QString::fromUtf8("customerList_pushButton"));
        customerList_pushButton->setGeometry(QRect(130, 80, 141, 28));
        editList_pushButton = new QPushButton(SecDialog);
        editList_pushButton->setObjectName(QString::fromUtf8("editList_pushButton"));
        editList_pushButton->setGeometry(QRect(130, 130, 141, 28));
        snedPamphlet_pushButton = new QPushButton(SecDialog);
        snedPamphlet_pushButton->setObjectName(QString::fromUtf8("snedPamphlet_pushButton"));
        snedPamphlet_pushButton->setGeometry(QRect(130, 180, 141, 28));

        retranslateUi(SecDialog);
        QObject::connect(customerList_pushButton, SIGNAL(clicked()), SecDialog, SLOT(viewCustomerList()));
        QObject::connect(editList_pushButton, SIGNAL(clicked()), SecDialog, SLOT(editCustomerList()));
        QObject::connect(snedPamphlet_pushButton, SIGNAL(clicked()), SecDialog, SLOT(sendPamphletList()));

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "Dialog", nullptr));
        customerList_pushButton->setText(QCoreApplication::translate("SecDialog", "View Customer List", nullptr));
        editList_pushButton->setText(QCoreApplication::translate("SecDialog", "Edit Customer List", nullptr));
        snedPamphlet_pushButton->setText(QCoreApplication::translate("SecDialog", "Send Pamphlet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
