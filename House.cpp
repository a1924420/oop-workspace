#include <iostream>
#include "Appliance.h"
#include "House.h"

House::House() : appliances(nullptr), numAppliances(0), currentAppliances(0) {}

House::House(int numAppliances) : numAppliances(numAppliances), currentAppliances(0) {
    appliances = new Appliance*[numAppliances];
    for (int i = 0; i < numAppliances; i++){
        appliances[i] = nullptr;
    }
}

bool House::addAppliance(Appliance* appliance){
    if (currentAppliances < numAppliances){
        appliances[currentAppliances++] = appliance;
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption(){
    double totalConsumption = 0.0;
    for (int i = 0; i < numAppliances; i++){
        if (appliances[i] != nullptr && appliances[i]->get_isOn()){
            totalConsumption += appliances[i]->getPowerConsumption();
        }
    }
    return totalConsumption;
}

House::~House(){
    delete[] appliances;
}