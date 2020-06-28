#ifndef WORLD_H
#define WORLD_H
#include "fruit.h"
#include "rpgobj.h"
#include <vector>
#include <string>
#include <QPainter>
#include "player.h"
#include <QPixmap>
#include <QMouseEvent>
#include "plant.h"
#include "enemy.h"

class World:public QObject
{
public:
    World();
    ~World();
    void enemycreator();
    void resetWorld(QString mapFile);
        //输入的文件中定义了初始状态下游戏世界有哪些对象，出生点在哪
    void show(QPainter * painter);
        //显示游戏世界所有对象
    void handlePlayerMove(int direction, int steps);
        //假定只有一个玩家

    void eraseObj(int x, int y);
<<<<<<< HEAD
   // void _keyPressEvent(QKeyEvent* e);

=======

    void _mouseMoveEvent(QMouseEvent* e);//处理鼠标移动的
    void _mousePressEvent(QMouseEvent* e);//处理鼠标点击的
    void _keyPressEvent(QKeyEvent* e);
    void _mouseReleseEvent(QMouseEvent* e);
>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883
    void sunshineadd(int a);
    void movement();//敌人移动
    Player * _player;
    int frequency=6;//敌人生成频率(后期可能不同关卡的僵尸产生速度不一样)
    QString mapname;
    vector<RPGObj *> _objs;
<<<<<<< HEAD
    QVector<Plant*> final_plant;//最后种下的豌豆射手

private:

    QVector<Enemy*> _enemies;//敌人容器
    QVector<Plant*> _sample_plant;//用阳光买豌豆的样品
=======

private:
    QVector<Plant*> Plants;//防御塔列表（已激活）
    QVector<Enemy*> _enemies;//敌人容器
    QVector<Plant*> displayMenuOfTowers;//防御塔菜单（未激活的塔，不参与游戏）
    QVector<Plant*> draged;//被鼠标拖动的塔
>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883
    QPixmap* background;
    float stopwatch;


    bool manualMod;//可以手动控制
<<<<<<< HEAD
    MyMouse _MyMouse;
=======
    MyMouse mouseMoveEventPoint;
>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883
    bool mouseLeftPressed;
};

#endif // WORLD_H
