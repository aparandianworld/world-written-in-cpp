#include <iostream>


int main() {

    int nums[5] = {20, 22, 29, 11, 15};
    float avg = 0.0f;

    // no loops
    avg = (nums[0] + nums[1] + nums[2] + nums[3] + nums[4]) / 5.0;
    std::cout << "Average: " << avg << std::endl;

    
    std::cout << std::endl << std::endl;
    return 0;
}