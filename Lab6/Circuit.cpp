#include "Circuit.h"
using namespace std;

void Circuit::Race() {
    for (Car* car : cars) {
        int nr_of_laps = 0;
        while (car->fuel_capacity > 0 && nr_of_laps * length < length) {
            double speed;
            switch (weather) {
                case Weather::Rain:
                    speed = car->AVGspd.rain;
                    break;
                case Weather::Sunny:
                    speed = car->AVGspd.sunny;
                    break;
                case Weather::Snow:
                    speed = car->AVGspd.snow;
                    break;
            }
            double travel_distance = speed; // distance covered in 1 hour
            double fuel_needed = (travel_distance / 100) * car->fuel_consumption;
            if (fuel_needed > car->fuel_capacity) {
                // adjust travel_distance based on the remaining fuel
                travel_distance = (car->fuel_capacity / car->fuel_consumption) * 100;
            }
            car->fuel_capacity -= fuel_needed;
            nr_of_laps += travel_distance / length;
        }
        // store the number of laps and whether the car finished the race
    }
}

void Circuit::SetLength(double length) {
    this->length = length;
}

void Circuit::SetWeather(Weather weather) {
    this->weather = weather;
}

void Circuit::AddCar(Car* car) {
    cars.push_back(car);
}