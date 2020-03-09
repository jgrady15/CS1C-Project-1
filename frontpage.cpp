#include "frontpage.h"
#include "ui_frontpage.h"

FrontPage::FrontPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrontPage)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

FrontPage::~FrontPage()
{
    delete ui;
}

// Pamphlet Info
void FrontPage::on_pushButton_1_clicked()
{
    // ui->stackedWidget->setCurrentIndex();
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
    ui->stackedWidget->setCurrentIndex(4);
}

void FrontPage::on_goBackButtonAdminLogin_clicked()
{
    // go back to main menu
    ui->stackedWidget->setCurrentIndex(0);
}

void FrontPage::on_goBackButtonAdminCommands_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void FrontPage::on_loginButton_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();

    if(username == "test" && password == "test")
    {
        ui->stackedWidget->setCurrentIndex(5);
    }
    else
    {
       // QMessageBox::warning(this, "Login", "ur not in");
//        ui->->showMessage("ur not in", 5000);
    }
}

void FrontPage::on_loadDatabaseButton_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    sql_database database;

    QSqlQuery *query = new QSqlQuery(database.grabDatabase());

    query->prepare("SELECT * from iRobotsPamphlet");
    query->exec();
    model->setQuery(*query);
    ui->customerListView->setModel(model);
    database.closeConnection();
}
