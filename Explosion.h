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

        entity = GameEntity(-1, -1, GameEntityType::NoneType);

    }

};

#endif