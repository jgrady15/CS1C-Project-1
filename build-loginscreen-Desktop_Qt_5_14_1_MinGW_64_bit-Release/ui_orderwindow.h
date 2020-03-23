/********************************************************************************
** Form generated from reading UI file 'orderwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERWINDOW_H
#define UI_ORDERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_orderWindow
{
public:
    QWidget *centralwidget;
    QComboBox *menuDrop;
    QLabel *nameLabel;
    QLabel *productLabel;
    QLabel *totalLabel;
    QLabel *qtyLabel;
    QSpinBox *qtyBox;
    QLineEdit *totalLine;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *orderWindow)
    {
        if (orderWindow->objectName().isEmpty())
            orderWindow->setObjectName(QString::fromUtf8("orderWindow"));
        orderWindow->resize(800, 600);
        centralwidget = new QWidget(orderWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        menuDrop = new QComboBox(centralwidget);
        menuDrop->setObjectName(QString::fromUtf8("menuDrop"));
        menuDrop->setGeometry(QRect(70, 70, 151, 16));
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(20, 40, 101, 16));
        productLabel = new QLabel(centralwidget);
        productLabel->setObjectName(QString::fromUtf8("productLabel"));
        productLabel->setGeometry(QRect(20, 70, 61, 16));
        totalLabel = new QLabel(centralwidget);
        totalLabel->setObjectName(QString::fromUtf8("totalLabel"));
        totalLabel->setGeometry(QRect(20, 100, 47, 13));
        qtyLabel = new QLabel(centralwidget);
        qtyLabel->setObjectName(QString::fromUtf8("qtyLabel"));
        qtyLabel->setGeometry(QRect(230, 70, 51, 16));
        qtyBox = new QSpinBox(centralwidget);
        qtyBox->setObjectName(QString::fromUtf8("qtyBox"));
        qtyBox->setGeometry(QRect(280, 70, 42, 16));
        qtyBox->setMaximum(10);
        totalLine = new QLineEdit(centralwidget);
        totalLine->setObjectName(QString::fromUtf8("totalLine"));
        totalLine->setGeometry(QRect(70, 100, 113, 16));
        totalLine->setReadOnly(true);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 40, 151, 20));
        orderWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(orderWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        orderWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(orderWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        orderWindow->setStatusBar(statusbar);

        retranslateUi(orderWindow);
        QObject::connect(menuDrop, SIGNAL(activated(int)), orderWindow, SLOT(setProduct()));

        QMetaObject::connectSlotsByName(orderWindow);
    } // setupUi

    void retranslateUi(QMainWindow *orderWindow)
    {
        orderWindow->setWindowTitle(QCoreApplication::translate("orderWindow", "MainWindow", nullptr));
        nameLabel->setText(QCoreApplication::translate("orderWindow", "Customer Name: ", nullptr));
        productLabel->setText(QCoreApplication::translate("orderWindow", "Product:", nullptr));
        totalLabel->setText(QCoreApplication::translate("orderWindow", "Total:  $", nullptr));
        qtyLabel->setText(QCoreApplication::translate("orderWindow", "Quantity: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orderWindow: public Ui_orderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERWINDOW_H
