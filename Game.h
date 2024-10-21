#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"

class Game {
private:
    std::vector<GameEntity*> entities;

public:
    std::vector<GameEntity*>& get_entities() {
        return entities;
    }

    void set_entities(const std::vector<GameEntity*>& entities) {
        this->entities = entities;
    }

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        for (int i = 0; i < numShips; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }

        for (int i = 0; i < numMines; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
        }

        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int iteration = 0; iteration < maxIterations; ++iteration) {
            for (auto entity : entities) {
                if (auto ship = dynamic_cast<Ship*>(entity)) {
                    ship->move(1, 0); // Move all ships to the right
                }
            }

            for (auto entity : entities) {
                if (auto mine = dynamic_cast<Mine*>(entity)) {
                    for (auto ship : entities) {
                        if (auto shipPtr = dynamic_cast<Ship*>(ship)) {
                            double distance = Utils::calculateDistance(shipPtr->getPos(), mine->getPos());
                            if (distance < mineDistanceThreshold) {
                                Explosion explosion = mine->explode();
                                std::cout << "Ship exploded at: (" << std::get<0>(explosion.getPos()) << ", " << std::get<1>(explosion.getPos()) << ")\n";
                            }
                        }
                    }
                }
            }

            // Check if all ships are destroyed
            if (std::all_of(entities.begin(), entities.end(), [](GameEntity* entity) {
                return entity->getType() != GameEntityType::ShipType;
            })) {
                std::cout << "All ships are destroyed!\n";
                break;
            }
        }
    }

    ~Game() {
        for (auto entity : entities) {
            delete entity;
        }
    }
};

#endif // GAME_H
