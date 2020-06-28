#include "plant.h"
#include <QPixmap>

Plant::Plant(QString name, bool isInstanlized)
{
    this->type = name;
    if(!isInstanlized){
<<<<<<< HEAD
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

=======
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
>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883
           }
}
}

Plant::~Plant(){
    delete icon;
}


<<<<<<< HEAD

=======
>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883
