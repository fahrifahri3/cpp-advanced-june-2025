#include <iostream>
#include <queue>

int min(std::queue<int> q) {
    if (q.empty()) {
        return 0;
    }

    int min = q.front();
    q.pop();

    while (!q.empty()) {
        if (min > q.front()) {
            min = q.front();
        }
        q.pop();
    }

    return min;
}

int main() {
    int n, s, x;
    std::cin >> n >> s >> x;

    std::queue<int> queue;
    bool flag = false;

    for (int i = 0; i < s; i++) {
        int num;
        std::cin >> num;
    }

    for (int i = n - s; i > 0; i--) {
        int num;
        std::cin >> num;

        if (num == x) {
            flag = true;
            break;
        }

        queue.push(num);
    }

    if (flag) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << min(queue) << std::endl;
    }

    return 0;
}