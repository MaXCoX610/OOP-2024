#include "Car.h"
#include "Weather.h"
#ifndef CIRCUIT_H
#define CIRCUIT_H
using namespace std;


class Circuit {   
    double length;
    Weather weather;
    vector<Car*> cars;

public:
    void SetLength(double length);
    void SetWeather(Weather weather);
    void AddCar(Car* car);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
};

#endif