#include <iostream>

// #define AGE_LENGTH 4

int main() {

    const size_t AGE_LENGTH = 4; // better way to define constants in C++

    int age[AGE_LENGTH];
    float temperatures[] = {24.5f, 25.6f, 26.7f, 27.8f};

    age[0] = 24;
    age[1] = 25;
    age[2] = 26;
    age[3] = 27;

    std::cout << "AGE_LENGTH:" << AGE_LENGTH << std::endl;
    std::cout << "Age[0]:" << age[0] << std::endl;
    std::cout << "Age[1]:" << age[1] << std::endl;
    std::cout << "Age[2]:" << age[2] << std::endl;
    std::cout << "Age[3]:" << age[3] << std::endl;
    std::cout << "---" << std::endl;
    std::cout << "Temperatures[0]:" << temperatures[0] << std::endl;
    std::cout << "Temperatures[1]:" << temperatures[1] << std::endl;
    std::cout << "Temperatures[2]:" << temperatures[2] << std::endl;
    std::cout << "Temperatures[3]:" << temperatures[3] << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}