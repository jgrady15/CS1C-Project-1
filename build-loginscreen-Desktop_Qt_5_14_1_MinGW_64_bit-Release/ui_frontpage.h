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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *logo;
    QPushButton *helpButton;
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
    QPushButton *reviewButton;
    QListWidget *nameList;
    QListWidget *productList;
    QListWidget *ratingList;
    QListWidget *reviewList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FrontPage)
    {
        if (FrontPage->objectName().isEmpty())
            FrontPage->setObjectName(QString::fromUtf8("FrontPage"));
        FrontPage->resize(1270, 861);
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
        gridLayoutWidget = new QWidget(home_1);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 60, 1241, 721));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(562, 132));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/img/images/pushbutton1.jpg);"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(562, 132));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/img/images/pushbutton3.jpg);"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(562, 132));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/img/images/pushbutton2.jpg);"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(562, 132));
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/img/images/pushbutton4.jpg);"));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        logo = new QLabel(gridLayoutWidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMinimumSize(QSize(562, 562));

        gridLayout->addWidget(logo, 0, 1, 3, 1);

        helpButton = new QPushButton(gridLayoutWidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        sizePolicy.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy);
        helpButton->setMinimumSize(QSize(562, 132));
        helpButton->setStyleSheet(QString::fromUtf8("image: url(:/img/images/pushbutton5.jpg);"));

        gridLayout->addWidget(helpButton, 3, 1, 1, 1);

        stackedWidget->addWidget(home_1);
        home_2 = new QWidget();
        home_2->setObjectName(QString::fromUtf8("home_2"));
        sizePolicy.setHeightForWidth(home_2->sizePolicy().hasHeightForWidth());
        home_2->setSizePolicy(sizePolicy);
        homeButton_1 = new QPushButton(home_2);
        homeButton_1->setObjectName(QString::fromUtf8("homeButton_1"));
        homeButton_1->setGeometry(QRect(1120, 10, 93, 28));
        tabWidget = new QTabWidget(home_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 40, 1250, 760));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pamphlet_pic = new QLabel(tab);
        pamphlet_pic->setObjectName(QString::fromUtf8("pamphlet_pic"));
        pamphlet_pic->setGeometry(QRect(0, 0, 1250, 760));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pricing_label = new QLabel(tab_2);
        pricing_label->setObjectName(QString::fromUtf8("pricing_label"));
        pricing_label->setGeometry(QRect(0, 0, 1250, 760));
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(home_2);
        home_3 = new QWidget();
        home_3->setObjectName(QString::fromUtf8("home_3"));
        homeButton_2 = new QPushButton(home_3);
        homeButton_2->setObjectName(QString::fromUtf8("homeButton_2"));
        homeButton_2->setGeometry(QRect(1070, 0, 93, 28));
        contact_label = new QLabel(home_3);
        contact_label->setObjectName(QString::fromUtf8("contact_label"));
        contact_label->setGeometry(QRect(0, 40, 1250, 760));
        stackedWidget->addWidget(home_3);
        home_4 = new QWidget();
        home_4->setObjectName(QString::fromUtf8("home_4"));
        homeButton_3 = new QPushButton(home_4);
        homeButton_3->setObjectName(QString::fromUtf8("homeButton_3"));
        homeButton_3->setGeometry(QRect(992, 10, 111, 28));
        reviewButton = new QPushButton(home_4);
        reviewButton->setObjectName(QString::fromUtf8("reviewButton"));
        reviewButton->setGeometry(QRect(992, 40, 111, 28));
        nameList = new QListWidget(home_4);
        nameList->setObjectName(QString::fromUtf8("nameList"));
        nameList->setGeometry(QRect(10, 60, 171, 581));
        productList = new QListWidget(home_4);
        productList->setObjectName(QString::fromUtf8("productList"));
        productList->setGeometry(QRect(190, 60, 181, 581));
        ratingList = new QListWidget(home_4);
        ratingList->setObjectName(QString::fromUtf8("ratingList"));
        ratingList->setGeometry(QRect(380, 60, 191, 581));
        reviewList = new QListWidget(home_4);
        reviewList->setObjectName(QString::fromUtf8("reviewList"));
        reviewList->setGeometry(QRect(580, 60, 191, 581));
        stackedWidget->addWidget(home_4);

        horizontalLayout->addWidget(stackedWidget);

        FrontPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FrontPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1270, 21));
        FrontPage->setMenuBar(menubar);
        statusbar = new QStatusBar(FrontPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FrontPage->setStatusBar(statusbar);

        retranslateUi(FrontPage);
        QObject::connect(reviewButton, SIGNAL(clicked()), FrontPage, SLOT(submitReview()));
        QObject::connect(helpButton, SIGNAL(clicked()), FrontPage, SLOT(stopItGetSomeHelp()));

        stackedWidget->setCurrentIndex(3);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FrontPage);
    } // setupUi

    void retranslateUi(QMainWindow *FrontPage)
    {
        FrontPage->setWindowTitle(QCoreApplication::translate("FrontPage", "MainWindow", nullptr));
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        pushButton_4->setText(QString());
        logo->setText(QString());
        helpButton->setText(QString());
        homeButton_1->setText(QCoreApplication::translate("FrontPage", "Home", nullptr));
        pamphlet_pic->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("FrontPage", "Info", nullptr));
        pricing_label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("FrontPage", "Pricing", nullptr));
        homeButton_2->setText(QCoreApplication::translate("FrontPage", "Home", nullptr));
        contact_label->setText(QString());
        homeButton_3->setText(QCoreApplication::translate("FrontPage", "Home", nullptr));
        reviewButton->setText(QCoreApplication::translate("FrontPage", "Submit A Review", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrontPage: public Ui_FrontPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRONTPAGE_H
