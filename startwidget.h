<<<<<<< HEAD
#ifndef STARTWIDGET_H
#define STARTWIDGET_H
#include<introduce.h>
#include <QWidget>

namespace Ui {
class StartWidget;
}

class StartWidget : public QWidget
{
    Q_OBJECT

public:
Introduce * intro;
 void paintEvent(QPaintEvent *event);

public:
    explicit StartWidget(QWidget *parent = nullptr);
    ~StartWidget();

signals:
    //开始界面的信号
    void start();

    //添加一个开始游戏的信号
    void startGame();


private:
    Ui::StartWidget *ui;
};

#endif // STARTWIDGET_H
=======
#ifndef STARTWIDGET_H
#define STARTWIDGET_H
#include<introduce.h>
#include <QWidget>

namespace Ui {
class StartWidget;
}

class StartWidget : public QWidget
{
    Q_OBJECT

public:
Introduce * intro;
 void paintEvent(QPaintEvent *event);

public:
    explicit StartWidget(QWidget *parent = nullptr);
    ~StartWidget();

signals:
    //开始界面的信号
    void start();

    //添加一个开始游戏的信号
    void startGame();


private:
    Ui::StartWidget *ui;
};

#endif // STARTWIDGET_H
>>>>>>> 5be61a101e46b25d788dc8f017f9d2d89c294fb1
