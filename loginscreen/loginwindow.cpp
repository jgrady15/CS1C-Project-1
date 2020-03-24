#include "loginwindow.h"
#include "ui_loginwindow.h"
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

    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    username = "";
    password = "";
}

MainWindow::~MainWindow()
{
    delete ui;
}


/*!
 * \brief checks if user input matches correct values. If it doesn't, displays an error message. If it does, open the admin options
 */
void MainWindow::on_pushButton_Login_clicked() {
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if(username == "test" && password == "test") {
        option = new adminOption(this);
        option->show();
        this->hide();
    }
    else {
        QMessageBox::information(this, "Login Failed", "Incorrect Username or Password", QMessageBox::Ok);
    }
}
