#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle{

    private:

    int ID;

    protected:

    std::time_t timeOfEntry;

    public:

    Vehicle (int ID);

    int getID() const;

    virtual int getParkingDuration() const = 0;

    virtual ~Vehicle();

};

#endif