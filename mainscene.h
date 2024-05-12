#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include <QTimer>
#include <QPaintEvent>
#include <map.h>
#include <heroplane.h>
#include <bullet.h>
#include <enemyplane.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainScene; }
QT_END_NAMESPACE

class MainScene : public QWidget
{
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


    //地图对象
    Map map;
    //飞机对象
    HeroPlane hero;
    //添加敌机数组
    EnemyPlane enemys[ENEMY_NUM];
    //敌机出场间隔记录
    int enemy_recorder;







public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();

private:
    Ui::MainScene *ui;
};
#endif // MAINSCENE_H
