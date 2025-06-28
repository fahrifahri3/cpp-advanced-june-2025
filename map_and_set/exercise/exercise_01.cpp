#include <iostream>
#include <map>
#include <string>
#include <sstream>

int main() {
   std::map<double, int> nums;

    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    double num;

    while (iss >> num) {
        nums[num]++;
    }

    for (const auto& [n, occ]: nums) {
        std::cout << n << " -> " << occ << std::endl;
    }

    return 0;
}