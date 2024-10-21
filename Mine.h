#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity {
public:
    Mine(int x, int y) : GameEntity(x, y, GameEntityType::MineType) {}

    Explosion explode() {
        Explosion explosion(std::get<0>(position), std::get<1>(position));
        type = GameEntityType::NoneType; // Change type to NoneType after exploding
        return explosion;
    }

    void apply(GameEntity& entity) override {
        // Implement effect if needed
    }
};

#endif // MINE_H
