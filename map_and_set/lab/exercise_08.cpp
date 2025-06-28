#include <iostream>
#include <unordered_map>

int main() {
    int numbersCount;
    std::cin >> numbersCount;
    std::unordered_map<int, int> nums;

    for (int i = 0; i < numbersCount; i++) {
        int num;
        std::cin >> num;
        nums[num]++;
    }

    for (const auto& [num, occurrence] : nums) {
        if (occurrence % 2 == 0) {
            std::cout << num << std::endl;
            break;
        }
    }

    return 0;
}