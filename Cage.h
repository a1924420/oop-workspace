#ifndef CAGE_H
#define CAGE_H

#include <iostream>
#include <string>

class Cage{

    private:

    std::string name;

    int number;

    public:

    Cage();

    Cage(std::string newName, int newNumber);

    std::string getName(){return name;}

    int getIDnum(){return number;}

    ~Cage();

};

#endif