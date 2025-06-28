#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>

void print(const std::set<std::string>& set) {
    bool first = true;

    for (const std::string& element : set) {
        if (first) {
            std::cout << element;
            first = false;
        } else {
            std::cout << ", "  << element;
        }
    }

    std::cout << std::endl;
}

int main() {
    std::set<std::string> words;

    std::string input;
    std::getline(std::cin, input);

    std::transform(input.begin(), input.end(), input.begin(), ::tolower);
    std::istringstream iss(input);
    std::string word;

    while (iss >> word) {
        if (word.size() < 5) {
            words.insert(word);
        }
    }

    print(words);
    return 0;
}