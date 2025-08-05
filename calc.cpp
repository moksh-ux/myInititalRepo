#include <iostream>

int main() {
    double num1, num2, result;
    char op;

    std::cout << "Simple Calculator" << std::endl;
    std::cout << "Enter first number: ";
    std::cin >> num1;


    //fwefewfwf
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << result << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operator." << std::endl;
    }
}