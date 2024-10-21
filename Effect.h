#ifndef EFFECT_H
#define EFFECT_H

#include <iostream>
#include "GameEntity.h"

class Effect{

    virtual void apply(GameEntity& entity);

};

#endif