#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>

int main() {
    std::unordered_map<double, int> nums;
    std::vector<double> numsOrder;

    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    double num;

    while (iss >> num) {
        if (nums.find(num) == nums.end()) {
            numsOrder.push_back(num);
        }
        nums[num]++;
    }

    for (const double number : numsOrder) {
        std::cout << number << " - " << nums.at(number) << " times" << std::endl;
    }

    return 0;
}