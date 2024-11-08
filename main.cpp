#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

int main() {
    double n, acc;
    std::string o;
    std::cin >> n;
    
    if (std::cin.fail()) {
        std::cerr << "Error: Numeric operand expected" << std::endl;
    } else {
        acc = n;

        while (true) {
            std::cin >> o;
                       
            if (o == "=") {
                std::cout << acc << std::endl;
                continue;
            } else if (o == "q") {
                break;
            } else if (o == "c") {
                acc = 0;
                continue;
            }
            
            std::cin >> n;
            
            if (std::cin.fail()) {
                std::cerr << "Error: Numeric operand expected" << std::endl;
                //std::cin.clear();
                break;
            }

            if (o == "+") {
                acc += n;
            } else if (o == "-") {
                acc -= n;
            } else if (o == "*") {
                acc *= n;
            } else if (o == "/") {
                if (n == 0) {
                    //std::cout << "inf" << std::endl;
                    acc = std::numeric_limits<double>::infinity();
                } else {
                    acc /= n;
                }
            } else if (o == "**") {
                acc = std::pow(acc, n);
            } else if (o == ":") {
                acc = n;
            } else if (o == "c") {
                acc = 0;
            } else {
                std::cerr << "Error: Unknown token " << o << std::endl;
                //std::cin.clear();
                break;
            }
        }
    }
}
