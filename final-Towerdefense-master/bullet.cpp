#include "bullet.h"
#include <QPixmap>
#include <math.h>

Bullet::Bullet(Plant* starter, Enemy* zombine)
{
    this->starter = starter;
    if((starter->getType()).compare("wandou") == 0){
        this->damage = 20;
        this->icon = new QPixmap;
        this->icon->load(":/pics/bullet.png");
        this->width = 35;
        this->height = 30;
        this->v = 120;

    }
    else if((starter->getType()).compare("wandoudou") == 0){
        this->damage = 20;
        this->icon = new QPixmap;
        icon->load(":/pics/bullet.png");
        this->width = 35;
        this->height = 30;
        this->v = 120;
    }

    float dis = pow(starter->getPosition().x()-zombine->getPosition().x(),2);
    float x = zombine->getPosition().x()-starter->getPosition().x();
    float y = zombine->getPosition().y()-starter->getPosition().y();
    direction_x = 1;
    //direction_y = (y/dis);
    this->position.setX(starter->getPosition().x()+ direction_x * starter->getWidth()/2);
    this->position.setY(starter->getPosition().y()+ direction_y * starter->getWidth()/2);
    MyMouse direction(direction_x, direction_y);
}

Bullet::~Bullet(){
    delete icon;
}
