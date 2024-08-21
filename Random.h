#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>
#include <string>

using namespace std;

class Fruits{

    private:

    string fruit;
    int num_fruits;

    public:

    Fruits();

    Fruits(string fruits, int num_fruits);

    ~Fruits();

    string get_fruit(){return fruit;}

    int get_num_fruits(){return num_fruits;}

    void set_fruit(string new_fruit){fruit = new_fruit;}

    void set_num_fruits(int new_num_fruits){num_fruits = new_num_fruits;}

};

#endif