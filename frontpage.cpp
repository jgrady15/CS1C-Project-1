#include "frontpage.h"
#include "ui_frontpage.h"

FrontPage::FrontPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrontPage)
{
    ui->setupUi(this);
}

FrontPage::~FrontPage()
{
    delete ui;
}

// Pamphlet Info
void FrontPage::on_pushButton_1_clicked()
{
    QMessageBox::information(this, "not built yet", "pamphlet info");
}

// Contact us page
void FrontPage::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "not built yet", "contact us page");
}

// Customer Testimony
void FrontPage::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "not built yet", "customer testimony");
}

// Login
void FrontPage::on_pushButton_4_clicked()
{
    mainWindow = new MainWindow(this);
    mainWindow->show();
}




