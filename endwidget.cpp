#include "endwidget.h"
#include "ui_endwidget.h"
#include<QPainter>
EndWidget::EndWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EndWidget)
{
    ui->setupUi(this);
    setFixedSize(960,540);
    connect(ui->btn_close,&QPushButton::clicked,[=](){
        this->close();
    });
}
void EndWidget::paintEvent(QPaintEvent *){
    QPainter painter(this);
    painter.drawPixmap(0,0,960,540,QPixmap(":/resources/bingbing6.jpg"));

}
EndWidget::~EndWidget()
{
    delete ui;
}
