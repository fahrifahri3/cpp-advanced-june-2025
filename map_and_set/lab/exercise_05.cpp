#include <iostream>
#include <set>
#include <string>
#include <sstream>

int main() {
    std::set<std::string> carNumbers;

    std::string input;
    std::getline(std::cin, input);

    while (input != "END") {
        const std::size_t pos = input.find(',');

        std::string direction, carNumber;
        direction = input.substr(0, pos);
        carNumber = input.substr(pos + 2);

        if (direction == "IN") {
            carNumbers.insert(carNumber);
        } else if (direction == "OUT") {
            carNumbers.erase(carNumber);
        }

        std::getline(std::cin, input);
    }

    if (carNumbers.empty()) {
        std::cout << "Parking Lot is Empty" << std::endl;
    } else {
        for (const std::string& carNumber : carNumbers) {
            std::cout << carNumber << std::endl;
        }
    }

    return 0;
}