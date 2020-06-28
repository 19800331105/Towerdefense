#ifndef RPGOBJ_H
#define RPGOBJ_H
#include <QMediaPlayer>
#include <QImage>
#include <QPainter>
#include <string>
#include <icon.h>
#include <map>
#include <mymouse.h>
using namespace std;

class RPGObj
{
public:
    explicit RPGObj();
    ~RPGObj();
  //  RPGObj(){}

    void initObj(string type);
    void show(QPainter * painter);

    void setPosX(int x){this->_pos_x=x;}
    void setPosY(int y){this->_pos_y=y;}

    int getPosX() const{return this->_pos_x;}
    int getPosY() const{return this->_pos_y;}
    int getHeight() const{return this->height;}
    int getWidth() const{return this->width;}

    bool canCover() const{return this->_coverable;}
    bool canEat() const{return this->_eatable;}

    int getNextX(int direction);
    int getNextY(int direction);

    virtual void onErase();

  //  string getObjType() const{return this->_icon.getTypeName();}//返回类名

    void setRPGobj(float x, float y);//设定中心坐标
    MyMouse getPosition(){return position;}
    bool is_in_it(MyMouse pointer);
    QString getType(){return type;}

protected:
    //所有坐标，单位均为游戏中的格

    QImage _pic;
    int _pos_x, _pos_y;//该物体在游戏中当前位置（左上角坐标）
    ICON _icon;//可以从ICON中获取对象的素材，尺寸等信息
    bool _coverable;
    bool _eatable;
    MyMouse position;
    QPixmap* icon;
    int width, height;
    QString type;
};

#endif // RPGOBJ_H
