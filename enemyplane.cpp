#include "enemyplane.h"
#include "config.h"
EnemyPlane::EnemyPlane()
{
   //图标
    enemy_icon.load(ENEMY_ICON);
    //坐标位置(这里指的是左下角的坐标位置)
    enemy_X = 0;
    enemy_Y = 0;
    //边框
    enemy_rect.setWidth(enemy_icon.width());
    enemy_rect.setHeight(enemy_icon.height());
    enemy_rect.moveTo(enemy_X,enemy_Y);
    //状态
    enemy_free = true;
    //速度
    enemy_speed = ENEMY_SPEED;

}
void EnemyPlane::updatePosition(){
    //空闲状态不计算坐标
    if(enemy_free==true){
        return;
    }
   enemy_Y+=enemy_speed;
   enemy_rect.moveTo(enemy_X,enemy_Y);

   if(enemy_Y>=Game_height + enemy_icon.height() ){
       enemy_free = true;
   }

}
