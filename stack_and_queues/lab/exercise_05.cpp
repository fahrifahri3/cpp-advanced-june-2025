#include <iostream>
#include <queue>
#include <string>
#include <sstream>

void read(std::queue<int>& q) {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int num;

    while (iss >> num) {
        if (num % 2 == 0) {
            q.push(num);
        }
    }
}

void print(std::queue<int> q) {
    while (q.size() > 1) {
        std::cout << q.front() << ", ";
        q.pop();
    }

    if (!q.empty()) {
        std::cout << q.front() << std::endl;
        q.pop();
    }
}

int main() {
    std::queue<int> queue;
    read(queue);

    print(queue);

    return 0;
}