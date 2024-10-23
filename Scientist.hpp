#ifndef SCIENTIST_H
#define SCIENTIST_H

#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>

#include "GridItem.hpp"

class Scientist: public GridItem{

    private:

    int experimentCount;

    public:

    Scientist(int gridWidth, int gridHeight): GridItem(0, 0, gridWidth, gridHeight), experimentCount(0){}

    int getExperimentCount(){ return experimentCount; }

    void runExperiment(){
        experimentCount++;
    }

    bool move(int xOffset, int yOffset){

        if (xOffset + yOffset <= 2){
            return true;
        } else {
            return false;
        }
    }

};

#endif