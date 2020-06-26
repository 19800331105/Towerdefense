#ifndef STARTMENU_H
#define STARTMENU_H

#include <QDialog>
#include <mw1.h>
#include "ui_startmenu.h"
#include <QMainWindow>
#include <QImage>
#include <QPainter>
#include<QKeyEvent>
#include<QTimer>
#include "rpgobj.h"
#include "world.h"

namespace Ui {
class startmenu;
}

class startmenu : public QDialog
{
    Q_OBJECT

public:
    explicit startmenu(QWidget *parent = nullptr);
    ~startmenu();
    //ÐÂÌí¼ÓµÄ
    void paintEvent(QPaintEvent *e);
    void keyPressEvent(QKeyEvent *);

protected slots:
    void randomMove();

private slots:
    void on_pushButton_clicked();

private:
    Ui::startmenu *ui;
    World _game;
    QTimer *timer;

};

#endif // STARTMENU_H


