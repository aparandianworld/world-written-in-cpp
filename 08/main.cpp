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

class TrafficLight {

public:
    // constructor (same name as class)
    TrafficLight(std::string location_i, ColorModern color_i, int secondsLeft_i) {
        location = location_i;
        color = color_i;
        secondsLeft = secondsLeft_i;
    } 
    std::string getLocation() const {
        return location;
    }

    ColorModern getColor() const {
        return color;
    }

    int getTimeLeft() const {
        return secondsLeft;
    }

    void setColor(ColorModern color_i) {
        color = color_i;
    }

    void setLocation(std::string location_i) {
        location = location_i;
    }

private:
    std::string location;
    ColorModern color;
    int secondsLeft;
};

void printStatus(TrafficLight &light) {
    std::cout << "Location: " << light.getLocation() << std::endl;
    std::cout << "Color: " << static_cast<int> (light.getColor()) << std::endl;
    std::cout << "Seconds Left: " << light.getTimeLeft() << std::endl;
}

int main() {

    TrafficLight mainLight = TrafficLight("main street", ColorModern::Green, 15);
    TrafficLight sideLight = TrafficLight("side street", ColorModern::Red, 24);

    printStatus(mainLight);
    printStatus(sideLight);

    std::cout << "---" << std::endl;

    mainLight.setColor(ColorModern::Yellow);
    sideLight.setColor(ColorModern::Green);

    printStatus(mainLight);
    printStatus(sideLight);

    std::cout << std::endl << std::endl;
    return 0;
}