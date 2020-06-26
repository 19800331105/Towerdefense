#include "mymouse.h"

Mymouse::Mymouse()
{
    _x = 0, _y = 0;
}
Mymouse::Mymouse(int x, int y){
    _x = x, _y = y;
}
Mymouse::Mymouse(const Mymouse& p){
    _x = p.x();
    _y = p.y();
}
Mymouse::Mymouse(QMouseEvent* e){
    _x = e->x();
    _y = e->y();
}
void Mymouse::setQMouseEvent(QMouseEvent *e){
    this->_x = e->x();
    this->_y = e->y();
}
