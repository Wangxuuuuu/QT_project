#ifndef BULLET_H
#define BULLET_H
#include<QPixmap>

class Bullet
{
public:
    Bullet();
    //添加更新子弹坐标位置的函数
    void updatePosition();
public:
    //图标
    QPixmap bullet_icon;
    //坐标
    int bullet_x;
    int bullet_y;
    //子弹移动速度
    int bullet_speed;
    //子弹状态
    bool bullet_free;
    //子弹矩形边框
    QRect bullet_rect;

};

#endif // BULLET_H
