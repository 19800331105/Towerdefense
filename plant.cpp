#include "plant.h"
#include <QPixmap>
#include <QtDebug>

Plant::Plant(QString name, bool isInstanlized)
{
    this->type = name;
    if(!isInstanlized){
        if(name.compare(":/pics/wandou.png") == 0){

            icon->load(":/pics/wandou.png");
            width = 100;
            height = 140;

        }
        else if(name.compare("wandoudou") == 0)
        {

            icon->load(":/pics/wandoudou.png");
            width = 100;
            height = 140;
        }
       else{
           }
}
}

Plant::~Plant(){
    delete icon;
}

void Plant::show(QPainter *p){
    p->drawPixmap(50,70,width, height, *icon);
}
