#ifndef ADMINOPTION_H
#define ADMINOPTION_H

#include <QDialog>
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
private:
    Ui::adminOption *ui;
    adminWindow *admin = new adminWindow();
    emailWidget *email = new emailWidget();
};

#endif // ADMINOPTION_H
