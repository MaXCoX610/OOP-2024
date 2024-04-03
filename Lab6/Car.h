#include <iostream>
#include <math.h>
#include <cstring>
#include <vector>

struct SpeedWhen {
    double rain, snow, sunny;
};

class Car {
public:
    virtual ~Car() = default;

protected:
    double fuel_capacity;
    double fuel_consumption;
    SpeedWhen AVGspd;
};

