#include <iostream>
#include <string>
#include <fstream>

int main() {

    std::string filename = "./input.txt";
    std::string line;
    std::ifstream fh;

    fh.open(filename);
    if (fh.fail()) {
        std::cout << "Failed to open file: " << filename << std::endl;
        return 1;
    } else {
        while (!fh.eof()) {
            std::getline(fh, line);
            std::cout << line << std::endl;
        }
        fh.close();
    }

    std::cout << std::endl << std::endl;
    return 0;
}