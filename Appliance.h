#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>

class Appliance {

    private:

    int powerRating;

    bool isOn;

    public:

    Appliance();

    Appliance (int powerRating);

    void turnOn();

    void turnOff();

    virtual double getPowerConsumption ();

    int get_powerRating() const;

    bool get_isOn() const;

    void set_powerRating(int powerRating);

    void set_isOn(bool isOn);

};

#endif