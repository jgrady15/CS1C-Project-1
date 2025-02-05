#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include "adminwindow.h"
#include "emailwidget.h"

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_editList_pushButton_clicked();

    void on_snedPamphlet_pushButton_clicked();

private:
    Ui::SecDialog *ui;
    adminWindow *admin = new adminWindow();
    emailWidget *email = new emailWidget();
};

#endif // SECDIALOG_H
