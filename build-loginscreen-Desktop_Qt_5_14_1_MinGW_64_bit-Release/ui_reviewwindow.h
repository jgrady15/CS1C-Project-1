/********************************************************************************
** Form generated from reading UI file 'reviewwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEWWINDOW_H
#define UI_REVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reviewWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vertLayout;
    QHBoxLayout *nameHoriz;
    QLabel *nameLabel;
    QLineEdit *nameLine;
    QCheckBox *anonBox;
    QHBoxLayout *productHoriz;
    QLabel *productLabel;
    QLineEdit *productLine;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *priceLine;
    QComboBox *menuDrop;
    QHBoxLayout *ratingHoriz;
    QLabel *reviewLabel;
    QSpinBox *ratingBox;
    QLabel *starLabel;
    QHBoxLayout *reviewHoriz;
    QTextEdit *textEdit;
    QPushButton *submitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *reviewWindow)
    {
        if (reviewWindow->objectName().isEmpty())
            reviewWindow->setObjectName(QString::fromUtf8("reviewWindow"));
        reviewWindow->resize(450, 379);
        centralwidget = new QWidget(reviewWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 431, 311));
        vertLayout = new QVBoxLayout(verticalLayoutWidget);
        vertLayout->setObjectName(QString::fromUtf8("vertLayout"));
        vertLayout->setContentsMargins(0, 0, 0, 0);
        nameHoriz = new QHBoxLayout();
        nameHoriz->setObjectName(QString::fromUtf8("nameHoriz"));
        nameLabel = new QLabel(verticalLayoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        nameHoriz->addWidget(nameLabel);

        nameLine = new QLineEdit(verticalLayoutWidget);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));

        nameHoriz->addWidget(nameLine);

        anonBox = new QCheckBox(verticalLayoutWidget);
        anonBox->setObjectName(QString::fromUtf8("anonBox"));

        nameHoriz->addWidget(anonBox);


        vertLayout->addLayout(nameHoriz);

        productHoriz = new QHBoxLayout();
        productHoriz->setObjectName(QString::fromUtf8("productHoriz"));
        productLabel = new QLabel(verticalLayoutWidget);
        productLabel->setObjectName(QString::fromUtf8("productLabel"));

        productHoriz->addWidget(productLabel);

        productLine = new QLineEdit(verticalLayoutWidget);
        productLine->setObjectName(QString::fromUtf8("productLine"));
        productLine->setReadOnly(true);

        productHoriz->addWidget(productLine);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        productHoriz->addWidget(label);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        productHoriz->addItem(horizontalSpacer);

        priceLine = new QLineEdit(verticalLayoutWidget);
        priceLine->setObjectName(QString::fromUtf8("priceLine"));

        productHoriz->addWidget(priceLine);

        menuDrop = new QComboBox(verticalLayoutWidget);
        menuDrop->setObjectName(QString::fromUtf8("menuDrop"));

        productHoriz->addWidget(menuDrop);


        vertLayout->addLayout(productHoriz);

        ratingHoriz = new QHBoxLayout();
        ratingHoriz->setObjectName(QString::fromUtf8("ratingHoriz"));
        reviewLabel = new QLabel(verticalLayoutWidget);
        reviewLabel->setObjectName(QString::fromUtf8("reviewLabel"));

        ratingHoriz->addWidget(reviewLabel);

        ratingBox = new QSpinBox(verticalLayoutWidget);
        ratingBox->setObjectName(QString::fromUtf8("ratingBox"));
        ratingBox->setEnabled(true);
        ratingBox->setWrapping(false);
        ratingBox->setFrame(true);
        ratingBox->setMaximum(5);

        ratingHoriz->addWidget(ratingBox);

        starLabel = new QLabel(verticalLayoutWidget);
        starLabel->setObjectName(QString::fromUtf8("starLabel"));

        ratingHoriz->addWidget(starLabel);


        vertLayout->addLayout(ratingHoriz);

        reviewHoriz = new QHBoxLayout();
        reviewHoriz->setObjectName(QString::fromUtf8("reviewHoriz"));
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        reviewHoriz->addWidget(textEdit);


        vertLayout->addLayout(reviewHoriz);

        submitButton = new QPushButton(verticalLayoutWidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));

        vertLayout->addWidget(submitButton);

        reviewWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(reviewWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 21));
        reviewWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(reviewWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        reviewWindow->setStatusBar(statusbar);

        retranslateUi(reviewWindow);
        QObject::connect(anonBox, SIGNAL(clicked()), reviewWindow, SLOT(makeAnon()));
        QObject::connect(menuDrop, SIGNAL(activated(int)), reviewWindow, SLOT(setProduct()));
        QObject::connect(submitButton, SIGNAL(clicked()), reviewWindow, SLOT(submitReview()));

        QMetaObject::connectSlotsByName(reviewWindow);
    } // setupUi

    void retranslateUi(QMainWindow *reviewWindow)
    {
        reviewWindow->setWindowTitle(QCoreApplication::translate("reviewWindow", "MainWindow", nullptr));
        nameLabel->setText(QCoreApplication::translate("reviewWindow", "Name: ", nullptr));
        anonBox->setText(QCoreApplication::translate("reviewWindow", "Anonymous", nullptr));
        productLabel->setText(QCoreApplication::translate("reviewWindow", "Product:", nullptr));
        label->setText(QCoreApplication::translate("reviewWindow", "Price:", nullptr));
        reviewLabel->setText(QCoreApplication::translate("reviewWindow", "Review:", nullptr));
        starLabel->setText(QString());
        submitButton->setText(QCoreApplication::translate("reviewWindow", "Submit Review", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reviewWindow: public Ui_reviewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEWWINDOW_H
