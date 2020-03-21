#include "loginwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/images/image.png");
    int w =  ui->label_pic->width();
    int h =  ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    this->ui->pushButton_Login->connect(this->ui->lineEdit_password, SIGNAL(returnPressed()), this, SLOT(on_pushButton_Login_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked() {
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if(username == "test" && password == "test") {
        option = new adminOption(this);
        option->show();
        this->hide();
    }
    else {
        ui->statusbar->showMessage("ur not in", 5000);
    }
}
