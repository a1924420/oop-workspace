#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>

#include "GridItem.hpp"
#include "Interactable.hpp"
#include "Helper.hpp"
#include "Scientist.hpp"
#include "Goal.hpp"
#include "Experiment.hpp"

class Game{

    public:

    enum GameState{
        WIN,
        LOSE,
        PLAYING
    };

    private:

    int width;

    int height;

    std::vector<std::pair<int, int>> experimentCoordinates;

    public:

    Game(int width, int height, std::vector<std::pair<int, int>> experimentCoordinates): width(width), height(height), experimentCoordinates(experimentCoordinates){

        Scientist scientist(width, height);

        Goal goal(1, 1);

    }

    bool displayState(){

        if (Game::GameState::WIN){
            std::cout << "You win!" << std::endl;
            return true;
        } else if (Game::GameState::LOSE){
            std::cout << "You lose :(" << std::endl;
            return true;
        } else if (Game::GameState::PLAYING){
            std::cout << "Game on" << std::endl;
            return false;
        }
    }

};

#endif