#include "adminoption.h"
#include "ui_adminoption.h"

adminOption::adminOption(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminOption)
{
    ui->setupUi(this);
}

adminOption::~adminOption()
{
    delete ui;
}

void adminOption::viewCustomerList() {
    admin->displayCompany();
    admin->show();
}

void adminOption::sendPamphlet() {
    email->show();
}

void adminOption::on_pushButton_3_clicked() {
    admin->displayCustomer();
    admin->show();
}

void adminOption::viewPamphletList() {
    pamphlet->show();
}
