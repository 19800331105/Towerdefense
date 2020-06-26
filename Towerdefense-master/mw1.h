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
//�¼ӵ�ͷ�ļ�
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
    void addsunshine();//����
    void on_pushButton_clicked();

private:
    Ui::MW1 *ui;
    World _game;
    QTimer *timer;
    QTimer *_addsunshine;//��һ��ʱ�������������ڹ���������������
    QTimer *refresher;

};

#endif // MW1_H
