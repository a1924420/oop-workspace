#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <tuple>

#include "GameEntity.h"

class Ship: public GameEntity{

    private:

    public:

    Ship(int x, int y): GameEntity(x, y, GameEntityType::ShipType){}

    void move(int dx, int dy){

        int x, y;

        std::tie(x, y) = position;

        position = std::make_tuple(x + dx, y + dy);

    }

};

#endif