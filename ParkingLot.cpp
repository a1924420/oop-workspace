#include <iostream>
#include <string>
#include "ParkingLot.h"

ParkingLot::ParkingLot(int max) : max(max) {}

int ParkingLot::getCount() const {
    return count;
}

int ParkingLot::getMax() const{
    return max;
}

void ParkingLot::parkVehicle(Vehicle* vehicle){

    if (count >= max){
        std::cout << "The lot is full" << std::endl;
        delete vehicle;
        return;
    }

    for (int i = 0; i < max; i++){
        if (vehicles[i] == nullptr){
            vehicles[i] = vehicle;
            return;
        } 
    }
    std::cout << "The lot is full" << std::endl;

}

void ParkingLot::unparkVehicle(int ID){

    for (int i = 0; i < max; i++){
        if (vehicles[i]->getID() == ID){
            delete vehicles[i];
            count--;
            return;
        }
    }

    std::cout << "Vehicle not in the lot" << std::endl;

}

ParkingLot::~ParkingLot(){
    delete[] vehicles;
}