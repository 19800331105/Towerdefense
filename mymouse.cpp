#include "mymouse.h"

MyMouse::MyMouse()
{
    _x = 0, _y = 0;
}
MyMouse::MyMouse(float x, float y){
    _x = x, _y = y;
}
MyMouse::MyMouse(const MyMouse& p){
    _x = p.x();
    _y = p.y();
}
MyMouse::MyMouse(QMouseEvent* e){
    _x = e->x();
    _y = e->y();
}
void MyMouse::setByMouseEvent(QMouseEvent *e){
    this->_x = e->x();
    this->_y = e->y();
}
