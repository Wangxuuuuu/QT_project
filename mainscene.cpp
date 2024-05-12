#include "mainscene.h"
#include "ui_mainscene.h"
#include "config.h"
#include "bullet.h"
#include "enemyplane.h"
#include <QIcon>
#include <QPainter>
MainScene::MainScene(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainScene)
{
    ui->setupUi(this);

    //在构造函数中调用初始化场景函数
    initialScene();
    //在构造函数中调用Playgame函数
    Playgame();
}

void MainScene::initialScene(){
    //设置主窗口大小和标题
    setFixedSize(Game_width,Game_height);
    setWindowTitle(Game_title);
    //设置图标
    setWindowIcon(QIcon(":/resources/bingbing12.jpg"));
    //敌机出场时间间隔初始化
    enemy_recorder = 0;

}
void MainScene::Playgame(){
    timer1->start(Game_interval);
    connect(timer1,&QTimer::timeout,[=](){
        //敌机出场
        EnemyToScene();
       //更新图片位置坐标
        updateposition();
       //重新绘制图片
        update();//paintevent类中特有的重新绘制函数,表示再次调用paintevent函数
    });
}
void MainScene::updateposition(){
    //更新地图坐标位置
    map.mapPosition();
    //发射子弹
    hero.shoot();
    //计算子弹坐标
    for(int i=0;i<BULLET_NUM;i++){
        //如果子弹状态为false,更新子弹位置
        if(!hero.bullets[i].bullet_free){
            hero.bullets[i].updatePosition();
        }
    }
    //更新敌机位置
    for(int i=0;i<ENEMY_NUM;i++){
        //如果敌机状态为false，更新敌机位置
        if(!enemys[i].enemy_free){
            enemys[i].updatePosition();
        }
    }

}
void MainScene::paintEvent(QPaintEvent *){
    //绘制地图图片
    QPainter painter(this);
    painter.drawPixmap(0,map.map1_position,Game_width,Game_height,map.map1);
    painter.drawPixmap(0,map.map2_position,Game_width,Game_height,map.map2);
   //绘制飞机图标
   painter.drawPixmap(hero.plane_X,hero.plane_Y,hero.plane_icon);
   //绘制子弹图标
   for(int i =0;i<BULLET_NUM;i++){
       if(!hero.bullets[i].bullet_free){
           painter.drawPixmap(hero.bullets[i].bullet_x,hero.bullets[i].bullet_y,hero.bullets[i].bullet_icon);
       }
   }
   //绘制敌机图标
   for(int i=0;i<ENEMY_NUM;i++){
       if(!enemys[i].enemy_free){
           painter.drawPixmap(enemys[i].enemy_X,enemys[i].enemy_Y,enemys[i].enemy_icon);
       }
   }

}
void MainScene::mouseMoveEvent(QMouseEvent *event){
    int x = event->x() - hero.plane_icon.width()*0.5;
    int y = event->y() - hero.plane_icon.height()*0.5;
    //边界检测
    if(x<=0){
        x=0;
    }
    if(x>=Game_width - hero.plane_icon.width()){
        x=Game_width - hero.plane_icon.width();
    }
    if(y<=0){
        y=0;
    }
    if(y>=Game_height - hero.plane_icon.height()){
        y=Game_height - hero.plane_icon.height();
    }
    hero.setPosition(x,y);
}
void MainScene::EnemyToScene(){
    enemy_recorder++;
    if(enemy_recorder<=ENEMY_INTERVAL){
        return;
    }
    //达到时间后重置
    enemy_recorder = 0;
    for(int i=0;i<ENEMY_NUM;i++){
        if(enemys[i].enemy_free){
            //出场后设为false
            enemys[i].enemy_free = false;
            //设置坐标
            enemys[i].enemy_X = rand() % (Game_width - enemys[i].enemy_icon.width());//创造随机数
            enemys[i].enemy_Y =0;     //这里的设置有待考虑，先暂留
            break;
        }
    }
}


MainScene::~MainScene()
{
    delete ui;
}

