#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private:
    Ui::SecDialog *ui;
public slots:
    //void sendPampletList();
    //void editCustomerList();
    //void viewCustomerList();
};

#endif // SECDIALOG_H
