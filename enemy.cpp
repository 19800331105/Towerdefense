#include "enemy.h"

void Enemy::move(int direction, int steps)
{
    //初期敌人都是直线向右移动的
    switch (direction){
        case 4:
           // this->_pos_x += steps;
            break;
    }
}
void Enemy::show(QPainter * painter){
    int gSize = ICON::GRID_SIZE;
    painter->drawImage(this->_pos_x*gSize,this->_pos_y*gSize,this->_pic);
}

Enemy::Enemy(QString name)
{
    if(name.compare("zombine1") == 0)
    {
        this->icon = new QPixmap;
        this->icon->load(":/pics/zombine1.png");
       }
    else if(name.compare("zombine2") == 0)
    {
        this->icon = new QPixmap;
        this->icon->load(":/pics/zombine2.png");
    }
    else if(name.compare("Enemy2") == 0)
    {
        this->icon = new QPixmap;
        this->icon->load(":/pics/zombine3.png");
    }
}
