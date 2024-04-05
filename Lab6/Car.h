#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
#include "Weather.h"

class Car {
public:
    virtual ~Car() {}

    //virtual double getFinishTime() const = 0;

    virtual double getFuelCapacity() const = 0;

    virtual double getFuelConsumption() const = 0;

    virtual double getAverageSpeed(Weather conditions) const = 0;

    virtual double calculateRange() const = 0;

    virtual void showcase() = 0;
};

#endif