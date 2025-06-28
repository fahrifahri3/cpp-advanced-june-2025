#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

int main() {
    int namesCount;
    std::cin >> namesCount;

    std::unordered_set<std::string> names;
    std::vector<std::string> order;

    for (int i = 0; i < namesCount; i++) {
        std::string name;
        std::cin >> name;

        if (names.find(name) == names.end()) {
            names.insert(name);
            order.push_back(name);
        }
    }

    for (const std::string &name : order) {
        std::cout << name << std::endl;
    }

    return 0;
}