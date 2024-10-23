#ifndef GRIDITEM_H
#define GRIDITEM_H

#include <iostream>
#include <vector>
#include <tuple>

class GridItem{

    private:

    std::pair<int, int> coordinates;

    int width;

    int height;

    int activeGridItemCount;

    public:

    GridItem(int x, int y, int width, int height) : coordinates(x, y), width(width), height(height){}

    GridItem() : coordinates(0, 0), width(0), height(0){}

    void setCoordinates(int x, int y){
        this->coordinates = std::make_pair(x, y);
    }

    std::pair<int, int> getCoordinates(){ return coordinates; }

    int getGridWidth(){ return width; }

    int getGridHeight(){ return height; }

    int getActiveGridItemCount(){ return activeGridItemCount; }

    virtual ~GridItem() = 0;

};

#endif