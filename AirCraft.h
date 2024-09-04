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

    virtual void fly(int headwind, int minutes){ numberOfFlights++;}

    int get_weight();

    float get_fuel();

    int get_numberOfFlights();

    void set_weight(int weight);

    void set_fuel(int fuel);

    void set_numberOfFlights(int numberOfFlights);

};

#endif