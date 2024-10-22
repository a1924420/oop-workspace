#ifndef SPACEBATTLE_H
#define SPACEBATTLE_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "Ship.h"
#include "Fighter.h"
#include "Cruiser.h"
#include "Battleship.h"

class SpaceBattle{

    private:

    std::vector<Ship*> ships;

    int turnCounter;

    bool isBattleOngoing;

    public:

    SpaceBattle(): turnCounter(0), isBattleOngoing(false){}

    void addShip(Ship* ship){
        ships.push_back(ship);
    }

    void startBattle() {
        isBattleOngoing = true;

        while (isBattleOngoing) {
            for (int i = 0; i < ships.size(); i++) {
                if (ships[i]->getHealth() > 0) {  
                    std::pair<std::string, int> result = ships[i]->attack();
                    std::string message = result.first;
                    int damage = result.second;

                    std::cout << "Damage: " << damage << std::endl;

                    ships[i]->setHealth(ships[i]->getHealth() - damage);

                    if (ships[i]->getHealth() <= 0) {
                        std::cout << ships[i]->getName() << " has been destroyed!" << std::endl;
                    }
                }
            }

            isBattleOngoing = std::any_of(ships.begin(), ships.end(), [](Ship* ship) {
                return ship->getHealth() > 0;  
            });

            if (!isBattleOngoing) {
                std::cout << "All ships have been destroyed! Game over." << std::endl;
            }
        }
    }

};

#endif