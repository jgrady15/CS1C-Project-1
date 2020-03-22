#include "frontpage.h"
#include "ui_frontpage.h"
#include "reviewwindow.h"
#include <QMessageBox>
#include <QPixmap>

FrontPage::FrontPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrontPage)
{
    ui->setupUi(this);

    QPixmap pix(":/img/images/pamphlet_2.jpg");
    int w =  ui->pamphlet_pic->width();
    int h =  ui->pamphlet_pic->height();
    ui->pamphlet_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pix2(":/img/images/pricing.jpg");
    int w2 =  ui->pamphlet_pic->width();
    int h2 =  ui->pamphlet_pic->height();
    ui->pricing_label->setPixmap(pix2.scaled(w2,h2,Qt::KeepAspectRatio));

    QPixmap pix3(":/img/images/contact.jpg");
    int w3 =  ui->pamphlet_pic->width();
    int h3 =  ui->pamphlet_pic->height();
    ui->contact_label->setPixmap(pix3.scaled(w3,h3,Qt::KeepAspectRatio));

    QPixmap pix4(":/img/images/customer.jpg");
    int w4 =  ui->pamphlet_pic->width();
    int h4 =  ui->pamphlet_pic->height();
    ui->customer_label->setPixmap(pix4.scaled(w4,h4,Qt::KeepAspectRatio));

    QPixmap pix5(":/img/images/gangnam style.jpg");
    int w5 =  ui->logo->width();
    int h5 =  ui->logo->height();
    ui->logo->setPixmap(pix5.scaled(w5,h5,Qt::KeepAspectRatio));

}

FrontPage::~FrontPage()
{
    delete ui;
}

void FrontPage::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void FrontPage::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void FrontPage::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}



void FrontPage::on_pushButton_4_clicked()
{
    mainWindow = new MainWindow(this);
    mainWindow->show();
}





void FrontPage::on_homeButton_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void FrontPage::on_homeButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void FrontPage::on_homeButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void FrontPage::submitReview() {
   review = new reviewWindow();
   review->show();
}
