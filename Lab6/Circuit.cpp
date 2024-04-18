#include "Circuit.h"
Circuit::Circuit() {
    nrOfCars = 0;
}
void Circuit::AddCar(Car *car) {
    /*cars[nrOfCars] = car;
    nrOfCars++;*/

    carss[nrOfCars] = car;
    nrOfCars++;

    //cars.push_back(car);
    
}
void Circuit::SetWeather(Weather condition) {
    weather = condition;
    
}
void Circuit::SetLength(double length) {
    circuitLength = length;
}

void Circuit::ShowcaseAll() {
    std::cout << "The folowing cars are on track today: "<<'\n';
    /*for (const auto& carPtr : cars) {
        Car* car = carPtr;
        car->showcase();
    }*/
    
    for (int i = 0; i < nrOfCars; i++) {
        carss[i]->showcase();
    }
}

double Circuit::getFinishTime(Car* car) {
    if (car->calculateRange() < circuitLength)
        return 0;
    else {
        return circuitLength / car->getAverageSpeed(weather);
    }
}
//bool Circuit::compareBySpeed(const Car* a, const Car* b) {
//    return a->getAverageSpeed(weather) > b->getAverageSpeed(weather);
//}

void Circuit::Race() {
    //std::sort(cars.begin(), cars.end(), compareBySpeed);
    //std::sort(cars.begin(), cars.end(), [](Car* a, Car* b) { return a->getAverageSpeed(this->weather) < b->getAverageSpeed(); });

    /*unsigned int i;
    for (i = 0; i < nrOfCars; i++) {
        carss[i]->GetRaceTime(circuitLength, weather);
    }*/


    int nrCarsNotFinished = 0;
    for (int i = 0; i < nrOfCars; i++) {
        if (getFinishTime(carss[i]) == 0) {

        }
    }
    /*cars* leaderbord[nrOfCars];
    for()*/
}