#include "mw1.h"
#include "ui_mw1.h"
#include "icon.h"
#include <QTime>
#include <map>
#include <iostream>
#include <Windows.h>
#include <QObject>
<<<<<<< HEAD
#include  <QMessageBox>
#include  "plant.h"
#include  "world.h"

=======
>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883

using namespace std;

MW1::MW1(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::MW1),
    _game()
{
    ui->setupUi(this);
<<<<<<< HEAD
    //_game.initWorld("");//TODO åº?è¯¥æ?¯è??¥æ???????°å?¾æ??ä»?    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));//è®¾ç½®???ºç?å­?
    //timer = new QTimer(this);
    //connect(timer,SIGNAL(timeout()),this,SLOT(randomMove()));
        //randomMove()ä¸ºè?ªå?ä¹?æ§½å?½æ??    //timer->start(50);
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
    setFixedSize(960,540);//??
=======
    //_game.initWorld("");//TODO åº”è¯¥æ˜¯è¾“å…¥æœ‰æ•ˆçš„åœ°å›¾æ–‡ä»¶
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));//è®¾ç½®éšæœºç§å­
    //timer = new QTimer(this);
    //connect(timer,SIGNAL(timeout()),this,SLOT(randomMove()));
        //randomMove()ä¸ºè‡ªå®šä¹‰æ§½å‡½æ•°
    //timer->start(50);
    //timer->setInterval(500);

    setMouseTracking(true);//æ— 
    centralWidget()->setMouseTracking(true);//æ— 
    setFixedSize(960,540);//æ— 
>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883
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
<<<<<<< HEAD
    //direction = 1,2,3,4 for ä¸?ä¸?å·¦å??    if(e->key() == Qt::Key_A)
=======
    //direction = 1,2,3,4 for ä¸Šä¸‹å·¦å³
    if(e->key() == Qt::Key_A)
>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883
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

<<<<<<< HEAD
    int d = 1 + rand()%4;//???????ºè??¨ç???¹å??
=======
    int d = 1 + rand()%4;//ç”Ÿæˆéšæœºè¿åŠ¨çš„æ–¹å‘
>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883
    this->_game.handlePlayerMove(d,1);
    this->repaint();
}

void MW1::on_pushButton_clicked()
{
    _game.resetWorld(":/pics/startmian.png");
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->label->hide();
<<<<<<< HEAD
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
    ui->pushButton_13->show();
    ui->pushButton_14->show();
    ui->pushButton_15->show();
    ui->pushButton_16->show();
    ui->pushButton_17->show();
    ui->pushButton_18->show();
    ui->pushButton_19->show();
    ui->pushButton_20->show();
    ui->pushButton_21->show();
    ui->pushButton_22->show();
    ui->pushButton_23->show();
    ui->pushButton_24->show();
    ui->pushButton_25->show();
    ui->pushButton_26->show();
    ui->pushButton_27->show();
    ui->pushButton_28->show();
    ui->pushButton_29->show();
    ui->pushButton_30->show();
    ui->pushButton_31->show();
    ui->pushButton_32->show();
    ui->pushButton_33->show();
    ui->pushButton_34->show();
    ui->pushButton_35->show();
    ui->pushButton_36->show();
    ui->pushButton_37->show();
    ui->pushButton_38->show();
    ui->pushButton_39->show();
    ui->pushButton_40->show();
    ui->pushButton_41->show();
    ui->pushButton_42->show();
    ui->pushButton_43->show();
    ui->pushButton_44->show();
    ui->pushButton_45->show();
    ui->pushButton_46->show();
    ui->pushButton_47->show();
=======
>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883

    _game._player->setLife(100);
    _game._player->setsunshine(200);
    this->refresher = new QTimer;
    refresher->start(1000/60);
    QObject::connect(refresher, SIGNAL(timeout()), this, SLOT(update()));


    this->_addsunshine = new QTimer;
    _addsunshine->start(10000);
    QObject::connect(_addsunshine, SIGNAL(timeout()),this, SLOT(addsunshine()));


}
<<<<<<< HEAD

void MW1::on_pushButton_3_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(200, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_3->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(200, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_3->hide();
        }
}

void MW1::on_pushButton_4_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(282, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_4->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(282, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_4->hide();
        }
}

void MW1::on_pushButton_5_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(366, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_5->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(366, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_5->hide();
        }
}

void MW1::on_pushButton_6_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(460, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_6->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(460, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_6->hide();
        }
}

void MW1::on_pushButton_7_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(545, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_7->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(545, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_7->hide();
        }
}

void MW1::on_pushButton_8_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(630, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_8->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(630, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_8->hide();
        }
}

void MW1::on_pushButton_9_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(713, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_9->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(713, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_9->hide();
        }
}

void MW1::on_pushButton_10_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(795, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_10->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(795, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_10->hide();
        }
}

void MW1::on_pushButton_11_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(880, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_11->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(880, 100);
            _game.final_plant.push_back(final);
            ui->pushButton_11->hide();
        }
}

void MW1::on_pushButton_15_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(200, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_15->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(200, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_15->hide();
        }
}

void MW1::on_pushButton_23_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(200, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_23->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(200,310);
            _game.final_plant.push_back(final);
            ui->pushButton_23->hide();
        }
}

void MW1::on_pushButton_32_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(200, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_32->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(200,398);
            _game.final_plant.push_back(final);
            ui->pushButton_32->hide();
        }
}

void MW1::on_pushButton_47_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(200, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_47->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(200,490);
            _game.final_plant.push_back(final);
            ui->pushButton_47->hide();
        }
}

void MW1::on_pushButton_14_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(282, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_14->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(282,205);
            _game.final_plant.push_back(final);
            ui->pushButton_14->hide();
        }
}

