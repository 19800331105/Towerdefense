#include "mw1.h"
#include "ui_mw1.h"
#include "icon.h"
#include <QTime>
#include <map>
#include <iostream>
#include <Windows.h>
#include <QObject>
#include  <QMessageBox>
#include  "plant.h"
#include  "world.h"


using namespace std;

MW1::MW1(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::MW1),
    _game()
{
    ui->setupUi(this);
    //_game.initWorld("");//TODO 搴?璇ユ???ユ???????板?炬??浠?
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));//璁剧疆???虹?瀛?
    //timer = new QTimer(this);
    //connect(timer,SIGNAL(timeout()),this,SLOT(randomMove()));
    //timer->start(50);
    //timer->setInterval(500);
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->pushButton_5->hide();
    ui->pushButton_6->hide();
    ui->pushButton_7->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();
    ui->pushButton_10->hide();
    ui->pushButton_11->hide();
    ui->pushButton_12->hide();
    ui->pushButton_13->hide();
    ui->pushButton_14->hide();
    ui->pushButton_15->hide();
    ui->pushButton_16->hide();
    ui->pushButton_17->hide();
    ui->pushButton_18->hide();
    ui->pushButton_19->hide();
    ui->pushButton_20->hide();
    ui->pushButton_21->hide();
    ui->pushButton_22->hide();
    ui->pushButton_23->hide();
    ui->pushButton_24->hide();
    ui->pushButton_25->hide();
    ui->pushButton_26->hide();
    ui->pushButton_27->hide();
    ui->pushButton_28->hide();
    ui->pushButton_29->hide();
    ui->pushButton_30->hide();
    ui->pushButton_31->hide();
    ui->pushButton_32->hide();
    ui->pushButton_33->hide();
    ui->pushButton_34->hide();
    ui->pushButton_35->hide();
    ui->pushButton_36->hide();
    ui->pushButton_37->hide();
    ui->pushButton_38->hide();
    ui->pushButton_39->hide();
    ui->pushButton_40->hide();
    ui->pushButton_41->hide();
    ui->pushButton_42->hide();
    ui->pushButton_43->hide();
    ui->pushButton_44->hide();
    ui->pushButton_45->hide();
    ui->pushButton_46->hide();
    ui->pushButton_47->hide();
    setMouseTracking(true);//??
    centralWidget()->setMouseTracking(true);//??
    setFixedSize(960,540);//
}

MW1::~MW1()
{
    delete ui;
}

void MW1::addsunshine(){
    _game.sunshineadd(5);
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
    //direction = 1,2,3,4 for 涓?涓?宸﹀??    if(e->key() == Qt::Key_A)
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

    int d = 1 + rand()%4;//???????鸿??ㄧ???瑰??
  //  this->_game.handlePlayerMove(d,1);
    this->repaint();
}

