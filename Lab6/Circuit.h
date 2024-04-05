#include "Car.h"
#include <vector>
#include <algorithm>

class Circuit{
private:
    std::vector<Car*> cars;

    Car* carss[20];

    Car** carsss;

    int nrOfCars;
    Weather weather;
    double circuitLength;
public:
    Circuit();
    //Circuit(unsigned int nrOfCars);
    void Race();
    void SetWeather(Weather conditon);
    void SetLength(double length);
    void AddCar(Car *car);
    void ShowcaseAll();
    double getFinishTime(Car *car);
    //bool compareBySpeed(const Car* a, const Car* b);
};