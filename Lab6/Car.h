#include <iostream>
#include <math.h>
#include <cstring>
#include <vector>
#ifndef CAR_H
#define CAR_H

struct SpeedWhen {
    int rain, snow, sunny;
};

class Car {
public:
    virtual ~Car() = default;
    double fuel_capacity;
    double fuel_consumption;
    SpeedWhen AVGspd;
};

#endif