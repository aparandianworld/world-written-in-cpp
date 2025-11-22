#include <iostream>
#include <string>
#include <fstream>

int main() {

    std::string input_filename = "./input.txt";
    std::string line;
    std::ifstream fin;

    int numLines = 0;

    fin.open(input_filename);
    if (fin.fail()) {
        std::cout << "Failed to open file: " << input_filename << std::endl;
        return 1;
    } else {
        while (!fin.eof()) {
            std::getline(fin, line);
            std::cout << line << std::endl;
            numLines++;
        }
        fin.close();
    }

    std::cout << "---" << std::endl;
    std::cout << "Number of lines in " << input_filename << ": " << numLines << std::endl;

    std::string output_filename = "./output.txt";
    std::ofstream fout;

    float a = 3.14f;
    float b = 5.92f;

    fout.open(output_filename);
    if (fout.fail()) {
        std::cout << "Failed to open file: " << output_filename << std::endl;
        return 1;
    } else {
        fout << "a = " << a << ", b = " << b << std::endl;
        fout << "a + b = " << a + b << std::endl;
        fout << "a - b = " << a - b << std::endl;
        fout << "a * b = " << a * b << std::endl;
        fout << "a / b = " << a / b << std::endl;
        fout.close();

        std::cout << "Results written to " << output_filename << "successfully." << std::endl;
    }

    std::cout << std::endl << std::endl;
    return 0;
}