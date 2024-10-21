#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    Ship ship(3, 4);
    Mine mine(5, 5);

    std::cout << "Ship initial position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";
    ship.move(1, 0); // Move the ship
    std::cout << "Ship new position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";

    Explosion explosion = mine.explode(); // Explode the mine
    std::cout << "Mine exploded at: (" << std::get<0>(explosion.getPos()) << ", " << std::get<1>(explosion.getPos()) << ")\n";

    return 0;
}
