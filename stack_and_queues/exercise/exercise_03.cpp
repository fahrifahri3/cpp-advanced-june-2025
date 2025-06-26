#include <iostream>
#include <stack>
#include <limits>

int max(std::stack<int> s) {
    int max = std::numeric_limits<int>::min();

    while (!s.empty()) {
        if (s.top() > max) {
            max = s.top();
        }
        s.pop();
    }

    return max;
}

int min(std::stack<int> s) {
    int min = std::numeric_limits<int>::max();

    while (!s.empty()) {
        if (s.top() < min) {
            min = s.top();
        }
        s.pop();
    }

    return min;
}

void print(std::stack<int> s) {
    while (s.size() > 1) {
        std::cout << s.top() << ", ";
        s.pop();
    }

    if (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }
}

int main() {
    int n;
    std::cin >> n;
    std::stack<int> stack;

    for (int i = 0; i < n; i++) {
        char op;
        std::cin >> op;

        if (op == '1') {
            int num;
            std::cin >> num;
            stack.push(num);
        } else if (!stack.empty()) {
            if (op == '2') {
                stack.pop();
            } else if (op == '3') {
                std::cout << max(stack) << std::endl;
            } else if (op == '4') {
                std::cout << min(stack) << std::endl;
            }
        }
    }

    print(stack);
    return 0;
}