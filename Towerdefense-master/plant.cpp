#include "plant.h"
#include <QPixmap>

Plant::Plant(QString name, bool isInstanlized)
{
    this->type = name;
    if(!isInstanlized){
        if(type.compare("wandou") == 0){
            icon->load(":/pics/wandou.png");
            width = 150;
            height = 100;

        }
        else if(type.compare("wandoudou") == 0)
        {
            icon->load(":/pics/wandoudou.png");
            width = 150;
            height = 100;
        }
       else{

           }
}
}

Plant::~Plant(){
    delete icon;
}



