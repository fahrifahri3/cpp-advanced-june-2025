#include <iostream>
#include <stack>

int min(std::stack<int> s) {
    if (s.empty()) {
        return 0;
    }

    int min = s.top();
    s.pop();

    while (!s.empty()) {
        if (min > s.top()) {
            min = s.top();
        }
        s.pop();
    }

    return min;
}

int main() {
    int n, s, x;
    std::cin >> n >> s >> x;

    std::stack<int> stack;
    bool flag = false;

    for (int i = n - s; i > 0; i--) {
        int num;
        std::cin >> num;

        if (num == x) {
            flag = true;
            break;
        }

        stack.push(num);
    }

    if (flag) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << min(stack) << std::endl;
    }

    return 0;
}