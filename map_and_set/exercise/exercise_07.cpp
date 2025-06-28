#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

int main() {
    std::unordered_map<std::string, int> resources;
    std::vector<std::string> resourcesOrder;

    std::string resource;
    std::cin >> resource;

    while (resource != "stop") {
        if (resources.find(resource) == resources.end()) {
            resourcesOrder.push_back(resource);
        }
        int quantity;
        std::cin >> quantity;
        resources[resource] += quantity;
        std::cin >> resource;
    }

    for (const std::string& res : resourcesOrder) {
        std::cout << res << " -> " << resources[res] << std::endl;
    }

    return 0;
}