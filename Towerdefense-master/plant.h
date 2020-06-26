#ifndef PLANT_H
#define PLANT_H
//#include "gameobject.h"
//#include "enemy.h"
#include <QPainter>
#include <vector>
#include <QMouseEvent>
#include <QVector>
#include <QString>
#include <string.h>
#include "rpgobj.h"


class Plant: public RPGObj
{
public:
    explicit Plant(QString name, bool isInstanlized);//感觉后面的参数用不上，可以优化
    ~Plant();
    QString getType(){return type;}
    int getPrice(){return price;}

private:
    QString type;
    int price;
};



#endif // PLANT_H
