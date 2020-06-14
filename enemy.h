#ifndef ENEMY_H
#define ENEMY_H

#include <QPainter>
#include "rpgobj.h"

class Enemy: public RPGObj
{
public:
    Enemy(QString name);
    ~Enemy(){}
    void move(int direction, int steps=1);
        //direction =1,2,3,4 for ????б┴ио??
    void show(QPainter * painter);

protected:
    int life;
    int totalife;
};

#endif // ENEMY_H
