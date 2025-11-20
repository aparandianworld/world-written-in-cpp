#include <iostream>

#define MAX_VALUE 100
#define DEBUG
bool debug_enabled = true;

int main() {

    int sum = 0;
    int num = 24;

#ifdef DEBUG
    std::cout << "[DEBUG method 1 (preprocessor flag)] num: " << num << std::endl;
#endif

    if (debug_enabled) {
        std::cout << "[DEBUG method 2 (runtime flag)] num: " << num << std::endl;
    }

    sum = num + MAX_VALUE;
    std::cout << "sum of " << num << " and " << MAX_VALUE << " is " << sum << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}