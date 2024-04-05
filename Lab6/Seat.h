#include "Car.h"

class Seat : public Car {
private:
    double fuelCapacity=25;
    double fuelConsumption=3;

public:
    Seat();
    double getFuelCapacity() const override;
    double getFuelConsumption() const override;
    double getAverageSpeed(Weather weather) const override;
    double calculateRange() const override;
    //double getFinishTime() override;

    void showcase() override;
};