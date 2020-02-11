#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

//Testing it out
namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = 0);
    ~SecDialog();

private:
    Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
