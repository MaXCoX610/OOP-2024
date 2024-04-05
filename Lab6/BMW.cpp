#include "BMW.h"

BMW::BMW(){}
//BMW::~BMW() {};
double BMW::getFuelCapacity() const {
    return fuelCapacity;
}

double BMW::getFuelConsumption() const {
    return fuelConsumption;
}

double BMW::getAverageSpeed(Weather condition) const {
    switch(condition){
        case Rain:
            return 200;
        case Sunny:
            return 220;
        case Snow:
            return 180;
    }    
}

double BMW::calculateRange() const {
    if (fuelConsumption != 0) {
        return fuelCapacity*fuelConsumption;
    }
    return 0;
}

void BMW::showcase() {
    std::cout << "BMW:"<<'\n'<<"Fuel Capacity: "<<getFuelCapacity()<<"  Fuel Consumption: "<<getFuelConsumption()<<" km per litre  Range: "<<calculateRange()<<"km"
        <<"  Avg speed:"<<getAverageSpeed(Weather::Rain)<<"(Rain) " << getAverageSpeed(Weather::Snow) << "(Snow) "<<getAverageSpeed(Weather::Sunny)<<"(Sunny) "<<'\n' << '\n';
}