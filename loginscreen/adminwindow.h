#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include "header.h"
#include "addnewcompany.h"

namespace Ui {
class adminWindow;
}

class adminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminWindow(QWidget *parent = nullptr);
    void setupPage(); // sets up current admin page
    void refreshWindow(); // refreshes admin page
    void displayCompany(); // displays admin page to edit/update/delete company info
    void displayCustomer(); // displays customer list page
    ~adminWindow();

private slots:
    void searchFor(); // Function that allows search bar/button to work
    void alphaNumOptions(int);
    void updateDB(); // Allows for updating database rows
    void deleteInDB(); // Allows for deleting database rows
    void selectCompany(const QModelIndex &index); // highlights company selected in display list
    void addCompany(); // creates an add company window
private:
    QString selectedCompany;
    customerNode tempCustomer;
    addNewCompany temp;
    Ui::adminWindow *ui;
};

#endif // ADMINWINDOW_H