void MW1::on_pushButton_16_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(366, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_16->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(366,205);
            _game.final_plant.push_back(final);
            ui->pushButton_16->hide();
        }
}

void MW1::on_pushButton_18_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(460, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_18->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(460,205);
            _game.final_plant.push_back(final);
            ui->pushButton_18->hide();
        }
}

void MW1::on_pushButton_12_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(545, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_12->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(545,205);
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
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(713, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_17->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(713,205);
            _game.final_plant.push_back(final);
            ui->pushButton_17->hide();
        }
}

void MW1::on_pushButton_20_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(795, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_20->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(795,205);
            _game.final_plant.push_back(final);
            ui->pushButton_20->hide();
        }
}

void MW1::on_pushButton_13_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(880, 205);
            _game.final_plant.push_back(final);
            ui->pushButton_13->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(880,205);
            _game.final_plant.push_back(final);
            ui->pushButton_13->hide();
        }
}

void MW1::on_pushButton_22_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(282, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_22->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(282,310);
            _game.final_plant.push_back(final);
            ui->pushButton_22->hide();
        }
}

void MW1::on_pushButton_27_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(366, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_27->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(366,310);
            _game.final_plant.push_back(final);
            ui->pushButton_27->hide();
        }
}

void MW1::on_pushButton_21_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(460, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_21->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(460,310);
            _game.final_plant.push_back(final);
            ui->pushButton_21->hide();
        }
}

void MW1::on_pushButton_29_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(545, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_29->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(545,310);
            _game.final_plant.push_back(final);
            ui->pushButton_29->hide();
        }
}

void MW1::on_pushButton_26_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(630, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_26->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(630,310);
            _game.final_plant.push_back(final);
            ui->pushButton_26->hide();
        }
}

void MW1::on_pushButton_25_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(713, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_25->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(713,310);
            _game.final_plant.push_back(final);
            ui->pushButton_25->hide();
        }
}

void MW1::on_pushButton_24_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(795, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_24->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(795,310);
            _game.final_plant.push_back(final);
            ui->pushButton_24->hide();
        }
}


void MW1::on_pushButton_28_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(880, 310);
            _game.final_plant.push_back(final);
            ui->pushButton_28->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(880,310);
            _game.final_plant.push_back(final);
            ui->pushButton_28->hide();
        }
}

void MW1::on_pushButton_31_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(282, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_31->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(282,398);
            _game.final_plant.push_back(final);
            ui->pushButton_31->hide();
        }
}

void MW1::on_pushButton_36_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(366, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_36->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(366,398);
            _game.final_plant.push_back(final);
            ui->pushButton_36->hide();
        }
}

void MW1::on_pushButton_30_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(460, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_30->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(460,398);
            _game.final_plant.push_back(final);
            ui->pushButton_30->hide();
        }
}

void MW1::on_pushButton_38_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(545, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_38->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(545,398);
            _game.final_plant.push_back(final);
            ui->pushButton_38->hide();
        }
}

void MW1::on_pushButton_35_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(630, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_35->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(630,398);
            _game.final_plant.push_back(final);
            ui->pushButton_35->hide();
        }
}

void MW1::on_pushButton_34_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(713, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_34->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(713,398);
            _game.final_plant.push_back(final);
            ui->pushButton_34->hide();
        }
}

void MW1::on_pushButton_33_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(795, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_33->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(795,398);
            _game.final_plant.push_back(final);
            ui->pushButton_33->hide();
        }
}

void MW1::on_pushButton_37_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(880, 398);
            _game.final_plant.push_back(final);
            ui->pushButton_37->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(880,398);
            _game.final_plant.push_back(final);
            ui->pushButton_37->hide();
        }
}

void MW1::on_pushButton_43_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(282, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_43->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(282,490);
            _game.final_plant.push_back(final);
            ui->pushButton_43->hide();
        }
}

void MW1::on_pushButton_39_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(366, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_39->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(366,490);
            _game.final_plant.push_back(final);
            ui->pushButton_39->hide();
        }
}

void MW1::on_pushButton_45_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(460, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_45->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(460,490);
            _game.final_plant.push_back(final);
            ui->pushButton_45->hide();
        }
}

void MW1::on_pushButton_44_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(545, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_44->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(545,490);
            _game.final_plant.push_back(final);
            ui->pushButton_44->hide();
        }
}

void MW1::on_pushButton_42_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(630, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_42->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(630,490);
            _game.final_plant.push_back(final);
            ui->pushButton_42->hide();
        }
}

void MW1::on_pushButton_40_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(713, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_40->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(713,490);
            _game.final_plant.push_back(final);
            ui->pushButton_40->hide();
        }
}

void MW1::on_pushButton_41_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(795, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_41->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(795,490);
            _game.final_plant.push_back(final);
            ui->pushButton_41->hide();
        }
}

void MW1::on_pushButton_46_clicked()
{
    QMessageBox mymessage(QMessageBox::Warning, "Shops"," Choose the type yu want to buy! " );
        mymessage.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mymessage.setButtonText(QMessageBox::Yes, QString("wandou"));
        mymessage.setButtonText(QMessageBox::No, QString("wandoudou"));
        mymessage.exec();
        if (QMessageBox::Yes) {
            Plant* final = new Plant("wandou", false);
            final->setRPGobj(880, 490);
            _game.final_plant.push_back(final);
            ui->pushButton_46->hide();
        }
        else if(QMessageBox::No){
            Plant* final = new Plant("wandoudou", false);
            final->setRPGobj(880,490);
            _game.final_plant.push_back(final);
            ui->pushButton_46->hide();
        }
}
=======
>>>>>>> cb9d0ba157c0f5837e19c36582f7957bb8432883
