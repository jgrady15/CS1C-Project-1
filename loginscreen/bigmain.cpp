#include "bigmain.h"
#include "ui_bigmain.h"

BigMain::BigMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BigMain)
{
    ui->setupUi(this);
    mainwindow = new MainWindow();
    timer = new QTimer();
}

BigMain::~BigMain()
{
    delete ui;
}

void BigMain::changeWindow() {
    if(mainwindow->isVisible()) {
        mainwindow->hide();
        this->show();
    } else {
        mainwindow->show();
    }
}

void BigMain::buttonPressed() {
    mainwindow->show();
}
