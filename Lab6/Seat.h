#include "Circuit.h"

class Seat : public Car {
public:
    Seat() {
        fuel_capacity = 35.0; 
        fuel_consumption = 6.0; 
        AVGspd.rain = 80.0; 
        AVGspd.sunny = 120.0; 
        AVGspd.snow = 50.0; 
    }
};

//this is some sort of hatchback