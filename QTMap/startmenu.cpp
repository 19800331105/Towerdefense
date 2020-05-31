#include "mw1.h"
#include "ui_mw1.h"
#include "icon.h"
#include <QTime>
#include<QTimer>
#include <map>
#include <iostream>
#include "world.h"


startmenu::startmenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::startmenu)
{
    ui->setupUi(this);
    //init game world
    _game.initWorld("");

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(randomMove()));

    timer->start(50);
    timer->setInterval(500);

    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
}

startmenu::~startmenu()
{
    delete ui;
}

void startmenu::paintEvent(QPaintEvent *e){
    QPainter *pa;
    pa = new QPainter();
    pa->begin(this);
    this->_game.show(pa);
    pa->end();
    delete pa;
}

void startmenu::keyPressEvent(QKeyEvent *e)
{

    if(e->key() == Qt::Key_A)
    {
        this->_game.handlePlayerMove(3,1);
    }
    else if(e->key() == Qt::Key_D)
    {
        this->_game.handlePlayerMove(4,1);
    }
    else if(e->key() == Qt::Key_W)
    {
        this->_game.handlePlayerMove(1,1);
    }
    else if(e->key() == Qt::Key_S)
    {
         this->_game.handlePlayerMove(2,1);
    }
    this->repaint();
}

void startmenu::randomMove(){

    int d = 1 + rand()%4;
    this->_game.handlePlayerMove(d,1);
    this->repaint();
}

void startmenu::on_pushButton_clicked()
{
    this->close();
    MW1 d;
    d.show();
}


