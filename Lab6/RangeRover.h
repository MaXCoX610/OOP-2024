#include "Car.h"

class RangeRover : public Car {
private:
    double fuelCapacity=60;
    double fuelConsumption=13;

public:
    RangeRover();

    //~BMW() override {}

    double getFuelCapacity() const override;
    double getFuelConsumption() const override;
    double getAverageSpeed(Weather weather) const override;
    double calculateRange() const override;
    //double getFinishTime() override;

    void showcase() override;
};