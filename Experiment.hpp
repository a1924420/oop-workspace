#ifndef EXPERIMENT_H
#define EXPERIMENT_H

#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>

#include "GridItem.hpp"
#include "Interactable.hpp"
#include "Helper.hpp"

class Experiment: public Interactable{

    private:

    public:

    Experiment(int x, int y, int width, int height): Interactable(x, y, width, height){}

    bool interact(Scientist* player) override {
        player->runExperiment();
    }

    InteractableType getType() override {
        return Interactable::InteractableType::EXPERIMENT;
    }

};

#endif