void MW1::upforward(){
    refresher->stop();
    _addsunshine->stop();
    _upforward->stop();
    if(_game.mapname.compare(":/pics/startmian.png") == 0)
    {
        QMessageBox message(QMessageBox::NoIcon, "Ready for Next Round", "New round! Are you ready?");
        message.setIconPixmap(QPixmap(":/pics/win.jpeg"));
        message.exec();
        _game.resetWorld(":/pics/startmian1.PNG");
        ui->pushButton_12->show();
        ui->pushButton_13->show();
        ui->pushButton_14->show();
        ui->pushButton_15->show();
        ui->pushButton_16->show();
        ui->pushButton_17->show();
        ui->pushButton_18->show();
        ui->pushButton_19->show();
        ui->pushButton_20->show();
        ui->pushButton_30->show();
        ui->pushButton_31->show();
        ui->pushButton_32->show();
        ui->pushButton_33->show();
        ui->pushButton_34->show();
        ui->pushButton_35->show();
        ui->pushButton_36->show();
        ui->pushButton_37->show();
        ui->pushButton_38->show();

        refresher->start(1000/60);
        _addsunshine->start(10000);
        _upforward->start(20000);
    }
    else if(_game.mapname.compare(":/pics/startmian1.PNG") == 0)
    {
        QMessageBox message(QMessageBox::NoIcon, "Ready for Next Round", "New round! Are you ready?");
        message.setIconPixmap(QPixmap(":/pics/win.jpeg"));
        message.exec();
        _game.resetWorld(":/pics/startmian2.png");
        ui->pushButton_3->show();
        ui->pushButton_4->show();
        ui->pushButton_5->show();
        ui->pushButton_6->show();
        ui->pushButton_7->show();
        ui->pushButton_8->show();
        ui->pushButton_9->show();
        ui->pushButton_10->show();
        ui->pushButton_11->show();
        ui->pushButton_12->show();
        ui->pushButton_39->show();
        ui->pushButton_40->show();
        ui->pushButton_41->show();
        ui->pushButton_42->show();
        ui->pushButton_43->show();
        ui->pushButton_44->show();
        ui->pushButton_45->show();
        ui->pushButton_46->show();
        ui->pushButton_47->show();
        refresher->start(1000/60);
        _addsunshine->start(2000);
        _upforward->start(20000);
    }
    else if(_game.mapname.compare(":/pics/startmian2.png") == 0)
    {
        QMediaPlayer * player = new QMediaPlayer;
        player->setMedia(QUrl("qrc:/sounds/victory.mp3"));
        player->setVolume(100);
        player->play();
        QMessageBox message(QMessageBox::NoIcon, "Congratulations!", "Congratulations! You win!",QMessageBox::Yes);
        message.setIconPixmap(QPixmap(":/pics/win.jpeg"));
        message.exec();
        if(QMessageBox::Yes)
        {
            _game.clearworld();
            ui->pushButton_3->hide();
            ui->pushButton_4->hide();
            ui->pushButton_5->hide();
            ui->pushButton_6->hide();
            ui->pushButton_7->hide();
            ui->pushButton_8->hide();
            ui->pushButton_9->hide();
            ui->pushButton_10->hide();
            ui->pushButton_11->hide();
            ui->pushButton_12->hide();
            ui->pushButton_13->hide();
            ui->pushButton_14->hide();
            ui->pushButton_15->hide();
            ui->pushButton_16->hide();
            ui->pushButton_17->hide();
            ui->pushButton_18->hide();
            ui->pushButton_19->hide();
            ui->pushButton_20->hide();
            ui->pushButton_21->hide();
            ui->pushButton_22->hide();
            ui->pushButton_23->hide();
            ui->pushButton_24->hide();
            ui->pushButton_25->hide();
            ui->pushButton_26->hide();
            ui->pushButton_27->hide();
            ui->pushButton_28->hide();
            ui->pushButton_29->hide();
            ui->pushButton_30->hide();
            ui->pushButton_31->hide();
            ui->pushButton_32->hide();
            ui->pushButton_33->hide();
            ui->pushButton_34->hide();
            ui->pushButton_35->hide();
            ui->pushButton_36->hide();
            ui->pushButton_37->hide();
            ui->pushButton_38->hide();
            ui->pushButton_39->hide();
            ui->pushButton_40->hide();
            ui->pushButton_41->hide();
            ui->pushButton_42->hide();
            ui->pushButton_43->hide();
            ui->pushButton_44->hide();
            ui->pushButton_45->hide();
            ui->pushButton_46->hide();
            ui->pushButton_47->hide();
            ui->pushButton->show();
            ui->pushButton_2->show();
        }
    }
}

void MW1::on_pushButton_clicked()//开始游戏
{
    _game.resetWorld(":/pics/startmian.png");
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->label->hide();
    ui->pushButton_21->show();
    ui->pushButton_22->show();
    ui->pushButton_23->show();
    ui->pushButton_24->show();
    ui->pushButton_25->show();
    ui->pushButton_26->show();
    ui->pushButton_27->show();
    ui->pushButton_28->show();
    ui->pushButton_29->show();

    _game._player->setLife(100);
    _game.lose = 0;
    _game._player->setsunshine(200);

    this->refresher = new QTimer;
    refresher->start(1000/60);
    QObject::connect(refresher, SIGNAL(timeout()), this, SLOT(update()));


    this->_addsunshine = new QTimer;
    _addsunshine->start(2000);
    QObject::connect(_addsunshine, SIGNAL(timeout()),this, SLOT(addsunshine()));

    //ui->pushButton_2->setEnabled(false);
    //ui->pushButton->setEnabled(true);
    //QObject::connect(refresher, SIGNAL(timeout()), this, SLOT(show_lose()));

    this->_upforward=new QTimer;
    _upforward->start(20000);
    QObject::connect(_upforward, SIGNAL(timeout()),this, SLOT(upforward()));
}

