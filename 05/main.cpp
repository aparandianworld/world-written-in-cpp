#include <iostream>

int main() {

    float fnum;
    int32_t inum;
    uint32_t uintnum;

    fnum = -7.66f;
    inum = fnum; // implicit conversion
    uintnum = inum; // implicit conversion

    std::cout << "fnum: " << fnum << std::endl;
    std::cout << "inum: " << inum << std::endl;
    std::cout << "uintnum: " << uintnum << std::endl; // 2 ^ 32 - 7 because unintnum is unsigned int
    std::cout << "(int32_t)uintnum: " << (int32_t) uintnum << std::endl; // type conversion

    std::cout << std::endl << std::endl;
    return 0;

}