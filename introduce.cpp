<<<<<<< HEAD
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
=======
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
>>>>>>> 5be61a101e46b25d788dc8f017f9d2d89c294fb1
