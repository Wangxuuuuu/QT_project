#ifndef HEROPLANE_H
#define HEROPLANE_H
#include <QPixmap>
#include "bullet.h"
#include "config.h"

class HeroPlane
{
public:
    HeroPlane();
    //添加发射子弹的函数
    void shoot();
    //添加设置飞机位置的函数
    void setPosition(int x,int y);
public:
    //飞机图标
    QPixmap plane_icon;
    //飞机坐标
    int plane_X;
    int plane_Y;
    //飞机矩形边框
    QRect plane_rect;
    //飞机状态
    bool plane_free;
    //弹匣
    Bullet bullets[BULLET_NUM];
    //发射间隔记录
    int fire_recorder;
};

#endif // HEROPLANE_H
