#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>

class Helper{

    private:

    public:

    int manhattanDistance(std::pair<int, int> item1, std::pair<int, int> item2){

        int distance = (abs(item2.first - item1.first) + abs(item2.second = item2.second));

        return distance;

    }

};

#endif