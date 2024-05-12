#include "heroplane.h"
#include "config.h"
#include<QIcon>
HeroPlane::HeroPlane()
{
    //初始化设置飞机的图标
  plane_icon.load(PLANE_ICON);
  //初始化飞机的坐标位置(这里指的是图标左上角的坐标位置)
  plane_X = Game_width*0.5 - plane_icon.width()*0.5;
  plane_Y = Game_height - plane_icon.height();
  //初始化飞机的矩形边框
  plane_rect.setWidth(plane_icon.width());
  plane_rect.setHeight(plane_icon.height());
  plane_rect.moveTo(plane_X,plane_Y);
  //初始化子弹发射间隔
  fire_recorder = 0;
}
void HeroPlane::shoot(){
     //累加时间间隔记录变量
    fire_recorder++;
    //判断是否达到发射时间
    if(fire_recorder<=BULLET_INTERVAL){
        return;
    }
    //若到达发射时间，则重置发射时间fire_recorder
    fire_recorder = 0;
    //发射子弹
    for(int i=0;i<BULLET_NUM;i++){
        //如果是空闲的子弹进行发射
        if(bullets[i].bullet_free==true){
            //发射后将状态改为false
            bullets[i].bullet_free = false;
            //设置发射时的子弹坐标位置
            bullets[i].bullet_x = plane_X + plane_rect.width()*0.5 - 35;
            bullets[i].bullet_y = plane_Y - 70;//注意这里之所以减去10和25，是因为原来的位置坐标处在飞机hero.icon的内部，并不位于飞机的头部发射位置，所以要调整
            break;
        }
    }


}
void HeroPlane::setPosition(int x,int y){
    plane_X = x;
    plane_Y = y;
    plane_rect.moveTo(plane_X,plane_Y);
}
