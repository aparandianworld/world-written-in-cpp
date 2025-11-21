#include <iostream>
#include <string>

int main() {

    float operand_1, operand_2, result;
    char operation;

    std::cout << "Enter operand 1: " << std::flush;
    std::cin >> operand_1;

    std::cout << "Enter operand 2: " << std::flush;
    std::cin >> operand_2;

    std::cout << "Enter operaation [ + - * /]: " << std::flush;
    std::cin >> operation;

    switch (operation) {
        case '+':
            result = operand_1 + operand_2;
            break;
        case '-':
            result = operand_1 - operand_2;
            break;
        case '*':
            result = operand_1 * operand_2;
            break;
        case '/':
            result = operand_1 / operand_2;
            break;
        default:
            std::cout << "Invalid operation" << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}