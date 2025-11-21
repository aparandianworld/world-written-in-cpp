#include <iostream>

int main() {

    int num = 10;
    int &ref = num; // reference (alias) to num (unlike pointers it cannot be changed)

    std::cout << "num: " << num << std::endl;
    std::cout << "ref: " << ref << std::endl;
    std::cout << "&num: " << &num << std::endl;
    std::cout << "&ref: " << &ref << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}