#include "bullet.h"
#include "config.h"
#include<QPixmap>
Bullet::Bullet()
{
    //初始化图标
    bullet_icon.load(BULLET_PATH);
    //坐标(这里的y坐标仍然指的是边框左上角的y坐标)
    bullet_x = Game_width*0.5 - bullet_icon.width()*0.5;
    bullet_y = Game_height;
    //子弹状态
    bullet_free = true;
    //子弹速度
    bullet_speed = BULLET_SPEED;
    //子弹边框
    bullet_rect.setWidth(bullet_icon.width());
    bullet_rect.setHeight(bullet_icon.height());
    bullet_rect.moveTo(bullet_x,bullet_y);

}
void Bullet::updatePosition(){
    if(bullet_free==true){
        return;
    }
    //子弹向上移动
    bullet_y -=bullet_speed;
    if(bullet_y<=-bullet_rect.height()){
        bullet_free = true;

    }
}
