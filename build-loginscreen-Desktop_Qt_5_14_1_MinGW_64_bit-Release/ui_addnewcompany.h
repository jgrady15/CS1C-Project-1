/********************************************************************************
** Form generated from reading UI file 'addnewcompany.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWCOMPANY_H
#define UI_ADDNEWCOMPANY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addNewCompany
{
public:
    QStackedWidget *stackedWidget;
    QWidget *addNew;
    QLineEdit *addNew_cityStateZip;
    QLineEdit *addNew_websiteName;
    QLineEdit *addNew_companyName;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *addNew_streetName;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *addNew_submitButton;
    QComboBox *addNew_keyCustomerComboBox;
    QLabel *label_14;
    QLabel *label_15;
    QComboBox *addNew_interestLevelComboBox;
    QWidget *editCurrent;
    QPushButton *editCurrent_submitButton;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *editCurrent_companyName;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *editCurrent_streetName;
    QLineEdit *editCurrent_websiteName;
    QLineEdit *editCurrent_cityStateZip;
    QLineEdit *editCurrent_currentCompany;
    QLabel *label_13;
    QComboBox *editCurrent_interestLevelComboBox;
    QComboBox *editCurrent_keyCustomerComboBox;

    void setupUi(QDialog *addNewCompany)
    {
        if (addNewCompany->objectName().isEmpty())
            addNewCompany->setObjectName(QString::fromUtf8("addNewCompany"));
        addNewCompany->resize(404, 519);
        stackedWidget = new QStackedWidget(addNewCompany);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 791, 521));
        addNew = new QWidget();
        addNew->setObjectName(QString::fromUtf8("addNew"));
        addNew_cityStateZip = new QLineEdit(addNew);
        addNew_cityStateZip->setObjectName(QString::fromUtf8("addNew_cityStateZip"));
        addNew_cityStateZip->setGeometry(QRect(20, 190, 351, 31));
        addNew_websiteName = new QLineEdit(addNew);
        addNew_websiteName->setObjectName(QString::fromUtf8("addNew_websiteName"));
        addNew_websiteName->setGeometry(QRect(20, 260, 351, 31));
        addNew_companyName = new QLineEdit(addNew);
        addNew_companyName->setObjectName(QString::fromUtf8("addNew_companyName"));
        addNew_companyName->setGeometry(QRect(20, 50, 351, 31));
        label = new QLabel(addNew);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 101, 16));
        label_4 = new QLabel(addNew);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 240, 101, 16));
        addNew_streetName = new QLineEdit(addNew);
        addNew_streetName->setObjectName(QString::fromUtf8("addNew_streetName"));
        addNew_streetName->setGeometry(QRect(20, 120, 351, 31));
        label_2 = new QLabel(addNew);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 101, 16));
        label_3 = new QLabel(addNew);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 170, 101, 16));
        addNew_submitButton = new QPushButton(addNew);
        addNew_submitButton->setObjectName(QString::fromUtf8("addNew_submitButton"));
        addNew_submitButton->setGeometry(QRect(150, 440, 91, 31));
        addNew_keyCustomerComboBox = new QComboBox(addNew);
        addNew_keyCustomerComboBox->setObjectName(QString::fromUtf8("addNew_keyCustomerComboBox"));
        addNew_keyCustomerComboBox->setGeometry(QRect(120, 380, 251, 31));
        label_14 = new QLabel(addNew);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 325, 101, 21));
        label_15 = new QLabel(addNew);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 385, 101, 21));
        addNew_interestLevelComboBox = new QComboBox(addNew);
        addNew_interestLevelComboBox->setObjectName(QString::fromUtf8("addNew_interestLevelComboBox"));
        addNew_interestLevelComboBox->setGeometry(QRect(120, 320, 251, 31));
        stackedWidget->addWidget(addNew);
        editCurrent = new QWidget();
        editCurrent->setObjectName(QString::fromUtf8("editCurrent"));
        editCurrent_submitButton = new QPushButton(editCurrent);
        editCurrent_submitButton->setObjectName(QString::fromUtf8("editCurrent_submitButton"));
        editCurrent_submitButton->setGeometry(QRect(150, 460, 91, 31));
        label_7 = new QLabel(editCurrent);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 150, 101, 16));
        label_8 = new QLabel(editCurrent);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 90, 101, 16));
        label_9 = new QLabel(editCurrent);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 415, 101, 21));
        label_10 = new QLabel(editCurrent);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 270, 101, 16));
        editCurrent_companyName = new QLineEdit(editCurrent);
        editCurrent_companyName->setObjectName(QString::fromUtf8("editCurrent_companyName"));
        editCurrent_companyName->setGeometry(QRect(20, 110, 351, 31));
        label_11 = new QLabel(editCurrent);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 355, 101, 21));
        label_12 = new QLabel(editCurrent);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 210, 101, 16));
        editCurrent_streetName = new QLineEdit(editCurrent);
        editCurrent_streetName->setObjectName(QString::fromUtf8("editCurrent_streetName"));
        editCurrent_streetName->setGeometry(QRect(20, 170, 351, 31));
        editCurrent_websiteName = new QLineEdit(editCurrent);
        editCurrent_websiteName->setObjectName(QString::fromUtf8("editCurrent_websiteName"));
        editCurrent_websiteName->setGeometry(QRect(20, 290, 351, 31));
        editCurrent_cityStateZip = new QLineEdit(editCurrent);
        editCurrent_cityStateZip->setObjectName(QString::fromUtf8("editCurrent_cityStateZip"));
        editCurrent_cityStateZip->setGeometry(QRect(20, 230, 351, 31));
        editCurrent_currentCompany = new QLineEdit(editCurrent);
        editCurrent_currentCompany->setObjectName(QString::fromUtf8("editCurrent_currentCompany"));
        editCurrent_currentCompany->setEnabled(false);
        editCurrent_currentCompany->setGeometry(QRect(20, 50, 351, 31));
        label_13 = new QLabel(editCurrent);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 30, 171, 16));
        editCurrent_interestLevelComboBox = new QComboBox(editCurrent);
        editCurrent_interestLevelComboBox->setObjectName(QString::fromUtf8("editCurrent_interestLevelComboBox"));
        editCurrent_interestLevelComboBox->setGeometry(QRect(120, 350, 251, 31));
        editCurrent_keyCustomerComboBox = new QComboBox(editCurrent);
        editCurrent_keyCustomerComboBox->setObjectName(QString::fromUtf8("editCurrent_keyCustomerComboBox"));
        editCurrent_keyCustomerComboBox->setGeometry(QRect(120, 410, 251, 31));
        stackedWidget->addWidget(editCurrent);

        retranslateUi(addNewCompany);

        QMetaObject::connectSlotsByName(addNewCompany);
    } // setupUi

    void retranslateUi(QDialog *addNewCompany)
    {
        addNewCompany->setWindowTitle(QCoreApplication::translate("addNewCompany", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addNewCompany", "Company Name:", nullptr));
        label_4->setText(QCoreApplication::translate("addNewCompany", "Website Name:", nullptr));
        label_2->setText(QCoreApplication::translate("addNewCompany", "Street Name:", nullptr));
        label_3->setText(QCoreApplication::translate("addNewCompany", "City, State, Zip:", nullptr));
        addNew_submitButton->setText(QCoreApplication::translate("addNewCompany", "Submit", nullptr));
        label_14->setText(QCoreApplication::translate("addNewCompany", "Interest Level:", nullptr));
        label_15->setText(QCoreApplication::translate("addNewCompany", "Key Customer:", nullptr));
        editCurrent_submitButton->setText(QCoreApplication::translate("addNewCompany", "Submit", nullptr));
        label_7->setText(QCoreApplication::translate("addNewCompany", "Street Name:", nullptr));
        label_8->setText(QCoreApplication::translate("addNewCompany", "Company Name:", nullptr));
        label_9->setText(QCoreApplication::translate("addNewCompany", "Key Customer:", nullptr));
        label_10->setText(QCoreApplication::translate("addNewCompany", "Website Name:", nullptr));
        label_11->setText(QCoreApplication::translate("addNewCompany", "Interest Level:", nullptr));
        label_12->setText(QCoreApplication::translate("addNewCompany", "City, State, Zip:", nullptr));
        label_13->setText(QCoreApplication::translate("addNewCompany", "Currently Selected Company:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewCompany: public Ui_addNewCompany {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWCOMPANY_H
