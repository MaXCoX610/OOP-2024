#include "Circuit.h"

class Volvo : public Car {
public:
    Volvo() {
        fuel_capacity = 60.0; 
        fuel_consumption = 7.0; 
        AVGspd.rain = 80.0; 
        AVGspd.sunny = 100.0; 
        AVGspd.snow = 65.0; 
    }
};

//this is an SUV 