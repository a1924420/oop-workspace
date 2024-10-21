#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>
#include <iostream>

enum class GameEntityType {
    ExplosionType,
    MineType,
    NoneType,
    ShipType
};

class GameEntity {
protected:
    std::tuple<int, int> position;
    GameEntityType type;

public:
    GameEntity(int x, int y, GameEntityType type) : position(x, y), type(type) {}

    std::tuple<int, int> getPos() const {
        return position;
    }

    GameEntityType getType() const {
        return type;
    }

    virtual void apply(GameEntity& entity) = 0; // Pure virtual function
};

#endif // GAME_ENTITY_H