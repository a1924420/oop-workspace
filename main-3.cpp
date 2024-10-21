#include <iostream>
#include <tuple>
#include <cmath>

#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include "Game.h"

int main(){

    Game game;

    game.initGame(5, 4, 12, 10);

    game.gameLoop(10, 3);

    return 0;
    
}