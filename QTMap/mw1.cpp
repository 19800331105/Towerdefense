#include "mw1.h"
#include "ui_mw1.h"
#include "icon.h"
#include <QTime>
#include<QTimer>
#include <map>
#include <iostream>

using namespace std;

MW1::MW1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MW1)
{
    ui->setupUi(this);


}

MW1::~MW1()
{
    delete ui;
}



void MW1::on_pushButton_clicked()
{
    this->hide();
    startmenu d;
    d.exec();

}

void MW1::on_pushButton_2_clicked()
{
    QApplication::exit();
}
