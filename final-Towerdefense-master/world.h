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
#include "bullet.h"


class World:public QObject
{
public:
    World();
    ~World();
    void enemycreator();
    void bulletcreator();
    void resetWorld(QString mapFile);
        //输入的文件中定义了初始状态下游戏世界有哪些对象，出生点在哪
    void clearworld();//赢了之后，清除所有物体
    void show(QPainter * painter);
        //显示游戏世界所有对象
   // void handlePlayerMove(int direction, int steps);
        //假定只有一个玩家

    void eraseObj();
    void Hurt();//实现对僵尸的伤害，消失子弹

    void sunshineadd(int a);
    void movement();//敌人移动
    Player * _player;
    int frequency = 6;//敌人生成频率(后期可能不同关卡的僵尸产生速度不一样)
    QString mapname;
    vector<RPGObj *> _objs;
    QVector<Plant*> final_plant;//最后种下的豌豆射手
    bool lose = 0;

private:
    QVector<Bullet*> _bullets;//子弹容器
    QVector<Enemy*> _enemies;//敌人容器
   // QVector<Plant*> _sample_plant;//用阳光买豌豆的样品
    QPixmap* background;
    float stopwatch;
    MyMouse _MyMouse;
};

#endif // WORLD_H
