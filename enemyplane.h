#ifndef ENEMYPLANE_H
#define ENEMYPLANE_H
#include<QPixmap>

class EnemyPlane
{
public:
    EnemyPlane();
    //更新坐标位置的函数
    void updatePosition();
public:
    //图标
    QPixmap enemy_icon;
    //位置
    int enemy_X;
    int enemy_Y;
    //敌机的边框检测
    QRect enemy_rect;
    //状态
    bool enemy_free;
    //速度
    int enemy_speed;


};

#endif // ENEMYPLANE_H
