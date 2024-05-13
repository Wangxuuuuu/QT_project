<<<<<<< HEAD
#ifndef ENDWIDGET_H
#define ENDWIDGET_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class EndWidget;
}

class EndWidget : public QWidget
{
    Q_OBJECT

    void paintEvent(QPaintEvent *);
public:
    explicit EndWidget(QWidget *parent = nullptr);
    ~EndWidget();

private:
    Ui::EndWidget *ui;
};


#endif // ENDWIDGET_H
=======
#ifndef ENDWIDGET_H
#define ENDWIDGET_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class EndWidget;
}

class EndWidget : public QWidget
{
    Q_OBJECT

    void paintEvent(QPaintEvent *);
public:
    explicit EndWidget(QWidget *parent = nullptr);
    ~EndWidget();

private:
    Ui::EndWidget *ui;
};


#endif // ENDWIDGET_H
>>>>>>> 5be61a101e46b25d788dc8f017f9d2d89c294fb1
