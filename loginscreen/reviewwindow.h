#ifndef REVIEWWINDOW_H
#define REVIEWWINDOW_H

#include <QMainWindow>
#include <QComboBox>

namespace Ui {
class reviewWindow;
}

class reviewWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit reviewWindow(QWidget *parent = nullptr);
    ~reviewWindow();
private slots:
    void makeAnon();
    void setProduct(int);
    void submitReview();
private:
    Ui::reviewWindow *ui;
};

#endif // REVIEWWINDOW_H
