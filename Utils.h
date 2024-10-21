#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <tuple>
#include <cmath>

class Utils{

    public:

    Utils utils();

    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){

        int x = rand() % gridWidth;

        int y = rand() % gridHeight;

        std::tuple<int, int> position(x, y);

        return position;

    }

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){

        int x1 = std::get<0>(pos1);

        int y1 = std::get<1>(pos1);

        int x2 = std::get<0>(pos2);

        int y2 = std::get<1>(pos2);

        double distance = sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2));

        return distance;

    }

};

#endif