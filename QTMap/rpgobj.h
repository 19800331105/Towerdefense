#ifndef RPGOBJ_H
#define RPGOBJ_H
#include <QMediaPlayer>
#include <QImage>

#include <string>
#include <icon.h>
#include <map>

#include "mymouse.h"
#include <QPainter>
#include <QPixmap>
#include <QMouseEvent>

using namespace std;
class RPGObj
{
public:
    RPGObj(){}

    void initObj(string type);
    void show(QPainter * painter);
    Mymouse getPointat(){return pointat;}
  //  int getpointat_x  const{return this->pointat.x();};
   // int getpointat_y  const{return this->pointat.y();};
    void setPosX(int x){this->_pos_x=x;}
    void setPosY(int y){this->_pos_y=y;}

    int getPosX() const{return this->_pos_x;}
    int getPosY() const{return this->_pos_y;}
    int getHeight() const{return this->_icon.getHeight();}
    int getWidth() const{return this->_icon.getWidth();}

    bool canCover() const{return this->_coverable;}
    bool canEat() const{return this->_eatable;}

    int getNextX(int direction);
    int getNextY(int direction);

    virtual void onErase();

    string getObjType() const{return this->_icon.getTypeName();}//返回类名

protected:
    Mymouse pointat;
    //所有坐标，单位均为游戏中的格
    QPixmap * tupian;
    QImage _pic;
    int _pos_x, _pos_y;//该物体在游戏中当前位置（左上角坐标）
    ICON _icon;//可以从ICON中获取对象的素材，尺寸等信息
    bool _coverable;
    bool _eatable;
};

#endif // RPGOBJ_H
