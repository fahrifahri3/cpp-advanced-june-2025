#include <iostream>
#include <set>

std::set<int> read(const int& size) {
    std::set<int> set;

    for (int i = 0; i < size; i++) {
        int num;
        std::cin >> num;
        set.insert(num);
    }
    return set;
}

std::set<int> intersection(const std::set<int>& first, const std::set<int>& second) {
    std::set<int> set;

    for (const int num: first) {
        if (second.find(num) != second.end()) {
            set.insert(num);
        }
    }
    return set;
}

void print(const std::set<int>& set) {
    bool first = true;

    for (const int num: set) {
        if (!first) {
            std::cout << " " << num;
        } else {
            std::cout << num;
            first = false;
        }
    }
}

int main() {
    int firstSetSize, secondSetSize;
    std::cin >> firstSetSize >> secondSetSize;

    const std::set<int> firstSet = read(firstSetSize);
    const std::set<int> secondSet = read(secondSetSize);

    print(intersection(firstSet, secondSet));
    return 0;
}