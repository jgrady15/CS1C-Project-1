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
    void setupPage();
    void refreshWindow();
    void displayCompany();
    void displayCustomer();
    ~adminWindow();

private slots:
    void searchFor();
    void alphaNumOptions(int);
    void updateDB();
    void deleteInDB();
    void selectCompany(const QModelIndex &index);
    void on_adminWindow_refreshButton_clicked();
    void addCompany();

    void on_companyPage_refreshButton_clicked();

private:
    QString selectedCompany;
    customerNode tempCustomer;
    addNewCompany temp;
    Ui::adminWindow *ui;
};

#endif // ADMINWINDOW_H
