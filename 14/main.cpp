#include "TrafficLight.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    std::vector<TrafficLight> trafficLights;

    trafficLights.push_back(TrafficLight("main street", ColorModern::Green, 15));
    trafficLights.push_back(TrafficLight("1st street", ColorModern::Yellow, 25));
    trafficLights.push_back(TrafficLight("2nd street", ColorModern::Red, 9));
    trafficLights.push_back(TrafficLight("3rd street", ColorModern::Green, 17));
    trafficLights.push_back(TrafficLight("4th street", ColorModern::Yellow, 35));
    trafficLights.push_back(TrafficLight("5th street", ColorModern::Red, 19));

    
    cout << "Traffic lights size: " << trafficLights.size() << endl;
    
    cout << "First traffic light location: " << trafficLights.begin()->getLocation() << endl;
    cout << "First traffic light color: " << trafficLights.begin()->getColorString() << endl;
    cout << "First traffic light time left: " << trafficLights.begin()->getTimeLeft() << endl;

    cout << "---" << endl;

    cout << "Last traffic light location: " << (trafficLights.end()-1)->getLocation() << endl;
    cout << "Last traffic light color: " << (trafficLights.end()-1)->getColorString() << endl;
    cout << "Last traffic light time left: " << (trafficLights.end()-1)->getTimeLeft() << endl;

    cout << "---" << endl;

    cout << "Second to last traffic light location: " << prev((trafficLights.end() - 1))->getLocation() << endl;
    cout << "Second to last traffic light color: " << prev((trafficLights.end() - 1))->getColorString() << endl;
    cout << "Second to last traffic light time left: " << prev((trafficLights.end() - 1))->getTimeLeft() << endl;
    


    cout << endl << endl;
    return 0;
}