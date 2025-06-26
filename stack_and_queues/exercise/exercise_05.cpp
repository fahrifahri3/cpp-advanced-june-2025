#include <iostream>
#include <stack>
#include <string>
#include <sstream>

void readClothes(std::stack<int>& clothes) {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int clothingItem;

    while (iss >> clothingItem) {
        clothes.push(clothingItem);
    }
}

int main() {
    std::stack<int> clothes;
    readClothes(clothes);

    int rackCapacity;
    std::cin >> rackCapacity;

    int rackCount = 0;
    int currentRackCapacity = -1;

    while (!clothes.empty()) {
        if (clothes.top() > currentRackCapacity) {
            currentRackCapacity = rackCapacity;
            rackCount++;
        }

        currentRackCapacity -= clothes.top();
        clothes.pop();
    }

    std::cout << rackCount << std::endl;
    return 0;
}