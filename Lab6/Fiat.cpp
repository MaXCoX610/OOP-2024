#include "Fiat.h"

Fiat::Fiat(){}
double Fiat::getFuelCapacity() const {
    return fuelCapacity;
}

double Fiat::getFuelConsumption() const {
    return fuelConsumption;
}

double Fiat::getAverageSpeed(Weather condition) const {
    switch(condition){
        case Rain:
            return 200;
        case Sunny:
            return 220;
        case Snow:
            return 180;
    }    
}

double Fiat::calculateRange() const {
    if (fuelConsumption != 0) {
        return fuelCapacity*fuelConsumption;
    }
    return 0;
}

void Fiat::showcase() {
    std::cout << "Fiat:"<<'\n'<<"Fuel Capacity: "<<getFuelCapacity()<<"  Fuel Consumption: "<<getFuelConsumption()<<" km per litre  Range: "<<calculateRange()<<"km"
        <<"  Avg speed:"<<getAverageSpeed(Weather::Rain)<<"(Rain) " << getAverageSpeed(Weather::Snow) << "(Snow) "<<getAverageSpeed(Weather::Sunny)<<"(Sunny) "<<'\n' << '\n';
}