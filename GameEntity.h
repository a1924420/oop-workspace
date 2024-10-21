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
    int x, y;

    public:

    GameEntity(int x, int y, GameEntityType type): position(x, y), type(type) {}

    std::tuple<int, int> getPos(){ return position; }

    GameEntityType getType(){ return type; }

    void setType(GameEntityType newType) {
        this->type = newType;
    }

    void setPos(int x, int y) {
        this->x = x;
        this->y = y;
    }

    virtual ~GameEntity(){}

};

#endif