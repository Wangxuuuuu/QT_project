#include "introduce.h"
#include "ui_introduce.h"

Introduce::Introduce(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Introduce)
{
    ui->setupUi(this);
}

Introduce::~Introduce()
{
    delete ui;
}
