#include "TrafficLight.h"
#include <string>
#include <iostream>

TrafficLight::TrafficLight(std::string location_i, ColorModern color_i, int secondsLeft_i) {
    location = location_i;
    color = color_i;
    secondsLeft = secondsLeft_i;
} 

std::string TrafficLight::getLocation() const {
    return location;
}

ColorModern TrafficLight::getColor() const {
    return color;
}

std::string TrafficLight::getColorString() const {
    switch(color) {
        case ColorModern::Red:
            return "Red";
        case ColorModern::Yellow:
            return "Yellow";
        case ColorModern::Green:
            return "Green";
        default:
            return "Unknown";
    }
}

int TrafficLight::getTimeLeft() const {
    return secondsLeft;
}

void TrafficLight::setColor(ColorModern color_i) {
    color = color_i;
}

void TrafficLight::setLocation(std::string location_i) {
    location = location_i;
}

void TrafficLight::setTimeLeft(int secondsLeft_i) {
    secondsLeft = secondsLeft_i;
}

void TrafficLight::printStatus() const {
    std::cout << "Location: " << getLocation() << std::endl;
    std::cout << "Color: " << getColorString() << std::endl;
    std::cout << "Seconds Left: " << getTimeLeft() << std::endl;
}