#include "helpmenu.h"
#include "ui_helpmenu.h"
#include <QMessageBox>

helpMenu::helpMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::helpMenu)
{
    ui->setupUi(this);
}

helpMenu::~helpMenu() {
    delete ui;
}

void helpMenu::adminHelp() {
    QMessageBox::information(this, "Admin Logon", "The admin logon button allows for those with access to login and send pamhplets to potential customers. Additionally, "
                                                  "those with admin capabilities are allowed to view the customer database, along with being able to edit, update, or delete"
                                                  "any information.", QMessageBox::Ok);
}

void helpMenu::contactHelp() {
    QMessageBox::information(this, "Contact Us", "The contact us button provides you with information on where to reach us should any concerns regarding our"
                                                 "products occur.", QMessageBox::Ok);
}

void helpMenu::pamphletHelp() {
    QMessageBox::information(this, "Pamphlet", "The pamphlet button allows you to view the product that we are delivering to you and the different options and packages"
                                               "that we offer. Additionally, we provide pricing and 3 baseline packages that we highly recommend!", QMessageBox::Ok);
}

void helpMenu::reviewHelp() {
    QMessageBox::information(this, "Review", "The customer testimonial button allows for the customer to both submit and view reviews provided by other customers. This allows for our"
                                             "customers to make more thoughtful decision on their purchase by referencing the experience of other customers!", QMessageBox::Ok);
}
