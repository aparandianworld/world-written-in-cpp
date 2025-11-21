#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

#include <string>

enum class ColorModern {
    Red,
    Yellow,
    Green
};

class TrafficLight {

public:
    TrafficLight(std::string location_i, ColorModern color_i, int secondsLeft_i);

    std::string getLocation() const;
    ColorModern getColor() const;
    std::string getColorString() const;
    int getTimeLeft() const;

    void setColor(ColorModern color_i);
    void setLocation(std::string location_i);
    void setTimeLeft(int secondsLeft_i);

    void printStatus() const;

private:
    std::string location;
    ColorModern color;
    int secondsLeft;
};

#endif // TRAFFIC_LIGHT_H