#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>

void print(const std::unordered_map<std::string, int>& map, const std::vector<std::string>& vec) {
    bool first = true;

    for (const std::string& str: vec) {
        if (map.at(str) % 2 == 1 ) {
            if (first) {
                std::cout << str;
                first = false;
            } else {
                std::cout << ", " << str;
            }
        }
    }
    std::cout << std::endl;
}

int main() {
    std::unordered_map<std::string, int> words;
    std::vector<std::string> wordOrder;

    std::string input;
    std::getline(std::cin, input);
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);

    std::istringstream iss(input);
    std::string word;

    while (iss >> word) {
        if (words.find(word) == words.end()) {
            wordOrder.push_back(word);
        }
        words[word]++;
    }

    print(words, wordOrder);
    return 0;
}