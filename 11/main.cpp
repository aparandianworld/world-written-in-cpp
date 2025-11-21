#include "TrafficLight.h"

#include <iostream>
#include <string>

int main() {

    TrafficLight *mainLight;
    TrafficLight *sideLight;

    mainLight = new TrafficLight("main street", ColorModern::Green, 15);
    sideLight = new TrafficLight("side street", ColorModern::Red, 24);

    mainLight -> printStatus();
    sideLight -> printStatus();

    std::cout << "---" << std::endl;

    mainLight -> setColor(ColorModern::Yellow);
    sideLight -> setColor(ColorModern::Green);

    mainLight -> printStatus();
    // another syntax
    (*sideLight).printStatus();

    std::cout << std::endl << std::endl;
    return 0;
}