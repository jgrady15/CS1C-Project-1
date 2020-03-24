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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_orderWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *totalLine;
    QLabel *productLabel;
    QLabel *totalLabel;
    QLabel *qtyLabel;
    QPushButton *orderButton;
    QLabel *nameLabel;
    QSpinBox *qtyBox;
    QLineEdit *nameLine;
    QComboBox *menuDrop;
    QLineEdit *productLine;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *orderWindow)
    {
        if (orderWindow->objectName().isEmpty())
            orderWindow->setObjectName(QString::fromUtf8("orderWindow"));
        orderWindow->resize(426, 220);
        centralwidget = new QWidget(orderWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 372, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        totalLine = new QLineEdit(gridLayoutWidget);
        totalLine->setObjectName(QString::fromUtf8("totalLine"));
        totalLine->setReadOnly(true);

        gridLayout->addWidget(totalLine, 5, 2, 1, 1);

        productLabel = new QLabel(gridLayoutWidget);
        productLabel->setObjectName(QString::fromUtf8("productLabel"));

        gridLayout->addWidget(productLabel, 2, 0, 1, 1);

        totalLabel = new QLabel(gridLayoutWidget);
        totalLabel->setObjectName(QString::fromUtf8("totalLabel"));

        gridLayout->addWidget(totalLabel, 5, 1, 1, 1);

        qtyLabel = new QLabel(gridLayoutWidget);
        qtyLabel->setObjectName(QString::fromUtf8("qtyLabel"));

        gridLayout->addWidget(qtyLabel, 2, 2, 1, 1);

        orderButton = new QPushButton(gridLayoutWidget);
        orderButton->setObjectName(QString::fromUtf8("orderButton"));

        gridLayout->addWidget(orderButton, 7, 1, 1, 2);

        nameLabel = new QLabel(gridLayoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        qtyBox = new QSpinBox(gridLayoutWidget);
        qtyBox->setObjectName(QString::fromUtf8("qtyBox"));
        qtyBox->setMaximum(10);

        gridLayout->addWidget(qtyBox, 2, 3, 1, 1);

        nameLine = new QLineEdit(gridLayoutWidget);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));

        gridLayout->addWidget(nameLine, 0, 1, 1, 1);

        menuDrop = new QComboBox(gridLayoutWidget);
        menuDrop->setObjectName(QString::fromUtf8("menuDrop"));

        gridLayout->addWidget(menuDrop, 3, 0, 1, 1);

        productLine = new QLineEdit(gridLayoutWidget);
        productLine->setObjectName(QString::fromUtf8("productLine"));
        productLine->setReadOnly(true);

        gridLayout->addWidget(productLine, 3, 1, 1, 1);

        orderWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(orderWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 426, 21));
        orderWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(orderWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        orderWindow->setStatusBar(statusbar);

        retranslateUi(orderWindow);
        QObject::connect(menuDrop, SIGNAL(activated(int)), orderWindow, SLOT(setProduct()));
        QObject::connect(orderButton, SIGNAL(clicked()), orderWindow, SLOT(order()));

        QMetaObject::connectSlotsByName(orderWindow);
    } // setupUi

    void retranslateUi(QMainWindow *orderWindow)
    {
        orderWindow->setWindowTitle(QCoreApplication::translate("orderWindow", "MainWindow", nullptr));
        productLabel->setText(QCoreApplication::translate("orderWindow", "Product:", nullptr));
        totalLabel->setText(QCoreApplication::translate("orderWindow", "Total:  $", nullptr));
        qtyLabel->setText(QCoreApplication::translate("orderWindow", "Quantity: ", nullptr));
        orderButton->setText(QCoreApplication::translate("orderWindow", "Order", nullptr));
        nameLabel->setText(QCoreApplication::translate("orderWindow", "Customer Name: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orderWindow: public Ui_orderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERWINDOW_H
