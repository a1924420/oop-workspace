#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>

class GameEntity{

    public:

    enum GameEntityType {

        ExplosionType,
        MineType,
        NoneType,
        ShipType

    };

    protected:

    std::tuple<int, int> position;
    GameEntityType type;

    public:

    GameEntity(int x, int y, char type): position(x, y) {}

    std::tuple<int, int> getPos(){ return position; }

    GameEntityType getType(){ return type; }

};

#endif