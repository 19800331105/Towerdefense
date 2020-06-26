#ifndef MW1_H
#define MW1_H

#include <QMainWindow>
#include <QImage>
#include <QPainter>
#include <QKeyEvent>
#include <QTimer>
#include "rpgobj.h"
#include "world.h"
#include <QPixmap>
//新加的头文件
#include <QMessageBox>
#include <QWidget>
#include <QMouseEvent>
#include <QPushButton>


namespace Ui {
class MW1;
}

class MW1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MW1(QMainWindow *parent = 0);
    ~MW1();
    void paintEvent(QPaintEvent *e);


protected slots:
    void randomMove();

private slots:
    void addsunshine();//阳光
    void on_pushButton_clicked();

private:
    Ui::MW1 *ui;
    World _game;
    QTimer *timer;
    QTimer *_addsunshine;//过一段时间增加阳光用于购买武器攻击敌人
    QTimer *refresher;

};

#endif // MW1_H
