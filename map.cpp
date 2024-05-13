#include "map.h"
#include "config.h"
Map::Map()//在.cpp中实现构造函数
{
    //先初始化加载地图图片
  map1.load(MAP_PATH);
  map2.load(MAP_PATH);
  //再确定初始地图位置
  map1_position = -Game_height;
  map2_position = 0;
  //再确定地图滚动速度
  map_scroll_speed = MAP_SCROLL_SPEED;

}
void Map::mapPosition(){
    //更新图片1滚动后的位置
    map1_position += MAP_SCROLL_SPEED;
    if(map1_position>=0){
        map1_position = -Game_height;
    }
    //更新图片2滚动后的位置
    map2_position +=MAP_SCROLL_SPEED;
    if(map2_position>=Game_height){
        map2_position=0;
    }                                       //这里我们的“图片坐标位置”指的是图片上边沿的Y坐标位置

}
