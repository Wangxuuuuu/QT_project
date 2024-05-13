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

    bullet_rect.moveTo(bullet_x,bullet_y);//这一步千万不要忘了！！！！！！！！！（不然就会发生“绘画跟着移动但是子弹Rect的判定坐标位置没有跟着移动”的大BUG!!!）

    if(bullet_y<=-bullet_rect.height()){
        bullet_free = true;

    }
}
