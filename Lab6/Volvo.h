#include "Car.h"

class Volvo : public Car {
private:
    double fuelCapacity=40;
    double fuelConsumption=6;

public:
    Volvo();
    double getFuelCapacity() const override;
    double getFuelConsumption() const override;
    double getAverageSpeed(Weather weather) const override;
    double calculateRange() const override;
    //double getFinishTime() override;

    void showcase() override;
};