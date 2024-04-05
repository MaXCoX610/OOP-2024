#include "Volvo.h"

Volvo::Volvo(){}
double Volvo::getFuelCapacity() const {
    return fuelCapacity;
}

double Volvo::getFuelConsumption() const {
    return fuelConsumption;
}

double Volvo::getAverageSpeed(Weather condition) const {
    switch(condition){
        case Rain:
            return 200;
        case Sunny:
            return 220;
        case Snow:
            return 180;
    }    
}

double Volvo::calculateRange() const {
    if (fuelConsumption != 0) {
        return fuelCapacity*fuelConsumption;
    }
    return 0;
}

void Volvo::showcase() {
    std::cout << "Volvo:"<<'\n'<<"Fuel Capacity: "<<getFuelCapacity()<<"  Fuel Consumption: "<<getFuelConsumption()<<" km per litre  Range: "<<calculateRange()<<"km"
        <<"  Avg speed:"<<getAverageSpeed(Weather::Rain)<<"(Rain) " << getAverageSpeed(Weather::Snow) << "(Snow) "<<getAverageSpeed(Weather::Sunny)<<"(Sunny) "<<'\n' << '\n';
}