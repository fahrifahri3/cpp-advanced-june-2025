#include <iostream>
#include <queue>
#include <string>

void print(std::queue<std::string>& q) {
    while (!q.empty()) {
        std::cout << q.front() << std::endl;
        q.pop();
    }
}

int main() {
    std::queue<std::string> queue;
    std::string input;
    std::cin >> input;

    while (input != "End") {
        if (input == "Paid") {
            print(queue);
        } else {
            queue.push(input);
        }

        std::cin >> input;
    }

    std::cout << queue.size() << " people remaining." << std::endl;
    return 0;
}