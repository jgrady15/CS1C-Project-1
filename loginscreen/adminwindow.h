#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include "header.h"
#include "loginwindow.h"

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
    ~adminWindow();

private slots:
    void searchFor();
    void alphaNumOptions(int);
    void updateDB();
    void deleteInDB();
    void selectCompany(const QModelIndex &index);
    void on_adminWindow_refreshButton_clicked();

    void on_adminWindow_displayListCompanyName_activated(const QModelIndex &index);

private:
    QString selectedCompany;
    Ui::adminWindow *ui;
};

#endif // ADMINWINDOW_H
