<<<<<<< HEAD
#include "startwidget.h"
#include "ui_startwidget.h"
#include "config.h"
#include <QPainter>
StartWidget::StartWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartWidget)
{
    ui->setupUi(this);
    setFixedSize(512,768);
    connect(ui->btn_start,&QPushButton::clicked,[=](){
        //按下按钮，触发startwidget的对象的start()信号
      emit start();
      emit startGame();
      this->close();
    });
    connect(ui->btn_close,&QPushButton::clicked,[=](){
       this->close();
    });
    intro = new Introduce;
    connect(ui->btn_introduce,&QPushButton::clicked,[=](){
       intro->show();
    });

}
void StartWidget::paintEvent(QPaintEvent *){
    QPainter painter(this);
    painter.drawPixmap(0,0,Game_width,Game_height,QPixmap(":/resources/bingbing7.jpg"));
}
StartWidget::~StartWidget()
{
    delete ui;
}
=======
#include "startwidget.h"
#include "ui_startwidget.h"
#include "config.h"
#include <QPainter>
StartWidget::StartWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartWidget)
{
    ui->setupUi(this);
    setFixedSize(512,768);
    connect(ui->btn_start,&QPushButton::clicked,[=](){
        //按下按钮，触发startwidget的对象的start()信号
      emit start();
      emit startGame();
      this->close();
    });
    connect(ui->btn_close,&QPushButton::clicked,[=](){
       this->close();
    });
    intro = new Introduce;
    connect(ui->btn_introduce,&QPushButton::clicked,[=](){
       intro->show();
    });

}
void StartWidget::paintEvent(QPaintEvent *){
    QPainter painter(this);
    painter.drawPixmap(0,0,Game_width,Game_height,QPixmap(":/resources/bingbing7.jpg"));
}
StartWidget::~StartWidget()
{
    delete ui;
}
>>>>>>> 5be61a101e46b25d788dc8f017f9d2d89c294fb1
