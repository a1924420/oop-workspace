#ifndef EFFECT_H
#define EFFECT_H

#include <iostream>
#include <tuple>
#include "GameEntity.h"

class Effect{

    virtual void apply(GameEntity& entity);

};

#endif