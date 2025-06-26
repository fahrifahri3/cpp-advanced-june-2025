#include <iostream>
#include <queue>
#include <string>
#include <sstream>
#include <limits>

void readOrders(std::queue<int>& orders) {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int order;

    while (iss >> order) {
        orders.push(order);
    }
}

int max(std::queue<int> q) {
    int max = std::numeric_limits<int>::min();

    while (!q.empty()) {
        if (q.front() > max) {
            max = q.front();
        }
        q.pop();
    }

    return max;
}

void printOrders(std::queue<int>& orders) {
    while (orders.size() > 1) {
        std::cout << orders.front() << " ";
        orders.pop();
    }

    std::cout << orders.front() << std::endl;
}

int main() {
    int foodQuantity;
    std::cin >> foodQuantity;
    std::cin.ignore();

    std::queue<int> orders;
    readOrders(orders);

    std::cout << max(orders) << std::endl;

    while (!orders.empty()) {
        if (orders.front() > foodQuantity) {
            break;
        }

        foodQuantity -= orders.front();
        orders.pop();
    }

    if (orders.empty()) {
        std::cout << "Orders complete" << std::endl;
    } else {
        std::cout << "Orders left: ";
        printOrders(orders);
    }

    return 0;
}