/********************************************************************************
** Form generated from reading UI file 'emailwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAILWIDGET_H
#define UI_EMAILWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_emailWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *sendVert;
    QHBoxLayout *nameHoriz;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QHBoxLayout *emailHoriz;
    QLabel *emailLabel;
    QLineEdit *emailLine;
    QPushButton *sendButton;

    void setupUi(QWidget *emailWidget)
    {
        if (emailWidget->objectName().isEmpty())
            emailWidget->setObjectName(QString::fromUtf8("emailWidget"));
        emailWidget->resize(374, 288);
        verticalLayoutWidget = new QWidget(emailWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 351, 271));
        sendVert = new QVBoxLayout(verticalLayoutWidget);
        sendVert->setObjectName(QString::fromUtf8("sendVert"));
        sendVert->setContentsMargins(0, 0, 0, 0);
        nameHoriz = new QHBoxLayout();
        nameHoriz->setObjectName(QString::fromUtf8("nameHoriz"));
        nameLabel = new QLabel(verticalLayoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        nameHoriz->addWidget(nameLabel);

        nameEdit = new QLineEdit(verticalLayoutWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        nameHoriz->addWidget(nameEdit);


        sendVert->addLayout(nameHoriz);

        emailHoriz = new QHBoxLayout();
        emailHoriz->setObjectName(QString::fromUtf8("emailHoriz"));
        emailLabel = new QLabel(verticalLayoutWidget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        emailHoriz->addWidget(emailLabel);

        emailLine = new QLineEdit(verticalLayoutWidget);
        emailLine->setObjectName(QString::fromUtf8("emailLine"));

        emailHoriz->addWidget(emailLine);


        sendVert->addLayout(emailHoriz);

        sendButton = new QPushButton(verticalLayoutWidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        sendVert->addWidget(sendButton);


        retranslateUi(emailWidget);
        QObject::connect(sendButton, SIGNAL(clicked()), emailWidget, SLOT(sendPamphlet()));
        QObject::connect(emailLine, SIGNAL(returnPressed()), sendButton, SLOT(click()));

        QMetaObject::connectSlotsByName(emailWidget);
    } // setupUi

    void retranslateUi(QWidget *emailWidget)
    {
        emailWidget->setWindowTitle(QCoreApplication::translate("emailWidget", "Form", nullptr));
        nameLabel->setText(QCoreApplication::translate("emailWidget", "Name: ", nullptr));
        emailLabel->setText(QCoreApplication::translate("emailWidget", "Email Address:", nullptr));
        sendButton->setText(QCoreApplication::translate("emailWidget", "Send Pamphlet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class emailWidget: public Ui_emailWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAILWIDGET_H
