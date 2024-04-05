#include "Car.h"

class BMW : public Car {
private:
    double fuelCapacity=60;
    double fuelConsumption=8;

public:
    BMW();

    //~BMW() override {}

    double getFuelCapacity() const override;
    double getFuelConsumption() const override;
    double getAverageSpeed(Weather weather) const override;
    double calculateRange() const override;
    //double getFinishTime() override;

    void showcase() override;
};