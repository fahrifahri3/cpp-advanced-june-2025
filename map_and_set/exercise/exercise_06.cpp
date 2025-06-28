#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <cmath>

bool isSquare(const int num) {
    if (num < 0) {
        return false;
    }
    const int root = static_cast<int>(std::sqrt(num));
    return root * root == num;
}

void print(const std::multiset<int, std::greater<>>& set) {
    bool first = true;

    for (const int num: set) {
        if (first) {
            std::cout << num;
            first = false;
        } else {
            std::cout << " " << num;
        }
    }
    std::cout << std::endl;
}

int main() {
    std::multiset<int, std::greater<>> nums;

    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int num;

    while (iss >> num) {
        if (isSquare(num)) {
            nums.insert(num);
        }
    }

    print(nums);
    return 0;
}