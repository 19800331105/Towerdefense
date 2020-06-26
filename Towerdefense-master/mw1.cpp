#include "mw1.h"
#include "ui_mw1.h"
#include "icon.h"
#include <QTime>
#include <map>
#include <iostream>
#include <Windows.h>
#include <QObject>

using namespace std;

MW1::MW1(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::MW1),
    _game()
{
    ui->setupUi(this);
    //_game.initWorld("");//TODO 应该是输入有效的地图文件
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));//设置随机种子
    //timer = new QTimer(this);
    //connect(timer,SIGNAL(timeout()),this,SLOT(randomMove()));
        //randomMove()为自定义槽函数
    //timer->start(50);
    //timer->setInterval(500);

    setMouseTracking(true);//无
    centralWidget()->setMouseTracking(true);//无
    setFixedSize(960,540);//无
}

MW1::~MW1()
{
    delete ui;
}

void MW1::addsunshine(){
    _game.sunshineadd(20);
}


void MW1::paintEvent(QPaintEvent *e){
    QPainter *pa;
    pa = new QPainter();
    pa->begin(this);
    this->_game.show(pa);
    pa->end();
    delete pa;

}
/*
//void MW1::keyPressEvent(QKeyEvent *e)
{
    //direction = 1,2,3,4 for 上下左右
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
*/

void MW1::randomMove(){

    int d = 1 + rand()%4;//生成随机运动的方向
    this->_game.handlePlayerMove(d,1);
    this->repaint();
}

void MW1::on_pushButton_clicked()
{
    _game.resetWorld(":/pics/startmian.png");
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->label->hide();

    _game._player->setLife(100);
    _game._player->setsunshine(200);
    this->refresher = new QTimer;
    refresher->start(1000/60);
    QObject::connect(refresher, SIGNAL(timeout()), this, SLOT(update()));


    this->_addsunshine = new QTimer;
    _addsunshine->start(10000);
    QObject::connect(_addsunshine, SIGNAL(timeout()),this, SLOT(addsunshine()));


}
