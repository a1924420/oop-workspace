#ifndef INTERACTABLE_H
#define INTERACTABLE_H

#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>

#include "GridItem.hpp"
#include "Scientist.hpp"

enum class InteractableType{
        GOAL,
        EXPERIMENT
    };


class Interactable: public GridItem{

    public:

    
    private:

    int activeGridItemCount;

    public:

    Interactable(int x, int y, int width, int height): GridItem(x, y, width, height){
        activeGridItemCount++;
    }

    Interactable(): GridItem(){}

    virtual bool interact(Scientist* player) = 0;

    virtual InteractableType getType() = 0;

    int getActiveInteractableCount(){ return activeGridItemCount; }

    ~Interactable(){
        activeGridItemCount--;
    }

};

#endif