#include <iostream>
#include <tuple>
#include <cmath>

#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main(){

    Ship ship(4, 6);

    std::cout << "Ship Position: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;

    Mine mine(7, 2);

    std::cout << "Mine Position: " << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << std::endl;

    ship.move(1, 3);

    std::cout << "New Ship Position: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;

    Explosion explosion = mine.explode();

    std::cout << "Mine exploded at: (" << std::get<0>(explosion.getPos()) << ", " << std::get<1>(explosion.getPos()) << ")\n";
    std::cout << "Mine type after explosion: " << static_cast<int>(mine.getType()) << "\n";

    explosion.apply(ship);

    std::cout << "Ship type after explosion effect: " << static_cast<int>(ship.getType()) << "\n";

    return 0;

}