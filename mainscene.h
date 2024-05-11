#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainScene; }
QT_END_NAMESPACE

class MainScene : public QWidget
{
    Q_OBJECT


    //初始化游戏场景
    void initialScene();


public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();

private:
    Ui::MainScene *ui;
};
#endif // MAINSCENE_H
