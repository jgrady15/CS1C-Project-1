#ifndef ORDERWINDOW_H
#define ORDERWINDOW_H

#include <QMainWindow>

namespace Ui {
class orderWindow;
}

class orderWindow : public QMainWindow
{
    Q_OBJECT
private slots:
    void setProduct(int);
    void on_pushButton_clicked();



    void on_orderButton_clicked();

public:
    explicit orderWindow(QWidget *parent = nullptr);
    ~orderWindow();

private:
    Ui::orderWindow *ui;
};

#endif // ORDERWINDOW_H
