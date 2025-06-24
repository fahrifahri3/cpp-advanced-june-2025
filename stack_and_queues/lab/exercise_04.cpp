#include <iostream>
#include <stack>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::stack<int> stack;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '(') {
            stack.push(i);
        } else if (input[i] == ')') {
            std::cout << input.substr(stack.top(), i - stack.top() + 1) << std::endl;
            stack.pop();
        }
    }

    return 0;
}