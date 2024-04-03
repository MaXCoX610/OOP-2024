#include "Circuit.h"

class BMW : public Car {
public:
    BMW() {
        fuel_capacity = 40.0; 
        fuel_consumption = 8.5; 
        AVGspd.rain = 140.0; 
        AVGspd.sunny = 160.0; 
        AVGspd.snow = 60.0; 
    }
};

//this is a RWD M car