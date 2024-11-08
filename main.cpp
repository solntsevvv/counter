#include <iostream>
#include <string>
#include <cmath>

int main() {
    double number;
    double acc;
    std::string operation;
    
    std::cin >> number;
    if (std::cin.fail()) {
        std::cerr << "Error: Numeric operand expected" << std::endl;
    } else {
        acc = number;
        
        do {
            std::cin >> operation;
            if (operation == "=") {
                std::cout << acc << std::endl;
                continue;
            } else if (operation == "c"){
                acc = 0;
                continue;
            } else if (operation == "q"){
                break;
            } 

            std::cin >> number;
            if (std::cin.fail()) {
                std::cerr << "Error: Numeric operand expected" << std::endl;
                break;
            }

            if (operation == "+") {
                acc += number;
            } else if (operation == "-") {
                acc -= number;
            } else if (operation == "*") {
                acc *= number;
            } else if (operation == "/") {
                if (number == 0) {
                    acc = std::numeric_limits<double>::infinity();
                } else {
                    acc /= number;   
                }
            } else if (operation == "**") {
                acc = pow(acc, number);
            } else if (operation == ":"){
                acc = number;
            } else {
                std::cerr << "Error: Unknown token " << operation << std::endl;
                break;
            }

        } while(true);
    }
}

