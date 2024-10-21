#ifndef EXPLOSION_H
#define EXPLOSION_H

#include <iostream>
#include <tuple>

#include "GameEntity.h"
#include "Effect.h"

class Explosion: public GameEntity, public Effect {

    private:

    public:

    Explosion(int x, int y): GameEntity(x, y, GameEntityType::ExplosionType) {}

    void apply(GameEntity& entity) override {
        entity.setType(GameEntity::GameEntityType::NoneType);  
        entity.setPos(-1, -1);
    }

};

#endif