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
