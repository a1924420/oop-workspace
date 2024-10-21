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

            for (size_t j = 0; j < entities.size(); j++){

                if (Ship* ship = dynamic_cast<Ship*>(entities[j])){
                    ship->move(1, 0);
                }
            }

            for (size_t j = 0; j < entities.size(); j++){

            if (Mine* mine = dynamic_cast<Mine*>(entities[j])){

                if (mine->getType() == GameEntity::GameEntityType::NoneType) {
                    continue; 
                }

                for (size_t k = 0; k < entities.size(); k++){
                    if (Ship* ship = dynamic_cast<Ship*>(entities[k])){

                        double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());

                        if (distance < mineDistanceThreshold){

                            mine->explode();

                            std::cout << "Mine exploded!" << std::endl;

                            break;  
                        }
                    }
                }
            }
        }

            bool allShipsDestroyed = true;

            for (size_t j = 0; j < entities.size(); j++){

                if (Ship* ship = dynamic_cast<Ship*>(entities[j])){

                    if (ship->getType() != GameEntity::GameEntityType::NoneType){
                        allShipsDestroyed = false;
                        break;
                    }
                }
            }

            if (allShipsDestroyed == true){

                std::cout << "All ships have been destroyed." << std::endl;
                break;

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