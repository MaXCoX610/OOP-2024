#include "Circuit.h"

class RangeRover : public Car {
public:
    RangeRover() {
        fuel_capacity = 80.0; 
        fuel_consumption = 11.8; 
        AVGspd.rain = 120.0; 
        AVGspd.sunny = 130.0; 
        AVGspd.snow = 100.0; 
    }
};

//this is a big ass SUV