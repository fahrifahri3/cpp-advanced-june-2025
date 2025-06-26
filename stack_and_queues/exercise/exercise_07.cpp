#include <iostream>
#include <stack>
#include <string>

bool isMatching(const char openingBracket, const char closingBracket) {
    return (openingBracket == '(' && closingBracket == ')') ||
           (openingBracket == '{' && closingBracket == '}') ||
           (openingBracket == '[' && closingBracket == ']');
}

bool isBalanced(const std::string& brackets) {
    std::stack<char> openingBrackets;

    for (const char bracket : brackets) {
        if (bracket == '(' || bracket == '{' || bracket == '[') {
            openingBrackets.push(bracket);
        } else {
            if (openingBrackets.empty() || !isMatching(openingBrackets.top(), bracket)) {
                return false;
            }
            openingBrackets.pop();
        }
    }

    return true;
}

int main() {
    std::string brackets;
    std::getline(std::cin, brackets);

    if (isBalanced(brackets)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}