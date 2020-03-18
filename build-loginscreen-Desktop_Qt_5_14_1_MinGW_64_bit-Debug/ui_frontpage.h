/********************************************************************************
** Form generated from reading UI file 'frontpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRONTPAGE_H
#define UI_FRONTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrontPage
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *home_1;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *home_2;
    QPushButton *homeButton_1;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *pamphlet_pic;
    QWidget *tab_2;
    QLabel *pricing_label;
    QWidget *home_3;
    QPushButton *homeButton_2;
    QLabel *contact_label;
    QWidget *home_4;
    QPushButton *homeButton_3;
    QLabel *customer_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FrontPage)
    {
        if (FrontPage->objectName().isEmpty())
            FrontPage->setObjectName(QString::fromUtf8("FrontPage"));
        FrontPage->resize(1138, 592);
        FrontPage->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(FrontPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("img url(:/img/images/pamphlet1.jpg)"));
        home_1 = new QWidget();
        home_1->setObjectName(QString::fromUtf8("home_1"));
        widget = new QWidget(home_1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 1120, 522));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(275, 520));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/img/images/screen1.jpg);"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(275, 520));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/img/images/screen2.jpg);"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(275, 520));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/img/images/screen3.jpg);"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(275, 520));
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/img/images/screen4.jpg);"));

        horizontalLayout_2->addWidget(pushButton_4);

        stackedWidget->addWidget(home_1);
        home_2 = new QWidget();
        home_2->setObjectName(QString::fromUtf8("home_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(home_2->sizePolicy().hasHeightForWidth());
        home_2->setSizePolicy(sizePolicy1);
        homeButton_1 = new QPushButton(home_2);
        homeButton_1->setObjectName(QString::fromUtf8("homeButton_1"));
        homeButton_1->setGeometry(QRect(970, 70, 93, 28));
        tabWidget = new QTabWidget(home_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 40, 900, 480));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pamphlet_pic = new QLabel(tab);
        pamphlet_pic->setObjectName(QString::fromUtf8("pamphlet_pic"));
        pamphlet_pic->setGeometry(QRect(0, 0, 900, 450));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pricing_label = new QLabel(tab_2);
        pricing_label->setObjectName(QString::fromUtf8("pricing_label"));
        pricing_label->setGeometry(QRect(0, 0, 900, 450));
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(home_2);
        home_3 = new QWidget();
        home_3->setObjectName(QString::fromUtf8("home_3"));
        homeButton_2 = new QPushButton(home_3);
        homeButton_2->setObjectName(QString::fromUtf8("homeButton_2"));
        homeButton_2->setGeometry(QRect(1020, 0, 93, 28));
        contact_label = new QLabel(home_3);
        contact_label->setObjectName(QString::fromUtf8("contact_label"));
        contact_label->setGeometry(QRect(15, 45, 1001, 481));
        stackedWidget->addWidget(home_3);
        home_4 = new QWidget();
        home_4->setObjectName(QString::fromUtf8("home_4"));
        homeButton_3 = new QPushButton(home_4);
        homeButton_3->setObjectName(QString::fromUtf8("homeButton_3"));
        homeButton_3->setGeometry(QRect(1010, 10, 93, 28));
        customer_label = new QLabel(home_4);
        customer_label->setObjectName(QString::fromUtf8("customer_label"));
        customer_label->setGeometry(QRect(0, 0, 981, 511));
        stackedWidget->addWidget(home_4);

        horizontalLayout->addWidget(stackedWidget);

        FrontPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FrontPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1138, 26));
        FrontPage->setMenuBar(menubar);
        statusbar = new QStatusBar(FrontPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FrontPage->setStatusBar(statusbar);

        retranslateUi(FrontPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FrontPage);
    } // setupUi

    void retranslateUi(QMainWindow *FrontPage)
    {
        FrontPage->setWindowTitle(QCoreApplication::translate("FrontPage", "MainWindow", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        homeButton_1->setText(QCoreApplication::translate("FrontPage", "Home", nullptr));
        pamphlet_pic->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("FrontPage", "Info", nullptr));
        pricing_label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("FrontPage", "Pricing", nullptr));
        homeButton_2->setText(QCoreApplication::translate("FrontPage", "Home", nullptr));
        contact_label->setText(QString());
        homeButton_3->setText(QCoreApplication::translate("FrontPage", "Home", nullptr));
        customer_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FrontPage: public Ui_FrontPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRONTPAGE_H
