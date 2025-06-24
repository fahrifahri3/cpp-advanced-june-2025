#include <iostream>
#include <string>

void printReverse(const std::string& str) {
    for (std::string::size_type i = str.size(); i-- > 0;) {
        std::cout << str[i];
    }
    std::cout << std::endl;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    printReverse(input);

    return 0;
}