void MW1::on_pushButton_3_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(200, 100);
                _game.final_plant.push_back(final);
                ui->pushButton_3->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }
}

void MW1::on_pushButton_4_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(200, 310);
                _game.final_plant.push_back(final);
                ui->pushButton_4->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }
}

void MW1::on_pushButton_5_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(366, 100);
                _game.final_plant.push_back(final);
                ui->pushButton_5->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }
}

void MW1::on_pushButton_6_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(460, 100);
                _game.final_plant.push_back(final);
                ui->pushButton_6->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }
}

void MW1::on_pushButton_7_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(545, 100);
                _game.final_plant.push_back(final);
                ui->pushButton_7->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }
}

void MW1::on_pushButton_8_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(630, 100);
                _game.final_plant.push_back(final);
                ui->pushButton_8->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }
}

void MW1::on_pushButton_9_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(713, 100);
                _game.final_plant.push_back(final);
                ui->pushButton_9->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }
}

void MW1::on_pushButton_10_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(795, 100);
                _game.final_plant.push_back(final);
                ui->pushButton_10->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }
}

void MW1::on_pushButton_11_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(880, 100);
                _game.final_plant.push_back(final);
                ui->pushButton_11->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }
}


void MW1::on_pushButton_15_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(200, 205);
                _game.final_plant.push_back(final);
                ui->pushButton_10->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }

}

void MW1::on_pushButton_23_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(200, 310);
                _game.final_plant.push_back(final);
                ui->pushButton_23->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }

}

void MW1::on_pushButton_32_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(200,398);
                _game.final_plant.push_back(final);
                ui->pushButton_32->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }
}


void MW1::on_pushButton_47_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(200, 495);
                _game.final_plant.push_back(final);
                ui->pushButton_47->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }
}


void MW1::on_pushButton_14_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(285,205);
                _game.final_plant.push_back(final);
                ui->pushButton_14->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }

}

void MW1::on_pushButton_16_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            if(_game._player->getsunshine()<100){
                //阳光不足
                QMessageBox::warning(NULL, "warning", "No Enough Sunshine!");
            }
            else {
                Plant* final = new Plant("wandou", false);
                final->setRPGobj(366, 205);
                _game.final_plant.push_back(final);
                ui->pushButton_16->hide();
                _game._player->setsunshine(_game._player->getsunshine()-100);
                //阳光减少
            }
        }

}

void MW1::on_pushButton_18_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(460, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_18->hide();
        }

}

void MW1::on_pushButton_12_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(545, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_12->hide();
        }

}

void MW1::on_pushButton_19_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(630, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_19->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(630,205);
            _game.final_plant.push_back(final);
            ui->pushButton_19->hide();
        }
}

void MW1::on_pushButton_17_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(713, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_17->hide();
        }

}

void MW1::on_pushButton_20_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(795, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_20->hide();
        }

}

void MW1::on_pushButton_13_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(880, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_13->hide();
        }

}

void MW1::on_pushButton_22_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(282, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_22->hide();
        }

}

void MW1::on_pushButton_27_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(366, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_27->hide();
        }

}

void MW1::on_pushButton_21_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(460, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_21->hide();
        }

}

void MW1::on_pushButton_29_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(545, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_29->hide();
        }

}

void MW1::on_pushButton_26_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(630, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_26->hide();
        }

}

void MW1::on_pushButton_25_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(713, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_25->hide();
        }

}

void MW1::on_pushButton_24_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(795, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_24->hide();
        }

}


void MW1::on_pushButton_28_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(880, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_28->hide();
        }

}

void MW1::on_pushButton_31_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(282, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_31->hide();
        }

}

void MW1::on_pushButton_36_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(366, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_36->hide();
        }

}

