#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class adminWindow;
}

class adminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminWindow(QWidget *parent = nullptr);
    ~adminWindow();
private slots:
    void searchFor();
    void alphaNumOptions(int);
    void updateDB();
    void deleteInDB();
private:
    Ui::adminWindow *ui;
};

#endif // ADMINWINDOW_H
