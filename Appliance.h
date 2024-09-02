#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>

class Appliance {

    private:

    bool isOn;

    protected:

    int powerRating;

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