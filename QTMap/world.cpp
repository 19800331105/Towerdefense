#include "world.h"
#include "icon.h"
#include "rpgobj.h"
#include <QMediaPlayer>
#include<iostream>
#include "road.h"

using namespace std;

World::~World(){
    delete this->_player;
}

void World::initWorld(string mapFile){
    //TODO 下面的内容应该改为从地图文件装载
    //player 5 5
    this->_player->initObj("player");
    this->_player->setPosX(10);
    this->_player->setPosY(10);

    RPGObj *p1 = new RPGObj;
    p1->initObj("stone");
    p1->setPosX(0);
    p1->setPosY(0);

    RPGObj *p2 = new Road;
    p2->initObj("road");
    p2->setPosX(0);
    p2->setPosY(9);

    RPGObj *p3 = new Road;
    p3->initObj("road");
    p3->setPosX(4);
    p3->setPosY(9);

    RPGObj *p4 = new Road;
    p4->initObj("road");
    p4->setPosX(8);
    p4->setPosY(9);

    RPGObj *p5 = new Road;
    p5->initObj("road");
    p5->setPosX(12);
    p5->setPosY(9);

    RPGObj *p6 = new Road;
    p6->initObj("road");
    p6->setPosX(16);
    p6->setPosY(9);

    RPGObj *p7 = new Road;
    p7->initObj("road");
    p7->setPosX(15);
    p7->setPosY(9);

    RPGObj *p8 = new Road;
    p8->initObj("road");
    p8->setPosX(20);
    p8->setPosY(9);


    RPGObj *p9 = new Fruit;
    p9->initObj("fruit");
    p9->setPosX(21);
    p9->setPosY(9);


    this->_objs.push_back(p1);
    this->_objs.push_back(p2);
    this->_objs.push_back(p3);
    this->_objs.push_back(p4);
    this->_objs.push_back(p5);
    this->_objs.push_back(p6);
    this->_objs.push_back(p7);
    this->_objs.push_back(p8);
    this->_objs.push_back(p9);


    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/hdl.mp3"));
    player->setVolume(30);
    player->play();


}

void World::enemy_generator()
{
    int b;
    Enemy *tmp;
    b=qrand()%5;//设置一次生成的敌人个数,不超过5
    for(int i=0;i<b;i++)
    {
        tmp->initObj("enemy");
        tmp->setPosX(0);
        tmp->setPosY(b+10*i);
        this->_enemies.push_back(tmp);
    }
}

void World::show(QPainter * painter){

    int n = this->_objs.size();
    int m = this->_enemies.size();
    for (int i=0;i<n;i++){
        this->_objs[i]->show(painter);
    }
    for (int i=0;i<m;i++)
    {
        this->_enemies[i]->show(painter);
    }
    this->_player->show(painter);
}

void World::eraseObj(int x, int y){
    vector<RPGObj*>::iterator it;
    it = _objs.begin();
    while(it!=_objs.end()){
        int flag1 = ((*it)->getObjType()!="stone"); //不是石头
        int flag3 = ((*it)->getObjType()!="road");  // not road
        int flag4 = ((*it)->getObjType()!="enemy");//不是敌人
        int flag2 = ((*it)->getPosX() == x) && ((*it)->getPosY()==y);//位置重叠

        if (flag1 && flag2 && flag3 &&flag4 ){
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



