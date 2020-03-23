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
public:
    explicit orderWindow(QWidget *parent = nullptr);
    ~orderWindow();

private:
    Ui::orderWindow *ui;
};

#endif // ORDERWINDOW_H
