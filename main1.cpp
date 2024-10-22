#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "Ship.h"
#include "Fighter.h"
#include "Cruiser.h"
#include "Battleship.h"
#include "SpaceBattle.h"

int main(){

    Fighter* f1 = new Fighter("f1", Ship::ShipType::Fighter, 100, 30, 50, 60);

    Cruiser* c1 = new Cruiser("c1", Ship::ShipType::Cruiser, 100, 20, 50, 60);

    Battleship* b1 = new Battleship("b1", Ship::ShipType::Battleship, 80, 50, 50, 60);

    Fighter* f2 = new Fighter("f2", Ship::ShipType::Fighter, 100, 30, 50, 60);

    Cruiser* c2 = new Cruiser("c2", Ship::ShipType::Cruiser, 100, 20, 50, 60);

    Battleship* b2 = new Battleship("b2", Ship::ShipType::Battleship, 80, 50, 50, 60);

    Fighter* f3 = new Fighter("f3", Ship::ShipType::Fighter, 100, 30, 50, 60);

    Cruiser* c3 = new Cruiser("c3", Ship::ShipType::Cruiser, 100, 20, 50, 60);

    Battleship* b3 = new Battleship("b3", Ship::ShipType::Battleship, 80, 50, 50, 60);

    SpaceBattle spaceBattle;

    spaceBattle.addShip(f1);

    spaceBattle.addShip(c1);
    
    spaceBattle.addShip(b1);

    spaceBattle.addShip(f2);

    spaceBattle.addShip(c2);

    spaceBattle.addShip(b2);

    spaceBattle.addShip(f3);

    spaceBattle.addShip(c3);

    spaceBattle.addShip(b3);

    spaceBattle.startBattle();

    return 0;

}