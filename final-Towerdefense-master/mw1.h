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
    void upforward();//进入下一关卡
    void addsunshine();//阳光自动增加
    void show_lose();//显示游戏输了
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_46_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_2_clicked();

private:
    QRect textRect;
    Ui::MW1 *ui;
    World _game;
    QTimer *timer;
    QTimer *_addsunshine;//过一段时间增加阳光用于购买武器攻击敌人
    QTimer *refresher;
    QTimer *_upforward;

};

#endif // MW1_H
