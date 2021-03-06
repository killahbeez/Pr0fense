#ifndef TILE_H
#define TILE_H
#include <QRectF>
#include "Box2D/Box2D.h"
#include "tower.h"

class Tile
{
public:
    Tile();
    QRectF pos;
    b2Body *body = nullptr;
    int type;
    Tower *t = nullptr;
    int towernum;
    int ran;
    QRect rect();
    void initPhysics(b2World *world);

};

#endif // TILE_H
