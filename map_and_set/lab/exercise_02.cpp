#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <iomanip>

int main() {
    int studentCount;
    std::cin >> studentCount;
    std::map<std::string, std::vector<double>> students;

    for (int i = 0; i < studentCount; i++) {
        std::string name;
        double grade;
        std::cin >> name >> grade;
        students[name].push_back(grade);
    }

    for (const auto& [name, grades]: students) {
        double gradesSum = 0.00;
        std::cout << name << " -> ";

        for (const double grade : grades) {
            gradesSum += grade;
            std::cout << std::fixed << std::setprecision(2) << grade << " ";
        }

        const double avg = gradesSum / static_cast<double>(grades.size());
        std::cout << "(avg: " << std::fixed << std::setprecision(2) << avg << ")" << std::endl;
    }

    return 0;
}