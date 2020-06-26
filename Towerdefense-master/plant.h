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
    explicit Plant(QString name, bool isInstanlized);//�о�����Ĳ����ò��ϣ������Ż�
    ~Plant();
    QString getType(){return type;}
    int getPrice(){return price;}

private:
    QString type;
    int price;
};



#endif // PLANT_H
