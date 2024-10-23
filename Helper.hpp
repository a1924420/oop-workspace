#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>

class Helper{

    private:

    public:

    static int manhattanDistance(std::pair<int, int> item1, std::pair<int, int> item2){

        int distance = (abs(item2.second - item2.first) + abs(item1.second = item1.first));

        return distance;

    }

};

#endif