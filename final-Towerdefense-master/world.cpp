#include "world.h"
#include "icon.h"
#include "rpgobj.h"
#include <QMediaPlayer>
#include<iostream>
#include <QMessageBox>
#include <QApplication>


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
    player->setMedia(QUrl("qrc:/sounds/music.mp3"));
    player->setVolume(30);
    player->play();

}

void World::resetWorld(QString mapFile){
    QApplication::setQuitOnLastWindowClosed(false);
    mapname=mapFile;
    delete background;
    background=new QPixmap;
    background->load(mapname);
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/coming.mp3"));
    player->setVolume(60);
    player->play();

}

void World::clearworld()
{
    for(int i = 0; i < _bullets.size(); i++){
        delete _bullets[i];
        _bullets.erase(_bullets.begin() + i);
        i--;
    }
    for(int i = 0; i < _enemies.size(); i++){
        delete _enemies[i];
        _enemies.erase(_enemies.begin() + i);
        i--;
    }
    for(int i = 0; i < final_plant.size(); i++){
        delete final_plant[i];
        final_plant.erase(final_plant.begin() + i);
        i--;
    }
    delete background;
    background=new QPixmap;
    background->load(":/pics/startpage.png");
    mapname=":/pics/startpage.png";
}


void World::enemycreator()
{
    if(this->mapname == ":/pics/startmian.png")
    {
        Enemy *tmp;
        tmp=new Enemy("zombine");
        tmp->setRPGobj(910,90+96*2);
        this->_enemies.push_back(tmp);
    }
    else if(this->mapname == ":/pics/startmian1.PNG")
    {
        Enemy *tmp;
        int b;
        b=qrand()%4;
        for(int i=0;i<b;i++)
        {
            if(i % 3 == 0)
            {
                 tmp = new Enemy("zombine");
            }
            else if(i % 3 == 1)
            {
                 tmp = new Enemy("zombine1");
            }
            else if(i % 3 == 2)
            {
                 tmp = new Enemy("zombine2");
            }
            tmp->setRPGobj(910,90+96*(i+1));
            this->_enemies.push_back(tmp);
        }
    }
    else if(this->mapname == ":/pics/startmian2.png")
    {
        Enemy *tmp;
        int b;
        b=qrand()%6;
        for(int i=0;i<b;i++)
        {
            if(i % 4 == 0)
             {
                 tmp = new Enemy("zombine");
              }
             else if(i  % 4 == 1)
             {
                 tmp = new Enemy("zombine1");
             }
             else if(i % 4 == 2)
             {
                 tmp=new Enemy("zombine2");
             }
             else if(i % 4 == 3)
             {
                 tmp=new Enemy("zombine3");
             }
             tmp->setRPGobj(910,90+96*i);
             this->_enemies.push_back(tmp);
         }
    }
}

void World::bulletcreator()
{
    int i;
    for(i = 0; i < final_plant.size(); i++){
            if(final_plant[i]->turn_on){
             Bullet* b = new Bullet(final_plant[i], _enemies[i]);
            _bullets.push_back(b);
             }
     }

}

void World::movement(){
    int i;
    for(i = 0; i < _enemies.size(); i++){
        float x = _enemies[i]->getPosition().x();
        float y = _enemies[i]->getPosition().y();
        x = x + _enemies[i]->get_v()*_enemies[i]->get_left()/60;
        _enemies[i]->setRPGobj(x, y);
    }
    for(i = 0; i < _bullets.size(); i++){
        float x = _bullets[i]->getPosition().x();
        float y = _bullets[i]->getPosition().y();
        x = x + _bullets[i]->get_v()*_bullets[i]->get_direction_x()/60;
        _bullets[i]->setRPGobj(x, y);
    }
}


void World::show(QPainter * painter){
    stopwatch += 1.0/60;
    this->_player->show(painter);
    painter->drawPixmap(0,0,960, 540, *background); //背景
    if(this->mapname!=":/pics/startpage.png")
    {
        movement();
        if(((stopwatch - int(stopwatch/2)*2) >= 0.0) && ((stopwatch - int(stopwatch/frequency)*frequency) < 1.0/60)){
           bulletcreator();
        }
        Hurt();
        if(((stopwatch - int(stopwatch/frequency)*frequency) >= 0.0) && ((stopwatch - int(stopwatch/frequency)*frequency) < 1.0/60)){
           enemycreator();
        }
        eraseObj();

        for(int i = 0; i <_enemies.size(); i++)
        {
            _enemies[i]->show(painter);
         }

        for(int i = 0; i < final_plant.size(); i++){
            final_plant[i]->show(painter);
            final_plant[i]->turn_on=true;
        }

        for(int i = 0; i < _bullets.size(); i++){
            _bullets[i]->show(painter);
        }

    }
}

void World::eraseObj(){
    for(int i = 0; i < _enemies.size(); i++)
    {

        if(((_enemies[i])->getLife())<=0)
        {
            delete _enemies[i];
            _enemies.erase(_enemies.begin() + i);
            i--;
            if(i < 0){break;}
        }
        if(((_enemies[i])->getPosX())<=100)//(150+100/2))
        {
            //僵尸到达屋内，生命损失
            if(_enemies[i]->getType().compare("zombine") == 0)
                _player->setLife(_player->getLife()-5);
            else if(_enemies[i]->getType().compare("zombine1") == 0)
                _player->setLife(_player->getLife()-100);
            else if(_enemies[i]->getType().compare("zombine2") == 0)
                _player->setLife(_player->getLife()-10);
            else if(_enemies[i]->getType().compare("zombine3") == 0)
                _player->setLife(_player->getLife()-10);

            delete _enemies[i];
            _enemies.erase(_enemies.begin() + i);
            i--;
            if(i < 0){break;}
        }
    }
    if(_player->getLife()<=0)
    {
        this->lose =2;
    }


    //vector<RPGObj*>::iterator it;
    //it = _objs.begin();
    //while(it!=_objs.end()){
     //   int flag1 = ((*it)->getObjType()!="stone"); //不是石头
     //   int flag2 = ((*it)->getPosX() == x) && ((*it)->getPosY()==y);//位置重叠

      //  if (flag1 && flag2){
     //       cout<<(*it)->getObjType()<<endl;
      //      (*it)->onErase();
      //      delete (*it);
      //      it = this->_objs.erase(it);
      //      break;
      //   }
      //  else{
      //      it++;
       // }
   // }

}
/*
void World::handlePlayerMove(int direction, int steps){
    int x =  this->_player->getNextX(direction);
    int y = this->_player->getNextY(direction);
    this->eraseObj(x,y);
    this->_player->move(direction, steps);
}
*/
void World::Hurt(){
    int i, j;
    for(i = 0; i < _enemies.size(); i++){
        for(j = 0; j < _bullets.size(); j++){
            if( _enemies[i]->is_in_it(_bullets[j]->getPosition())){
                QMediaPlayer * player = new QMediaPlayer;
                player->setMedia(QUrl("qrc:/sounds/hit.mp3"));
                player->setVolume(60);
                player->play();
                _enemies[i]->setLife(_enemies[i]->getLife() - _bullets[j]->getDamage());
                delete _bullets[j];
                _bullets.erase(_bullets.begin()+j);
                j--;
            }
        }

    }
}

void World::sunshineadd(int a)
{
      _player->setsunshine(_player->getsunshine()+a);
}



