#include <iostream>
#include <set>
#include <string>
#include <sstream>

std::set<double, std::greater<>> read() {
    std::set<double, std::greater<>> map;

    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    double num;

    while (iss >> num) {
        map.insert(num);
    }

    return map;
}


int main() {
    const std::set<double, std::greater<>> nums = read();
    bool first = true;

    if (nums.size() < 3) {
        for (const double num: nums) {
            if (first) {
                std::cout << num;
                first = false;
            } else {
                std::cout << " " << num;
            }
        }
    } else {
        int count = 0;

        for (const double num: nums) {
            if (first) {
                std::cout << num;
                first = false;
            } else {
                std::cout << " " << num;
            }

            if (++count == 3) {
                break;
            }
        }
    }

    std::cout << std::endl;
    return 0;
}