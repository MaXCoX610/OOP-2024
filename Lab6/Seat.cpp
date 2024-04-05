#include "Seat.h"

Seat::Seat(){}
double Seat::getFuelCapacity() const {
    return fuelCapacity;
}

double Seat::getFuelConsumption() const {
    return fuelConsumption;
}

double Seat::getAverageSpeed(Weather condition) const {
    switch(condition){
        case Rain:
            return 200;
        case Sunny:
            return 220;
        case Snow:
            return 180;
    }    
}

double Seat::calculateRange() const {
    if (fuelConsumption != 0) {
        return fuelCapacity*fuelConsumption;
    }
    return 0;
}

void Seat::showcase() {
    std::cout << "Seat:"<<'\n'<<"Fuel Capacity: "<<getFuelCapacity()<<"  Fuel Consumption: "<<getFuelConsumption()<<" km per litre  Range: "<<calculateRange()<<"km"
        <<"  Avg speed:"<<getAverageSpeed(Weather::Rain)<<"(Rain) " << getAverageSpeed(Weather::Snow) << "(Snow) "<<getAverageSpeed(Weather::Sunny)<<"(Sunny) "<<'\n' << '\n';
}