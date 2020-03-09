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

    query->prepare("SELECT CompanyName from iRobotsPamphlet");
    query->exec();
    model->setQuery(*query);
    ui->customerListView->setModel(model);
    database.closeConnection();
}

void FrontPage::on_helpButtonAdminCommands_clicked()
{
    QMessageBox::information(this, "Help Widget",
                                   "Click Load Database and then double click on the company name in list view to view their information.");
}

void FrontPage::on_customerListView_activated(const QModelIndex &index)
{
    QString value = ui->customerListView->model()->data(index).toString();
    sql_database database;

    QSqlQuery query;
    query.exec("SELECT * from iRobotsPamphlet WHERE CompanyName='" + value + "'");

    while(query.next())
    {
        ui->displayCompanyID->setText(query.value(0).toString());
        ui->editCompanyName->setText(query.value(1).toString());
        ui->editStreetName->setText(query.value(2).toString());
        ui->editCityStateZip->setText(query.value(3).toString());
        ui->editWebsiteName->setText(query.value(4).toString());
        ui->editInterestLevel->setText(query.value(5).toString());
        ui->editKeyCustomer->setText(query.value(6).toString());
    }

    database.closeConnection();
}

void FrontPage::on_AdminCommandsSaveChanges_clicked()
{
    sql_database database;
    QString temp[7];

    temp[0] = ui->displayCompanyID->text();
    temp[1] = ui->editCompanyName->text();
    temp[2] = ui->editStreetName->text();
    temp[3] = ui->editCityStateZip->text();
    temp[4] = ui->editWebsiteName->text();
    temp[5] = ui->editInterestLevel->text();
    temp[6] = ui->editKeyCustomer->text();

    database.editCustomer(temp);
    database.closeConnection();
}

void FrontPage::on_searchBarAdminCommands_textChanged(const QString &arg1)
{

}
