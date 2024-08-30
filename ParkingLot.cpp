#include <iostream>
#include <string>
#include "ParkingLot.h"

ParkingLot::ParkingLot(int max) : max(max), count(0) {
    vehicles = new Vehicle*[max];
    for (int i = 0; i < max; i++){
        vehicles[i] = nullptr;
    }
}

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
            count++;
            return;
        } 
    }
    std::cout << "The lot is full" << std::endl;
    delete vehicle;

}

void ParkingLot::unparkVehicle(int ID){

    for (int i = 0; i < max; i++){
        if (vehicles[i] != nullptr && vehicles[i]->getID() == ID) {
            delete vehicles[i];
            vehicles[i] = nullptr;
            count--;
            return;
        }
    }

    std::cout << "Vehicle not in the lot" << std::endl;

}

ParkingLot::~ParkingLot(){
    for (int i = 0; i < max; i++){
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){

    int overstayingCount = 0;

    for (int i = 0; i < max; i++){
        if (vehicles[i] != nullptr){
            int parkingDuration = vehicles[i]->getParkingDuration();
            if (parkingDuration > maxParkingDuration){
                overstayingCount++;
            }
        }     
    }

    return overstayingCount;
}