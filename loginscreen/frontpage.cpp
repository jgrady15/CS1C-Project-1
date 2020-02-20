#include "frontpage.h"
#include "ui_frontpage.h"
#include <QMessageBox>
#include <QPixmap>

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

void FrontPage::on_pushButton_clicked()
{
    QMessageBox::information(this, "not built yet", "pamphlet info");
}

void FrontPage::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "not built yet", "contact us page");
}

void FrontPage::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "not built yet", "customer testimony");
}



void FrontPage::on_pushButton_4_clicked()
{
    mainWindow = new MainWindow(this);
    mainWindow->show();
}




