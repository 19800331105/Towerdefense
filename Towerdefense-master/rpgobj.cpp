#include "rpgobj.h"
#include <iostream>
#include <math.h>

RPGObj::RPGObj(): icon()
{
    icon = new QPixmap;
    icon->load(":/pictures/tower_test.png");

    width = 100;
    height = 100;
}
RPGObj::~RPGObj(){
    //delete icon;
}
void RPGObj::setRPGobj(float x, float y)
{
    position.setX(x);
    position.setY(y);
}
void RPGObj::show(QPainter* p){
    //将中心坐标转换为左上角坐标
    p->drawPixmap(this->position.x()-width/2, this->position.y()-height/2, width, height, *icon);
}
<<<<<<< HEAD
=======
bool RPGObj::isMouseEventInIt(QMouseEvent *e){
    if(abs(e->x()-position.x()) < width/2 && abs(e->y()-position.y()) < height/2){
        return true;
    }else{return false;}
}
bool RPGObj::isMyPointInIt(MyMouse p){
    if(abs(p.x()-position.x()) < width/2 && abs(p.y()-position.y()) < height/2){
        return true;
    }else{return false;}
}





>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883

void RPGObj::initObj(string type)
{
    //TODO 所支持的对象类型应定义为枚举
    if (type.compare("player")==0){
        this->_coverable = false;
        this->_eatable = false;
    }
    else if (type.compare("stone")==0){
        this->_coverable = false;
        this->_eatable = false;
    }
    else if (type.compare("fruit")==0){
        this->_coverable = false;
        this->_eatable = true;
    }
    else{
        //TODO 应由专门的错误日志文件记录
        cout<<"invalid ICON type."<<endl;
        return;
    }

    this->_icon = ICON::findICON(type);
    QImage all;

    all.load(":/pics/TileB.png");
    this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
}

/*
void RPGObj::show(QPainter * pa){
    int gSize = ICON::GRID_SIZE;
    pa->drawImage(this->_pos_x*gSize,this->_pos_y*gSize,this->_pic);
}
*/
int RPGObj::getNextX(int direction){
    switch (direction){
        case 1:
            return this->_pos_x;
        case 2:
           return this->_pos_x;
        case 3:
           return this->_pos_x-1;
        case 4:
           return this->_pos_x+1;
    }
}

int RPGObj::getNextY(int direction){
    switch (direction){
        case 1:
            return this->_pos_y - 1;
        case 2:
           return this->_pos_y + 1;
        case 3:
           return this->_pos_y;
        case 4:
           return this->_pos_y;
    }
}

void RPGObj::onErase(){
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/2953.mp3"));
    player->setVolume(30);
    player->play();
}

