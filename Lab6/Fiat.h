#include "Car.h"

class Fiat : public Car {
private:
    double fuelCapacity=35;
    double fuelConsumption=4;

public:
    Fiat();

    //~BMW() override {}

    double getFuelCapacity() const override;
    double getFuelConsumption() const override;
    double getAverageSpeed(Weather weather) const override;
    double calculateRange() const override;
    //double getFinishTime() override;

    void showcase() override;
};