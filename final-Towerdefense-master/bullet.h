#ifndef BULLET_H
#define BULLET_H
#include "rpgobj.h"
#include "plant.h"
#include "mymouse.h"
#include "enemy.h"


class Bullet: public RPGObj
{
public:
    Bullet(Plant* starter, Enemy* zombine);
    ~Bullet();
    int get_v()const{return v;}
    float get_direction_x()const{return direction_x;}
    float get_direction_y()const{return direction_y;}
    int getDamage(){return damage;}
    int getSlower(){return slower;}
protected:
    Plant* starter;
    int damage;
    int slower;
    int v;
    float direction_x;
    float direction_y;

};

#endif // BULLET_H
