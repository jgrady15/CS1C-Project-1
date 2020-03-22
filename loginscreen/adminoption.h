#ifndef ADMINOPTION_H
#define ADMINOPTION_H

#include "header.h"
#include "adminwindow.h"
#include "emailwidget.h"

namespace Ui {
class adminOption;
}

class adminOption : public QDialog
{
    Q_OBJECT

public:
    explicit adminOption(QWidget *parent = nullptr);
    ~adminOption();
private slots:
    void sendPamphlet();
    void viewCustomerList();
    //void on_pushButton_clicked();
    //void on_displayAdminWindow_clicked();

private:
    Ui::adminOption *ui;
    adminWindow *admin = new adminWindow();
    emailWidget *email = new emailWidget();
};

#endif // ADMINOPTION_H
