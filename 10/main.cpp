#include <iostream>

int main() {

    // pointer basics (TODO: look into smart pointers added in C++11 standard)

    int a = 32;
    int *ptr;

    ptr = &a;

    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl;
    std::cout << "Address of ptr: " << &ptr << std::endl;
    std::cout << "Value of *ptr: " << *ptr << std::endl;

    /*
    Value of a: 32
    Address of a: 0x16fd82658
    Value of ptr: 0x16fd82658
    Address of ptr: 0x16fd82650
    Value of *ptr: 32
    */

    std::cout << std::endl << std::endl;
    return 0;
}