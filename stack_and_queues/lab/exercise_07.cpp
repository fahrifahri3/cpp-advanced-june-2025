#include <iostream>
#include <queue>
#include <string>
#include <sstream>

void read(std::queue<std::string>& q) {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::string str;

    while (iss >> str) {
        q.push(str);
    }
}

void rotate(const int n, std::queue<std::string>& q) {
    for (int i = 0; i < n; i++) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
    std::queue<std::string> queue;
    read(queue);

    int n;
    std::cin >> n;
    n--;

    while (queue.size() > 1) {
        rotate(n, queue);
        std::cout << "Removed " << queue.front() << std::endl;
        queue.pop();
    }

    if (!queue.empty()) {
        std::cout << "Last is " << queue.front() << std::endl;
        queue.pop();
    }

    return 0;
}