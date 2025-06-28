#include <iostream>
#include <set>
#include <string>
#include <sstream>

void print(const std::set<int>& set) {
    bool first = true;

    for (const int num : set) {
        if (first) {
            std::cout << num;
            first = false;
        } else {
            std::cout << " <= "  << num;
        }
    }
    std::cout << std::endl;
}

int main() {
    std::set<int> nums;

    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int num;

    while (iss >> num) {
        nums.insert(num);
    }

    print(nums);
    return 0;
}