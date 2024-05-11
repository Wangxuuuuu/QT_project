#include "mainscene.h"
#include "ui_mainscene.h"
#include "config.h"
MainScene::MainScene(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainScene)
{
    ui->setupUi(this);
    initialScene();
}

void MainScene::initialScene(){
    setFixedSize(Game_width,Game_height);
    setWindowTitle(Game_title);
    //setWindowIcon(QIcon());//暂留Icon

}
MainScene::~MainScene()
{
    delete ui;
}

