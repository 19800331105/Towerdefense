#ifndef ROAD_H
#define ROAD_H
#include "rpgobj.h"

class Road: public RPGObj
{
public:
    Road();
    ~Road();
    void onErase();
};


#endif // ROAD_H