void MW1::on_pushButton_30_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(460, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_30->hide();
        }

}

void MW1::on_pushButton_38_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(545, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_38->hide();
        }

}

void MW1::on_pushButton_35_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(630, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_35->hide();
        }

}

void MW1::on_pushButton_34_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(713, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_34->hide();
        }

}

void MW1::on_pushButton_33_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(795, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_33->hide();
        }

}

void MW1::on_pushButton_37_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(880, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_37->hide();
        }

}

void MW1::on_pushButton_43_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(282, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_43->hide();
        }

}

void MW1::on_pushButton_39_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(366, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_39->hide();
        }

}

void MW1::on_pushButton_45_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(460, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_45->hide();
        }

}

void MW1::on_pushButton_44_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(545, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_44->hide();
        }

}

void MW1::on_pushButton_42_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(630, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_42->hide();
        }

}

void MW1::on_pushButton_40_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(713, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_40->hide();
        }

}

void MW1::on_pushButton_41_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(795, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_41->hide();
        }

}

void MW1::on_pushButton_46_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Attention"," You will buy a wandou! " );
    mymessage.setStandardButtons(QMessageBox::Yes);
    mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
    mymessage.exec();
    if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(880, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_46->hide();
        }

}


void MW1::show_lose()
{
    if(_game._player->getLife() <=0)
    {
        refresher->stop();
        _addsunshine->stop();
        _upforward->stop();
        QMediaPlayer * player = new QMediaPlayer;
        player->setMedia(QUrl("qrc:/sounds/failure.mp3"));
        player->setVolume(60);
        player->play();
        QMessageBox mymessage(QMessageBox::NoIcon, "Bad New"," You Lose! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("Retry the game"));
        mymessage.setButtonText(QMessageBox::No, QString("Close the game"));
        mymessage.exec();
            if (QMessageBox::Yes) {
                _game.clearworld();
                ui->pushButton_3->hide();
                ui->pushButton_4->hide();
                ui->pushButton_5->hide();
                ui->pushButton_6->hide();
                ui->pushButton_7->hide();
                ui->pushButton_8->hide();
                ui->pushButton_9->hide();
                ui->pushButton_10->hide();
                ui->pushButton_11->hide();
                ui->pushButton_12->hide();
                ui->pushButton_13->hide();
                ui->pushButton_14->hide();
                ui->pushButton_15->hide();
                ui->pushButton_16->hide();
                ui->pushButton_17->hide();
                ui->pushButton_18->hide();
                ui->pushButton_19->hide();
                ui->pushButton_20->hide();
                ui->pushButton_21->hide();
                ui->pushButton_22->hide();
                ui->pushButton_23->hide();
                ui->pushButton_24->hide();
                ui->pushButton_25->hide();
                ui->pushButton_26->hide();
                ui->pushButton_27->hide();
                ui->pushButton_28->hide();
                ui->pushButton_29->hide();
                ui->pushButton_30->hide();
                ui->pushButton_31->hide();
                ui->pushButton_32->hide();
                ui->pushButton_33->hide();
                ui->pushButton_34->hide();
                ui->pushButton_35->hide();
                ui->pushButton_36->hide();
                ui->pushButton_37->hide();
                ui->pushButton_38->hide();
                ui->pushButton_39->hide();
                ui->pushButton_40->hide();
                ui->pushButton_41->hide();
                ui->pushButton_42->hide();
                ui->pushButton_43->hide();
                ui->pushButton_44->hide();
                ui->pushButton_45->hide();
                ui->pushButton_46->hide();
                ui->pushButton_47->hide();
                ui->pushButton->show();
                ui->pushButton_2->show();

            }
            else if(QMessageBox::No){
                MW1::close();
            }

    }
}

void MW1::on_pushButton_48_clicked()
{
    refresher->stop();
    _addsunshine->stop();
    _upforward->stop();
}

void MW1::on_pushButton_49_clicked()
{
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/pause.mp3"));
    player->setVolume(60);
    player->play();
    refresher->start();
    _addsunshine->start();
    _upforward->start();
}

void MW1::on_pushButton_2_clicked()
{
    MW1::close();
}
