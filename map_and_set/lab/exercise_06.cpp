#include <iostream>
#include <set>
#include <string>

int main() {
    int usernamesCount;
    std::cin >> usernamesCount;
    std::set<std::string> usernames;

    for (int i = 0; i < usernamesCount; i++) {
        std::string username;
        std::cin >> username;
        usernames.insert(username);
    }

    for (const std::string& username : usernames) {
        std::cout << username << std::endl;
    }
    
    return 0;
}