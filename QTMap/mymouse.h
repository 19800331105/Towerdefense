#ifndef MYMOUSE_H
#define MYMOUSE_H
#include <QMouseEvent>

class Mymouse
        //自定义的点类，为什么要自定义？一言难尽呐
{
public:
    Mymouse();
    Mymouse(int x, int y);
    Mymouse(const Mymouse& p);
    Mymouse(QMouseEvent* e);

    void setQMouseEvent(QMouseEvent* e);
    void setX(int x){this->_x = x;}
    void setY(int y){this->_y = y;}
    int x()const{return this->_x;}
    int y()const{return this->_y;}

private:
    int _x;
    int _y;
};

#endif // MYMOUSE_H
