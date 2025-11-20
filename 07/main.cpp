#include <iostream>
#include <string>

enum Color {
    Red, 
    Yellow,
    Green
};

enum class ColorModern {
    Red,
    Yellow,
    Green
};

struct TrafficLight {
    std::string location;
    ColorModern color;
    int secondsLeft;
};

void printStatus(TrafficLight *light) {
    std::cout << "Location: " << light->location << std::endl;
    std::cout << "Color: " << static_cast<int> (light -> color) << std::endl;
    std::cout << "Seconds Left: " << light -> secondsLeft << std::endl;
}

int main() {

    TrafficLight mainLight;
    mainLight.location = "main street";
    mainLight.color = ColorModern::Green;
    mainLight.secondsLeft = 15;

    TrafficLight sideLight;
    sideLight.location = "side street";
    sideLight.color = ColorModern::Red;
    sideLight.secondsLeft = 24;

    printStatus(&mainLight);
    printStatus(&sideLight);

    std::cout << std::endl << std::endl;
    return 0;
}