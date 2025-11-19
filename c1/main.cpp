#include <iostream>
#include <string>

using namespace std;

int main() {
    std::string name;
    std::cout << "Enter your name: " << std::flush;
    std::cin >> name;
    std::cout << "Nice to meet you, " << name << " and welcome to cpp world!" << std::endl << std::flush;

    std::cout << std::endl << std::endl;
    return 0;
}