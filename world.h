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
#include <plant.h>
#include "enemy.h"

class World:public QObject
{
public:
    World();
    ~World();
    void enemy_generator();
    void resetWorld(QString mapFile);
        //输入的文件中定义了初始状态下游戏世界有哪些对象，出生点在哪
    void show(QPainter * painter);
        //显示游戏世界所有对象
    void handlePlayerMove(int direction, int steps);
        //假定只有一个玩家

    void eraseObj(int x, int y);

    void _mouseMoveEvent(QMouseEvent* e);//处理鼠标移动的
    void _mousePressEvent(QMouseEvent* e);//处理鼠标点击的
    void _keyPressEvent(QKeyEvent* e);
    void _mouseReleseEvent(QMouseEvent* e);
    void sunshineadd(int a);
    Player * _player;
    int frequency;//控制不同场景下敌人生成的频率
    QString mapname,mapname1;
    vector<RPGObj *> _objs;

private:
    QVector<Plant*> Plants;//防御塔列表（已激活）
    QVector<Enemy*> _enemies;//敌人容器
    QVector<Plant*> displayMenuOfTowers;//防御塔菜单（未激活的塔，不参与游戏）
    QVector<Plant*> draged;//被鼠标拖动的塔
    QPixmap* background;

    bool manualMod;//可以手动控制
    MyMouse mouseMoveEventPoint;
    bool mouseLeftPressed;
};

#endif // WORLD_H
