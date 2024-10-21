#include <iostream>
#include <tuple>
#include <cmath>

#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

int main(){

    GameEntity game(3, 5, GameEntity::NoneType);

    std::tuple<int, int> pos = game.getPos();

    std::cout << "Position: " << std::get<0>(pos) << ", " << std::get<1>(pos) << std::endl;

    Utils utils;

    std::tuple<int, int> randPos = utils.generateRandomPos(10, 12);

    std::cout << "Random Position: " << std::get<0>(randPos) << ", " << std::get<1>(randPos) << std::endl;

    double distance = utils.calculateDistance(pos, randPos);

    std::cout << "Distance: " << distance << std::endl;

    return 0;

}