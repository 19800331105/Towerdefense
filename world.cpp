#include "world.h"
#include "icon.h"
#include "rpgobj.h"
#include "player.h"
#include <QMediaPlayer>
#include<iostream>
#include <QPainter>
#include <QMessageBox>
#include <QApplication>
#include "enemy.h"
using namespace std;

World::~World(){
    delete this->_player;
}
World::World()
{
    background = new QPixmap;
    background->load(":/pics/startpage.png");
    mapname=":/pics/startpage.png";
    this->_player = new Player;
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/hdl.mp3"));
    player->setVolume(30);
    player->play();
}

void World::resetWorld(QString mapFile){
    mapname=mapFile;
    delete background;
    background=new QPixmap;
    background->load(mapname);
    Plant* displayedTower = new Plant(":/pics/wandou.png", false);
    displayedTower->setRPGobj(400, 50);
    displayMenuOfTowers.push_back(displayedTower);

    displayedTower = new Plant(":/pics/wandoudou.png", false);
    displayedTower->setRPGobj(600, 50);
    displayMenuOfTowers.push_back(displayedTower);
}

void World::enemy_generator()
{
    int b;
    Enemy *tmp;
    b=qrand()%5;//设置一次生成的敌人个数,不超过5
    for(int i=0;i<b;i++)
    {
        if(i%3==0)
        {
          *tmp=Enemy("zombine1");
        }
        else if(i%3==1)
        {
           *tmp=Enemy("zombine2");
        }
        else if(i%3==2)
        {
           *tmp=Enemy("zombine3");
        }
        tmp->setPosX(0);
        tmp->setPosY(b+10*i);
        this->_enemies.push_back(tmp);
    }
}

/*
void World::initWorld(string mapFile){
    //TODO 下面的内容应该改为从地图文件装载
    background = new QPixmap;
    background->load(":/pics/startmian.png");
    mapFile=":/pics/startmian.png";

    //player 5 5
    this->_player->initObj("player");
    this->_player->setPosX(10);
    this->_player->setPosY(10);

    RPGObj *p1 = new RPGObj;
    p1->initObj("stone");
    p1->setPosX(4);
    p1->setPosY(3);

    RPGObj *p2 = new RPGObj;
    p2->initObj("stone");
    p2->setPosX(6);
    p2->setPosY(5);

    RPGObj *p3 = new Fruit;
    p3->initObj("fruit");
    p3->setPosX(6);
    p3->setPosY(8);

    this->_objs.push_back(p1);
    this->_objs.push_back(p2);
    this->_objs.push_back(p3);
}
*/


void World::show(QPainter * painter){
    int n = this->_objs.size();
    for (int i=0;i<n;i++){
        this->_objs[i]->show(painter);
    }
    this->_player->show(painter);
    painter->drawPixmap(0,0,960, 540, *background); //背景
}

void World::eraseObj(int x, int y){
    vector<RPGObj*>::iterator it;
    it = _objs.begin();
    while(it!=_objs.end()){
        int flag1 = ((*it)->getObjType()!="stone"); //不是石头
        int flag2 = ((*it)->getPosX() == x) && ((*it)->getPosY()==y);//位置重叠

        if (flag1 && flag2){
            cout<<(*it)->getObjType()<<endl;
            (*it)->onErase();
            delete (*it);
            it = this->_objs.erase(it);
            break;
         }
        else{
            it++;
        }
    }

}

void World::handlePlayerMove(int direction, int steps){
    int x =  this->_player->getNextX(direction);
    int y = this->_player->getNextY(direction);
    this->eraseObj(x,y);
    this->_player->move(direction, steps);
}

void World::sunshineadd(int a)
{
      _player->setsunshine(_player->getsunshine()+a);
}



