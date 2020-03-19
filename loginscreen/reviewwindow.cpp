#include "reviewwindow.h"
#include "ui_reviewwindow.h"
#include <QMessageBox>
reviewWindow::reviewWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::reviewWindow)
{
    ui->setupUi(this);
    this->ui->menuDrop->addItem("Bomb Bot 1000");
    this->ui->menuDrop->addItem("Bomb Bot 1250");
    this->ui->menuDrop->addItem("Bomb Bot 1500");
    QObject::connect(this->ui->menuDrop, SIGNAL(activated(int)), this, SLOT(setProduct(int)));

    QPixmap star(":/img/images/star");
    this->ui->starLabel->setPixmap(star.scaled(250,22,Qt::KeepAspectRatio));
}

reviewWindow::~reviewWindow()
{
    delete ui;
}

void reviewWindow::makeAnon() {
    if (this->ui->anonBox->isChecked()) {
        this->ui->nameLine->setStyleSheet("QLineEdit {background-color:lightgray;}");
        this->ui->nameLine->setText("Anonymous");
        this->ui->nameLine->setReadOnly(true);
    } else {
        this->ui->nameLine->setStyleSheet("QLineEdit {background-color:white;}");
        this->ui->nameLine->setText("");
        this->ui->nameLine->setReadOnly(false);
    }
}

void reviewWindow::setProduct(int index) {
    this->ui->productLine->setText(this->ui->menuDrop->itemText(index));
}

void reviewWindow::submitReview() {
    QMessageBox errorOccurred;
    errorOccurred.setStyleSheet("QLabel {min-width: 300px;}");
    if (this->ui->nameLine->text() != "" && this->ui->productLine->text() != "") {
        errorOccurred.setInformativeText("Review Successfully Submitted!");
        errorOccurred.setStandardButtons(QMessageBox::Ok);
        errorOccurred.exec();
        this->ui->productLabel->setStyleSheet("QLabel {font-weight: normal;}");
        this->ui->nameLabel->setStyleSheet("QLabel {font-weight: normal;}");
        //Code to put it in an review area?
    } else if (this->ui->nameLine->text() == "" && this->ui->productLine->text() != "") {
        errorOccurred.setInformativeText("No name!");
        errorOccurred.setStandardButtons(QMessageBox::Ok);
        errorOccurred.exec();
        this->ui->nameLabel->setStyleSheet("QLabel {font: bold 14px; color: red}");
        this->ui->productLabel->setStyleSheet("QLabel {font-weight: normal;}");
    } else if (this->ui->nameLine->text() != "" && this->ui->productLine->text() == "") {
        errorOccurred.setInformativeText("No product selected!");
        errorOccurred.setStandardButtons(QMessageBox::Ok);
        errorOccurred.exec();
        this->ui->productLabel->setStyleSheet("QLabel {font: bold 14px; color: red}");
        this->ui->nameLabel->setStyleSheet("QLabel {font-weight: normal;}");
    } else {
        errorOccurred.setInformativeText("No info provided!");
        errorOccurred.setStandardButtons(QMessageBox::Ok);
        errorOccurred.exec();
        this->ui->nameLabel->setStyleSheet("QLabel {font: bold 14px; color: red}");
        this->ui->productLabel->setStyleSheet("QLabel {font: bold 14px; color: red}");
    }
}
