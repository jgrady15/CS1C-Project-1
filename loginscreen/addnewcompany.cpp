#include "addnewcompany.h"
#include "ui_addnewcompany.h"

addNewCompany::addNewCompany(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewCompany)
{
    ui->setupUi(this);

    QStringList interest, key;
    interest << "very interested" << "somewhat interested" << "not interested" << "never call again";
    key << "key" << "nice to have";

    ui->addNew_interestLevelComboBox->addItems(interest);
    ui->addNew_keyCustomerComboBox->addItems(key);

    ui->editCurrent_interestLevelComboBox->addItems(interest);
    ui->editCurrent_keyCustomerComboBox->addItems(key);
}

void addNewCompany::displayAdd()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void addNewCompany::setSelectedCompany(QString selectedCompany, customerNode &set)
{
    ui->editCurrent_currentCompany->setText(selectedCompany);
    ui->editCurrent_companyName->setText(set.companyName);
    ui->editCurrent_streetName->setText(set.streetName);
    ui->editCurrent_cityStateZip->setText(set.cityStateZip);
    ui->editCurrent_websiteName->setText(set.websiteName);
    ui->editCurrent_interestLevelComboBox->setCurrentText(set.interestLevel);
    ui->editCurrent_keyCustomerComboBox->setCurrentText(set.keyCustomer);
}

void addNewCompany::displayEdit()
{
    ui->stackedWidget->setCurrentIndex(1);
}

addNewCompany::~addNewCompany()
{
    delete ui;
}

void addNewCompany::on_addNew_submitButton_clicked()
{
    temp.companyName = ui->addNew_companyName->text();
    temp.streetName = ui->addNew_streetName->text();
    temp.cityStateZip = ui->addNew_cityStateZip->text();
    temp.websiteName = ui->addNew_websiteName->text();
    temp.interestLevel = ui->addNew_interestLevelComboBox->currentText();
    temp.keyCustomer = ui->addNew_keyCustomerComboBox->currentText();

    tempDb.addCustomer(temp);
    this->close();
}

void addNewCompany::on_editCurrent_submitButton_clicked()
{
    QSqlQuery query;
    query.prepare("UPDATE iRobotsPamphlet "
                  "SET CompanyName = :cn, "
                  "    StreetName = :sn, "
                  "    CityStateZip = :csz, "
                  "    WebsiteName = :wn, "
                  "    InterestLevel = :in, "
                  "    KeyCustomer = :kc "
                  "WHERE CompanyName = :c;");

    query.bindValue(":c", ui->editCurrent_currentCompany->text());
    query.bindValue(":cn", ui->editCurrent_companyName->text());
    query.bindValue(":sn", ui->editCurrent_streetName->text());
    query.bindValue(":csz", ui->editCurrent_cityStateZip->text());
    query.bindValue(":wn", ui->editCurrent_websiteName->text());
    query.bindValue(":in", ui->editCurrent_interestLevelComboBox->currentText());
    query.bindValue(":kc", ui->editCurrent_keyCustomerComboBox->currentText());

    if(!query.exec())
        qDebug() << query.lastError();

    this->close();
}
