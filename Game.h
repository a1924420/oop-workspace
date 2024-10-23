#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <tuple>
#include <vector>

#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

class Game{

    private:

    std::vector<GameEntity*> entities;



    public:

    std::vector<GameEntity*> get_entities(){ return entities; }

    void set_entities(std::vector<GameEntity*> entities){
        this->entities = entities;
    }

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){

        for(int i = 0; i < numShips; i++){

            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);

            int x = std::get<0>(pos);

            int y = std::get<1>(pos);

            entities.push_back(new Ship(x, y));

        }

        for(int i = 0; i < numMines; i++){

            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);

            int x = std::get<0>(pos);

            int y = std::get<1>(pos);

            entities.push_back(new Mine(x, y));

        }

        return entities;

    }

    void gameLoop(int maxIterations, double mineDistanceThreshold){

        for (int i = 0; i < maxIterations; i++){

            for (int j = 0; j < entities.size(); j++){

                if (entities[j]->getType() == GameEntity::GameEntityType::ShipType){
                    Ship* ship = dynamic_cast<Ship*>(entities[j]);
                    ship->move(1,0);
                }
            }

            std::vector<int> minesToDelete;

            for (int k = 0; k < entities.size(); k++){
                if (Mine* mine = dynamic_cast<Mine*>(entities[k])){

                    if (mine->getType() == GameEntity::GameEntityType::NoneType){

                        continue;

                    } else {

                        for (int m = 0; m < entities.size(); m++){

                            if (Ship* ship = dynamic_cast<Ship*>(entities[m])) {

                                double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());

                                if (distance < mineDistanceThreshold){

                                    mine->explode();

                                    Explosion explosion(-1, -1);

                                    explosion.apply(*ship);

                                    minesToDelete.push_back(k);

                                    break;
                                }
                            }
                        }

                        for (int idx : minesToDelete) {
                            delete entities[idx];  
                            entities.erase(entities.begin() + idx);  
                        }

                        for (int n = 0; n < entities.size(); n++){
                            if (entities[n]->getType() == GameEntity::GameEntityType::NoneType){
                                delete entities[n];
                                entities.erase(entities.begin() + n);
                            } else { n++; }
                        }

                    }
                }

                bool allShipsDestroyed = true;
                for (size_t j = 0; j < entities.size(); j++) {
                    if (Ship* ship = dynamic_cast<Ship*>(entities[j])) {
                        if (ship->getType() != GameEntity::GameEntityType::NoneType) {
                            allShipsDestroyed = false;
                            break;
                        }
                    }
                }

                if (allShipsDestroyed) {
                    break;
                }
            }

        }

    }

    ~Game() {
        for (size_t j = 0; j < entities.size(); j++) {
            delete entities[j];
        }
    }

};

#endif