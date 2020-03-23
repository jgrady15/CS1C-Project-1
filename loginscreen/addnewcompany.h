#ifndef ADDNEWCOMPANY_H
#define ADDNEWCOMPANY_H

#include "header.h"
#include "sql_database.h"

namespace Ui {
class addNewCompany;
}

class addNewCompany : public QDialog
{
    Q_OBJECT

public:
    explicit addNewCompany(QWidget *parent = nullptr);
    void displayAdd();
    void displayEdit();
    void setSelectedCompany(QString selectedCompany, customerNode &set);
    ~addNewCompany();

private slots:
    void on_addNew_submitButton_clicked();

    void on_editCurrent_submitButton_clicked();

private:
    Ui::addNewCompany *ui;
    sql_database tempDb;
    QString currentCompany;
    customerNode temp;
};

#endif // ADDNEWCOMPANY_H
