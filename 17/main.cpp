#include <iostream>
#include <string>

void addTenByValue(int num_i) {
    num_i += 10;
    std::cout << "num (inside addTenByValue): " << num_i << std::endl;
}

void addTenByReference(int& num_i) {
    num_i += 10;
    std::cout << "num (inside addTenByReference): " << num_i << std::endl;
}

void addTenByPointer(int* num_i) {
    *num_i += 10;
    std::cout << "num (inside addTenByPointer): " << *num_i << std::endl;
}

int main() {

    int num = 10;
    int& num_ref = num;
    int* num_ptr =&num;

    std::cout << "num (inside main): " << num << std::endl;
    addTenByValue(num);
    
    std::cout << "---" << std::endl;
    std::cout << "num (inside main): " << num << std::endl;
    std::cout << "num_ref (inside main): " << num_ref << std::endl;
    addTenByReference(num_ref);
    
    std::cout << "---" << std::endl;
    std::cout << "num (inside main): " << num << std::endl;
    std::cout << "*num_ptr (inside main): " << *num_ptr << std::endl;
    addTenByReference(*num_ptr);
    
    std::cout << std::endl << std::endl;
    return 0;
}