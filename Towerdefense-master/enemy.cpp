#include "enemy.h"

Enemy::Enemy(QString name)
{
    if(name.compare("zombine") == 0)
    {
        this->icon = new QPixmap;
        this->icon->load(":/pics/zombine.png");
        this->width=100;
        this->height=110;
        left = -1;
        this->v = 25;
    }
    else if(name.compare("zombine1") == 0)
    {
        this->icon = new QPixmap;
        this->icon->load(":/pics/zombine1.png");
        this->width=180;
        this->height=130;
        left = -1;
        this->v = 120;
    }
    else if(name.compare("zombine2") == 0)
    {
        this->icon = new QPixmap;
        this->icon->load(":/pics/zombine2.png");
        this->width=180;
        this->height=130;
        left = -1;
        this->v = 50;
    }
    else if(name.compare("zombine3") == 0)
    {
        this->icon = new QPixmap;
        this->icon->load(":/pics/zombine3.png");
        this->width=90;
        this->height=132;
        left = -1;
        this->v = 50;
    }
}
