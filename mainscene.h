<<<<<<< HEAD
#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include <QTimer>
#include <QPaintEvent>
#include <map.h>
#include <heroplane.h>
#include <bullet.h>
#include <enemyplane.h>
#include <startwidget.h>
#include <endwidget.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainScene; }
QT_END_NAMESPACE

class MainScene : public QWidget
{
public:
    Q_OBJECT

    //初始化游戏场景
    void initialScene();
    //添加定时器
    QTimer * timer1=new QTimer(this);
    //添加启动游戏函数，用于启动定时器
    void Playgame();
    //添加更新坐标函数
    void updateposition();
    //添加绘图事件
    void paintEvent(QPaintEvent *event);
    //添加鼠标移动事件
    void mouseMoveEvent(QMouseEvent *event);
    //添加敌机出场的成员函数
    void EnemyToScene();
    //添加碰撞检测函数
    void collisiondetection();




public:
    //地图对象
    Map map;
    //飞机对象
    HeroPlane hero;
    //添加敌机数组
    EnemyPlane enemys[ENEMY_NUM];
    //敌机出场间隔记录
    int enemy_recorder;
    //登录界面对象
    StartWidget * startwidget;
    //结束界面对象
    EndWidget * endwidget;








public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();

private:
    Ui::MainScene *ui;
};
#endif // MAINSCENE_H
=======
#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include <QTimer>
#include <QPaintEvent>
#include <map.h>
#include <heroplane.h>
#include <bullet.h>
#include <enemyplane.h>
#include <startwidget.h>
#include <endwidget.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainScene; }
QT_END_NAMESPACE

class MainScene : public QWidget
{
public:
    Q_OBJECT

    //初始化游戏场景
    void initialScene();
    //添加定时器
    QTimer * timer1=new QTimer(this);
    //添加启动游戏函数，用于启动定时器
    void Playgame();
    //添加更新坐标函数
    void updateposition();
    //添加绘图事件
    void paintEvent(QPaintEvent *event);
    //添加鼠标移动事件
    void mouseMoveEvent(QMouseEvent *event);
    //添加敌机出场的成员函数
    void EnemyToScene();
    //添加碰撞检测函数
    void collisiondetection();




public:
    //地图对象
    Map map;
    //飞机对象
    HeroPlane hero;
    //添加敌机数组
    EnemyPlane enemys[ENEMY_NUM];
    //敌机出场间隔记录
    int enemy_recorder;
    //登录界面对象
    StartWidget * startwidget;
    //结束界面对象
    EndWidget * endwidget;








public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();

private:
    Ui::MainScene *ui;
};
#endif // MAINSCENE_H
>>>>>>> 5be61a101e46b25d788dc8f017f9d2d89c294fb1
