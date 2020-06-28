#include "fruit.h"

Fruit::Fruit()
{

}

Fruit::~Fruit()
{

}

void Fruit::onErase(){
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/12321.mp3"));
    player->setVolume(30);
    player->play();

}

