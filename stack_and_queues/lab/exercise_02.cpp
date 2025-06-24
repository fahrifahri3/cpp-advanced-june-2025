#include <iostream>
#include <stack>
#include <string>
#include <sstream>

void read(std::stack<int>& s) {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int num;

    while (iss >> num) {
        s.push(num);
    }
}

int sum(std::stack<int> s) {
    int sum = 0;

    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }

    return sum;
}

int main() {
    std::stack<int> stack;
    read(stack);

    std::string input;
    std::getline(std::cin, input);

    while (input != "end") {
        std::istringstream iss(input);
        std::string op;
        iss >> op;

        if (op == "add") {
            for (int i = 0; i < 2; i++) {
                int num;
                iss >> num;
                stack.push(num);
            }
        } else if (op == "remove") {
            int count;
            iss >> count;

            if (stack.size() >= count) {
                for (int i = 0; i < count; i++) {
                    stack.pop();
                }
            }
        }

        std::getline(std::cin, input);
    }

    std::cout << sum(stack) << std::endl;
    return 0;
}