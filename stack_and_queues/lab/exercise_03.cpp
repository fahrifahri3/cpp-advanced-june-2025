#include <iostream>
#include <string>
#include <sstream>

int evaluate(const std::string& str) {
    std::istringstream iss(str);
    int result;
    iss >> result;

    char op;
    int num;

    while (iss >> op >> num) {
        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::cout << evaluate(input) << std::endl;

    return 0;
}