#include <iostream>
#include <map>
#include <set>
#include <string>

void print(const std::set<std::string>& set) {
    bool first = true;

    for (const std::string& str : set) {
        if (!first) {
            std::cout << ", " << str;
        } else {
            std::cout << str;
            first = false;
        }
    }
    std::cout << std::endl;
}

int main() {
    int citiesCount;
    std::cin >> citiesCount;
    std::map<std::string, std::map<std::string, std::set<std::string>>> continents;

    for (int i = 0; i < citiesCount; i++) {
        std::string continent, country, city;
        std::cin >> continent >> country >> city;
        continents[continent][country].insert(city);
    }

    for (const auto& [continent, countries] : continents) {
        std::cout << continent << ":" << std::endl;

        for (const auto& [country, cities] : countries) {
            std::cout << "  " << country << " -> ";
            print(cities);
        }
    }

    return 0;
}