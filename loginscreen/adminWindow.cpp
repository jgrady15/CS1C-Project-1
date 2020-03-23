#include "adminwindow.h"
#include "ui_adminwindow.h"

adminWindow::adminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminWindow)
{
    ui->setupUi(this);
    setupPage();
}

adminWindow::~adminWindow()
{
    delete ui;
}

void adminWindow::displayCompany()
{    
    ui->companyPage_sortComboBox->addItem("Ascending A-Z");
    ui->companyPage_sortComboBox->addItem("Descending Z-A");
    ui->companyPage_sortComboBox->addItem("Interest Level");
    ui->companyPage_sortComboBox->addItem("Key Customers");

    QObject::connect(this->ui->companyPage_sortComboBox, SIGNAL(activated(int)), this, SLOT(alphaNumOptions(int)));
    ui->stackedWidget->setCurrentIndex(0);
}

void adminWindow::displayCustomer()
{
    QSqlQuery query;
    QSqlRecord record;
    QStringList temp1, temp2, temp3;

//    ui->customerPage_displayListCustomerName->addItems();
//    ui->customerPage_displayListProductName->addItems();
//    ui->customerPage_displayListCost->addItems();

    ui->stackedWidget->setCurrentIndex(1);
}

void adminWindow::searchFor()
{
    //Obviously this function is going to be for searching
    QSqlQuery query;
    QSqlRecord record;
    QStringList temp1, temp2, temp3;
    QString searchingFor = this->ui->companyPage_searchBar->text();

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
        ui->companyPage_displayListCompanyName->clear();
        ui->companyPage_displayListCompanyName->addItems(temp1);

        ui->companyPage_displayListInterestLevel->clear();
        ui->companyPage_displayListInterestLevel->addItems(temp2);

        ui->companyPage_displayListKeyCustomer->clear();
        ui->companyPage_displayListKeyCustomer->addItems(temp3);
    }
}

void adminWindow::selectCompany(const QModelIndex &index)
{
    selectedCompany = ui->companyPage_displayListCompanyName->model()->data(index).toString();
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

    ui->companyPage_displayListCompanyName->addItems(temp1);
    ui->companyPage_displayListInterestLevel->addItems(temp2);
    ui->companyPage_displayListKeyCustomer->addItems(temp3);
}

void adminWindow::alphaNumOptions(int index)
{
    QSqlQuery query;
    QSqlRecord record;
    QStringList temp1, temp2, temp3;
    QString option = this->ui->companyPage_sortComboBox->itemText(index);

    ui->companyPage_displayListCompanyName->clear();
    ui->companyPage_displayListInterestLevel->clear();
    ui->companyPage_displayListKeyCustomer->clear();

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

        ui->companyPage_displayListCompanyName->addItems(temp1);
        ui->companyPage_displayListInterestLevel->addItems(temp2);
        ui->companyPage_displayListKeyCustomer->addItems(temp3);
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

        ui->companyPage_displayListCompanyName->addItems(temp1);
        ui->companyPage_displayListInterestLevel->addItems(temp2);
        ui->companyPage_displayListKeyCustomer->addItems(temp3);
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

        ui->companyPage_displayListCompanyName->addItems(temp1);
        ui->companyPage_displayListInterestLevel->addItems(temp2);
        ui->companyPage_displayListKeyCustomer->addItems(temp3);
    }

    else if (index == 3)
    {
        query.prepare("SELECT CompanyName, InterestLevel, KeyCustomer FROM iRobotsPamphlet ORDER BY KeyCustomer ASC;");

        if(!query.exec())
            qDebug() << query.lastError();

        while(query.next())
        {
            record = query.record();

            if(record.value(2).toString() == "key")
            {
                temp1 << record.value(0).toString();
                temp2 << record.value(1).toString();
                temp3 << record.value(2).toString();
            }
        }

        ui->companyPage_displayListCompanyName->addItems(temp1);
        ui->companyPage_displayListInterestLevel->addItems(temp2);
        ui->companyPage_displayListKeyCustomer->addItems(temp3);
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

    ui->companyPage_searchBar->clear();
    ui->companyPage_displayListCompanyName->clear();
    ui->companyPage_displayListInterestLevel->clear();
    ui->companyPage_displayListKeyCustomer->clear();

    ui->companyPage_displayListCompanyName->addItems(temp1);
    ui->companyPage_displayListInterestLevel->addItems(temp2);
    ui->companyPage_displayListKeyCustomer->addItems(temp3);
}

void adminWindow::on_adminWindow_refreshButton_clicked()
{
    refreshWindow();
}

void adminWindow::addCompany()
{
    temp.displayAdd();
    temp.show();
}

void adminWindow::updateDB()
{
    QSqlQuery query;
    QStringList temp1;
    QSqlRecord record;
    query.prepare("SELECT * FROM iRobotsPamphlet WHERE CompanyName = :c;");
    query.bindValue(":c", selectedCompany);

    if(!query.exec())
        qDebug() << query.lastError();

    while(query.next())
    {
        record = query.record();
        tempCustomer.companyName = record.value(0).toString();
        tempCustomer.streetName = record.value(1).toString();
        tempCustomer.cityStateZip = record.value(2).toString();
        tempCustomer.websiteName = record.value(3).toString();
        tempCustomer.interestLevel = record.value(4).toString();
        tempCustomer.keyCustomer = record.value(5).toString();
    }

    temp.setSelectedCompany(selectedCompany, tempCustomer);
    temp.displayEdit();
    temp.show();
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
