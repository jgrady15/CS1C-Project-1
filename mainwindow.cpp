#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/images/image.png");
    int w =  ui->label_pic->width();
    int h =  ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password == "test")
    {
        //QMessageBox::information(this, "Login", "ur in");
        //hide();
        secDialog = new SecDialog(this);
        secDialog->show();

        //ui->statusbar->showMessage("ur in", 5000);

    }
    else
    {
       // QMessageBox::warning(this, "Login", "ur not in");
        ui->statusbar->showMessage("ur not in", 5000);
    }
}
