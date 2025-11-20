#include <iostream>
#include <string>
#include <cstring>

int main() {

    const size_t LENGTH = 255;

    char array_str1[LENGTH] = "This is a C-style string (array of chars) ";
    char array_str2[] = "This is also a C-style string (array of chars) ";

    std::string str1 = "This is a C++ string ";
    std::string str2 = "This is also a C++ string ";
    
    std::cout << "array_str1: " << array_str1 << std::endl;
    std::cout << "array_str2: " << array_str2 << std::endl;
    std::cout << "array_str1 + array_str2: " << strncat(array_str1, array_str2, LENGTH) << std::endl;
    
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;
    std::cout << "str1 + str2: " << str1 + str2 << std::endl; // operator overload of +

    std::cout << std::endl << std::endl;
    return 0;
}