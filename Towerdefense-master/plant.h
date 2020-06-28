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
<<<<<<< HEAD

=======
>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883
};



#endif // PLANT_H
