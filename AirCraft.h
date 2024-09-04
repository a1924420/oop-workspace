#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <iostream>

class AirCraft{

    private:

    int weight;

    float fuel; 

    int numberOfFlights;

    public:

    AirCraft();

    AirCraft(int w); 

    void refuel();

    virtual void fly(int headwind, int minutes) = 0;

    int get_weight();

    float get_fuel();

    int get_numberOfFlights();

    void set_weight();

    void set_fuel();

    void set_numberOfFlights();

};

#endif