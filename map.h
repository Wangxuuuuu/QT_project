#ifndef MAP_H
#define MAP_H
#include<QPixmap>

class Map
{
public:
    //构造函数
    Map();
    // 更新地图滚动后位置的函数
    void mapPosition();
public:
    //地图图片对象
    QPixmap map1;
    QPixmap map2;
    //地图y轴坐标
    int map1_position;
    int map2_position;
    //地图滚动速度
    int map_scroll_speed;

};

#endif // MAP_H
