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
    admin->show();
}

void adminOption::sendPamphlet() {
    email->show();
}
