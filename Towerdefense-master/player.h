#ifndef PLAYER_H
#define PLAYER_H
#include "rpgobj.h"

class Player: public RPGObj
{
public:
    Player(){}
    ~Player(){}
    void move(int direction, int steps=1);
        //direction =1,2,3,4 for иообвС

    int getLife(){return life;}
    void setLife(int l){life = l;}
    int getsunshine(){return sunshine;}
    void setsunshine(int m){sunshine = m;}

protected:
    int life;
    int sunshine;

};

#endif // PLAYER_H
