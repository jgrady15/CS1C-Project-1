#ifndef EMAILWIDGET_H
#define EMAILWIDGET_H

#include "header.h"

namespace Ui {
class emailWidget;
}

class emailWidget : public QWidget
{
    Q_OBJECT

public:
    explicit emailWidget(QWidget *parent = nullptr);
    ~emailWidget();
private slots:
    void sendPamphlet();

private:
    Ui::emailWidget *ui;
};

#endif // EMAILWIDGET_H
