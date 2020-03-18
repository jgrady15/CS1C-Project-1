#include "reviewwindow.h"
#include "ui_reviewwindow.h"

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
    if (this->ui->nameLine->text() != "" && this->ui->productLine->text() != "") {
        //good
    } else if (this->ui->nameLine->text() == "" && this->ui->productLine->text() != "") {
        //forgot name
    } else if (this->ui->nameLine->text() != "" && this->ui->productLine->text() == "") {
        //forgot product
    } else {
        //forgot everything, I guess?
    }
}
