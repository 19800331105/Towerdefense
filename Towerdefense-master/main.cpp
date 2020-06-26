#include "mw1.h"
#include <QApplication>
#include <QTime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTime time;
    time= QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);
    MW1 mw;
    a.connect( &a, SIGNAL( lastWindowClosed() ), &a, SLOT( quit() ) );
    mw.show();

    return a.exec();
}
