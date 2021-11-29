#include "temperatureRegulator.h"


TemperatureRegulator::TemperatureRegulator() {
    std::cout << "CONSTRUCTOR CALLED" << std::endl;
}

TemperatureRegulator::~TemperatureRegulator() {
    std::cout << "DESTRUCTOR CALLED" << std::endl;
}

TemperatureRegulator &TemperatureRegulator::instance() {
    static TemperatureRegulator INSTANCE;
    return INSTANCE;
}


