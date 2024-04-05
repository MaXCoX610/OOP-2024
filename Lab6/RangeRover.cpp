//#include "BMW.h"
//
//
//double BMW::getAverageSpeed(Car::Weather weather) {
//    if (weather == Car::Weather::Rain) {
//        return 190.77;
//    }
//    if (weather == Car::Weather::Snow) {
//        return 170.112;
//    }
//    if (weather == Car::Weather::Sunny) {
//        return 420.69;
//    }
//}

#include "RangeRover.h"

RangeRover::RangeRover(){}
double RangeRover::getFuelCapacity() const {
    return fuelCapacity;
}

double RangeRover::getFuelConsumption() const {
    return fuelConsumption;
}

double RangeRover::getAverageSpeed(Weather condition) const {
    switch(condition){
        case Rain:
            return 200;
        case Sunny:
            return 220;
        case Snow:
            return 180;
    }    
}

double RangeRover::calculateRange() const {
    if (fuelConsumption != 0) {
        return fuelCapacity*fuelConsumption;
    }
    return 0;
}

void RangeRover::showcase() {
    std::cout << "RangeRover:"<<'\n'<<"Fuel Capacity: "<<getFuelCapacity()<<"  Fuel Consumption: "<<getFuelConsumption()<<" km per litre  Range: "<<calculateRange()<<"km"
        <<"  Avg speed:"<<getAverageSpeed(Weather::Rain)<<"(Rain) " << getAverageSpeed(Weather::Snow) << "(Snow) "<<getAverageSpeed(Weather::Sunny)<<"(Sunny) "<<'\n' << '\n';
}