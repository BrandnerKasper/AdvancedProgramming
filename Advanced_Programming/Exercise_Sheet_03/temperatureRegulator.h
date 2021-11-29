#ifndef A_P_EX_03_TEMPERATUREREGULATOR_H
#define A_P_EX_03_TEMPERATUREREGULATOR_H

#include <iostream>
#include <string>


class TemperatureRegulator {

public:
    static TemperatureRegulator& instance();
    void setTemperature(int temp) {temperature = temp;}
    int getTemperature() {return temperature;}
    void print() {std::cout << "The temperature is " + std::to_string(temperature) + " Celsius." << std::endl;}
private:
    TemperatureRegulator();
    ~TemperatureRegulator();

private:
    int temperature = 0;

};


#endif //A_P_EX_03_TEMPERATUREREGULATOR_H
