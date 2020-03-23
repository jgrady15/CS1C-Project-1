#ifndef ADMINOPTION_H
#define ADMINOPTION_H

#include "header.h"
#include "adminwindow.h"
#include "emailwidget.h"
#include "pamphletinfo.h"

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
    void on_pushButton_3_clicked();
    void viewPamphletList();
    //void on_displayAdminWindow_clicked();

private:
    Ui::adminOption *ui;
    adminWindow *admin = new adminWindow();
    emailWidget *email = new emailWidget();
    pamphletInfo *pamphlet = new pamphletInfo;
};

#endif // ADMINOPTION_H
