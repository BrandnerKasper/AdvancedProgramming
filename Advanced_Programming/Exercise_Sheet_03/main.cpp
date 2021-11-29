#include <iostream>

#include "temperatureRegulator.h"

int main(){
    std::cout << "Hello World!" << std::endl;

    /* EXERCISE 2 SINGLETON PATTERN */

    auto& temperatureR = TemperatureRegulator::instance();
    temperatureR.print();
    temperatureR.setTemperature(32);
    temperatureR.print();

    int temporary_temperature = temperatureR.getTemperature();

}

