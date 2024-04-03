#include "Circuit.h"

class Fiat : public Car {
public:
    Fiat() {
        fuel_capacity = 25.0; 
        fuel_consumption = 4.2; 
        AVGspd.rain = 80.0; 
        AVGspd.sunny = 100.0; 
        AVGspd.snow = 45.0; 
    }
};

//this is a nimble compact car a fiat 500 maybe