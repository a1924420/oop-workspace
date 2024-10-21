#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>

class GameEntity{

    public:

    enum GameEntityType {

        ExplosionType,
        MineType,
        NoneType,
        ShipType

    };

    private:

    std::tuple<int, int> position;
    GameEntityType type;

    public:

    GameEntity(int x, int y, char type): position(x, y) {}

    std::tuple<int, int> getPos(){ return position; }

    GameEntityType getType(){ return type; }

};

#endif