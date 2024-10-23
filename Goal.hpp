#ifndef GOAL_H
#define GOAL_H

#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>

#include "GridItem.hpp"
#include "Interactable.hpp"
#include "Helper.hpp"

class Goal: public Interactable{

    private:

    public:

    Goal(int width, int height){
        this->width = width;
        this->height = height;
    }

    bool interact(Scientist* player) override {

        //int distance = manhattanDistance(player->getCoordinates(), (width, height));

        if (player->getExperimentCount() >= 1){
            return true;
        } else {
            return false;
        }
    }

    InteractableType getType() override {
        return Interactable::InteractableType::GOAL;
    }

};

#endif