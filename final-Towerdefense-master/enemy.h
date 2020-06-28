#ifndef ENEMY_H
#define ENEMY_H

#include "rpgobj.h"

class Enemy: public RPGObj
{
public:

    Enemy(QString name);
    ~Enemy(){}
    int get_v()const{return v;}
    float get_left()const{return left;}
    int getLife(){return life;}
    void setLife(int l){life = l;}

protected:
    int life;
    int totalife;
    int v;
    double left;

};

#endif // ENEMY_H
