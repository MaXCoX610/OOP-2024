#include "Car.h"

using namespace std;

enum class Weather { Rain, Sunny, Snow };

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
