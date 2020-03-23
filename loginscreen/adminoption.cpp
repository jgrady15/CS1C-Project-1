#include "adminoption.h"
#include "ui_adminoption.h"

/**
 * @brief Constructor for adminOption
 * @param parent
 */
adminOption::adminOption(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminOption)
{
    ui->setupUi(this);
}

/**
 * @brief Destructor for adminOption
 */
adminOption::~adminOption()
{
    delete ui;
}

/**
 * @brief Function to activate the admin window for viewing, editing, deleting, etc. companies
 */
void adminOption::viewCustomerList() {
    admin->displayCompany();
    admin->show();
}

/**
 * @brief Function to send a pamphlet to a customer via email
 */
void adminOption::sendPamphlet() {
    email->show();
}

/**
 * @brief Function to activate the admin window for viewing, editing, deleting, etc. customers
 */
void adminOption::on_pushButton_3_clicked() {
    admin->displayCustomer();
    admin->show();
}
