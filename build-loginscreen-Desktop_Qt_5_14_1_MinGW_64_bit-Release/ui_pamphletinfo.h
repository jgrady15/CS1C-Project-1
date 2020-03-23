/********************************************************************************
** Form generated from reading UI file 'pamphletinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAMPHLETINFO_H
#define UI_PAMPHLETINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pamphletInfo
{
public:
    QListWidget *nameList;
    QListWidget *emailList;
    QPushButton *pushButton;

    void setupUi(QWidget *pamphletInfo)
    {
        if (pamphletInfo->objectName().isEmpty())
            pamphletInfo->setObjectName(QString::fromUtf8("pamphletInfo"));
        pamphletInfo->resize(459, 417);
        nameList = new QListWidget(pamphletInfo);
        nameList->setObjectName(QString::fromUtf8("nameList"));
        nameList->setGeometry(QRect(10, 30, 211, 371));
        emailList = new QListWidget(pamphletInfo);
        emailList->setObjectName(QString::fromUtf8("emailList"));
        emailList->setGeometry(QRect(230, 30, 211, 371));
        pushButton = new QPushButton(pamphletInfo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 0, 75, 23));

        retranslateUi(pamphletInfo);
        QObject::connect(pushButton, SIGNAL(clicked()), pamphletInfo, SLOT(refresh()));

        QMetaObject::connectSlotsByName(pamphletInfo);
    } // setupUi

    void retranslateUi(QWidget *pamphletInfo)
    {
        pamphletInfo->setWindowTitle(QCoreApplication::translate("pamphletInfo", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("pamphletInfo", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pamphletInfo: public Ui_pamphletInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAMPHLETINFO_H
