#include <iostream>
#include "Game.h"

int main() {
    Game game;
    game.initGame(5, 5, 10, 10); // Create 5 ships and 5 mines

    game.gameLoop(10, 2.0); // Run the game loop with 10 iterations and a distance threshold of 2.0

    return 0;
}
