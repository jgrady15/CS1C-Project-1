#include "helpmenu.h"
#include "ui_helpmenu.h"
#include <QMessageBox>

/**
 * @brief Constructor for helpMenu
 * @param parent
 */
helpMenu::helpMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::helpMenu)
{
    ui->setupUi(this);
}

/**
 * @brief Destructor for helpMenu
 */
helpMenu::~helpMenu() {
    delete ui;
}

/**
 * @brief QMessageBox that tells you about the admin logon button
 */
void helpMenu::adminHelp() {
    QMessageBox::information(this, "Admin Logon", "The admin logon button allows for those with access to login and send pamhplets to potential customers. Additionally, "
                                                  "those with admin capabilities are allowed to view the customer database, along with being able to edit, update, or delete "
                                                  "any information.", QMessageBox::Ok);
}

/**
 * @brief QMessageBox that tells you about the contact us button
 */
void helpMenu::contactHelp() {
    QMessageBox::information(this, "Contact Us", "The contact us button provides you with information on where to reach us should any concerns regarding our "
                                                 "products occur.", QMessageBox::Ok);
}

/**
 * @brief QMessageBox that tells you about the pamphlet button
 */
void helpMenu::pamphletHelp() {
    QMessageBox::information(this, "Pamphlet", "The pamphlet button allows you to view the product that we are delivering to you and the different options and packages "
                                               "that we offer. Additionally, we provide pricing and 3 baseline packages that we highly recommend!", QMessageBox::Ok);
}

/**
 * @brief QMessageBox that tells you about the review button
 */
void helpMenu::reviewHelp() {
    QMessageBox::information(this, "Review", "The customer testimonial button allows for the customer to both submit and view reviews provided by other customers. This allows for our "
                                             "customers to make more thoughtful decision on their purchase by referencing the experience of other customers!", QMessageBox::Ok);
}
