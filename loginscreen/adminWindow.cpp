#include "adminwindow.h"
#include "ui_adminwindow.h"

adminWindow::adminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminWindow)
{

    ui->setupUi(this);
    ui->adminWindow_sortComboBox->addItem("Ascending A-Z");
    ui->adminWindow_sortComboBox->addItem("Descending Z-A");
    ui->adminWindow_sortComboBox->addItem("Interest Level");
    ui->adminWindow_sortComboBox->addItem("Key Customers");

    QObject::connect(this->ui->adminWindow_sortComboBox, SIGNAL(activated(int)), this, SLOT(alphaNumOptions(int)));
    setupPage();
}

adminWindow::~adminWindow()
{
    delete ui;
}

void adminWindow::searchFor()
{
    //Obviously this function is going to be for searching
    QSqlQuery query;
    QSqlRecord record;
    QStringList temp1, temp2, temp3;
    QString searchingFor = this->ui->adminWindow_searchBar->text();

    query.prepare("SELECT CompanyName, InterestLevel, KeyCustomer FROM iRobotsPamphlet WHERE CompanyName LIKE '%" + searchingFor + "%';");

    if(!query.exec())
        qDebug() << query.lastError();

    while(query.next())
    {
        record = query.record();
        temp1 << record.value(0).toString();
        temp2 << record.value(1).toString();
        temp3 << record.value(2).toString();
    }

    if(temp1.empty())
        QMessageBox::information(this, "Info Box", "Searched string was empty! Search did not find anything of use.");

    else
    {
        ui->adminWindow_displayListCompanyName->clear();
        ui->adminWindow_displayListCompanyName->addItems(temp1);

        ui->adminWindow_displayListInterestLevel->clear();
        ui->adminWindow_displayListInterestLevel->addItems(temp2);

        ui->adminWindow_displayListKeyCustomer->clear();
        ui->adminWindow_displayListKeyCustomer->addItems(temp3);
    }
}

void adminWindow::selectCompany(const QModelIndex &index)
{
    selectedCompany = ui->adminWindow_displayListCompanyName->model()->data(index).toString();
    qDebug() << selectedCompany;
}

void adminWindow::setupPage()
{
    QSqlQuery query;
    QSqlRecord record;
    QStringList temp1, temp2, temp3;

    query.prepare("SELECT CompanyName, InterestLevel, KeyCustomer FROM iRobotsPamphlet;");

    if(!query.exec())
        qDebug() << query.lastError();

    while(query.next())
    {
        record = query.record();
        temp1 << record.value(0).toString();
        temp2 << record.value(1).toString();
        temp3 << record.value(2).toString();
    }

    ui->adminWindow_displayListCompanyName->addItems(temp1);
    ui->adminWindow_displayListInterestLevel->addItems(temp2);
    ui->adminWindow_displayListKeyCustomer->addItems(temp3);
}

void adminWindow::alphaNumOptions(int index)
{
    QSqlQuery query;
    QSqlRecord record;
    QStringList temp1, temp2, temp3;
    QString option = this->ui->adminWindow_sortComboBox->itemText(index);

    ui->adminWindow_displayListCompanyName->clear();
    ui->adminWindow_displayListInterestLevel->clear();
    ui->adminWindow_displayListKeyCustomer->clear();

    if (index == 0)
    {
        query.prepare("SELECT CompanyName, InterestLevel, KeyCustomer FROM iRobotsPamphlet ORDER BY CompanyName;");

        if(!query.exec())
            qDebug() << query.lastError();

        while(query.next())
        {
            record = query.record();
            temp1 << record.value(0).toString();
            temp2 << record.value(1).toString();
            temp3 << record.value(2).toString();
        }

        ui->adminWindow_displayListCompanyName->addItems(temp1);
        ui->adminWindow_displayListInterestLevel->addItems(temp2);
        ui->adminWindow_displayListKeyCustomer->addItems(temp3);
    }

    else if (index == 1)
    {
        query.prepare("SELECT CompanyName, InterestLevel, KeyCustomer FROM iRobotsPamphlet ORDER BY CompanyName DESC;");

        if(!query.exec())
            qDebug() << query.lastError();

        while(query.next())
        {
            record = query.record();
            temp1 << record.value(0).toString();
            temp2 << record.value(1).toString();
            temp3 << record.value(2).toString();
        }

        ui->adminWindow_displayListCompanyName->addItems(temp1);
        ui->adminWindow_displayListInterestLevel->addItems(temp2);
        ui->adminWindow_displayListKeyCustomer->addItems(temp3);
    }

    if (index == 2)
    {
        query.prepare("SELECT CompanyName, InterestLevel, KeyCustomer FROM iRobotsPamphlet ORDER BY InterestLevel DESC;");

        if(!query.exec())
            qDebug() << query.lastError();

        while(query.next())
        {
            record = query.record();
            temp1 << record.value(0).toString();
            temp2 << record.value(1).toString();
            temp3 << record.value(2).toString();
        }

        ui->adminWindow_displayListCompanyName->addItems(temp1);
        ui->adminWindow_displayListInterestLevel->addItems(temp2);
        ui->adminWindow_displayListKeyCustomer->addItems(temp3);
    }

    else if (index == 3)
    {
        query.prepare("SELECT CompanyName, InterestLevel, KeyCustomer FROM iRobotsPamphlet ORDER BY KeyCustomer ASC;");

        if(!query.exec())
            qDebug() << query.lastError();

        while(query.next())
        {
            record = query.record();
            temp1 << record.value(0).toString();
            temp2 << record.value(1).toString();
            temp3 << record.value(2).toString();
        }

        ui->adminWindow_displayListCompanyName->addItems(temp1);
        ui->adminWindow_displayListInterestLevel->addItems(temp2);
        ui->adminWindow_displayListKeyCustomer->addItems(temp3);
    }
}

void adminWindow::refreshWindow()
{
    QSqlQuery query;
    QSqlRecord record;
    QStringList temp1, temp2, temp3;

    query.prepare("SELECT CompanyName, InterestLevel, KeyCustomer FROM iRobotsPamphlet;");

    if(!query.exec())
        qDebug() << query.lastError();

    while(query.next())
    {
        record = query.record();
        temp1 << record.value(0).toString();
        temp2 << record.value(1).toString();
        temp3 << record.value(2).toString();
    }

    ui->adminWindow_searchBar->clear();
    ui->adminWindow_displayListCompanyName->clear();
    ui->adminWindow_displayListInterestLevel->clear();
    ui->adminWindow_displayListKeyCustomer->clear();

    ui->adminWindow_displayListCompanyName->addItems(temp1);
    ui->adminWindow_displayListInterestLevel->addItems(temp2);
    ui->adminWindow_displayListKeyCustomer->addItems(temp3);
}

void adminWindow::on_adminWindow_refreshButton_clicked()
{
    refreshWindow();
}

void adminWindow::updateDB()
{

}

void adminWindow::deleteInDB()
{
    QSqlQuery query;
    QSqlRecord record;
    QStringList temp1, temp2, temp3;

    if(selectedCompany.isEmpty())
        QMessageBox::information(this, "Info Box", "Please select a Company to delete first!");

    else
    {
        query.prepare("DELETE FROM iRobotsPamphlet WHERE CompanyName = :cn");
        query.bindValue(":cn", selectedCompany);

        if(!query.exec())
            qDebug() << query.lastError();

        refreshWindow();
    }
}
