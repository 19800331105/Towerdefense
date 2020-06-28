#ifndef MYMOUSE_H
#define MYMOUSE_H

#include <QMouseEvent>

class MyMouse
{
public:
    MyMouse();
    MyMouse(float x, float y);
    MyMouse(const MyMouse& p);
    MyMouse(QMouseEvent* e);

    void setByMouseEvent(QMouseEvent* e);
    void setX(float x){this->_x = x;}
    void setY(float y){this->_y = y;}
    float x()const{return this->_x;}
    float y()const{return this->_y;}

private:
    float _x;
    float _y;
};


#endif // MYMOUSE_H
