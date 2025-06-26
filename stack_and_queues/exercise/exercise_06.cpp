#include <iostream>
#include <vector>

struct PetrolPump {
    long long petrol;
    long long distance;
};

void readPetrolPumps(const int petrolPumpsCount, std::vector<PetrolPump>& petrolPumps) {
    for (int i = 0; i < petrolPumpsCount; i++) {
        PetrolPump petrolPump;
        std::cin >> petrolPump.petrol >> petrolPump.distance;
        petrolPumps.push_back(petrolPump);
    }
}

int findStartingPump(const std::vector<PetrolPump>& pumps) {
    int startIndex = 0;
    long long totalSurplus = 0;
    long long currentSurplus = 0;

    for (int i = 0; i < pumps.size(); ++i) {
        const long long gain = pumps[i].petrol - pumps[i].distance;
        totalSurplus += gain;
        currentSurplus += gain;

        if (currentSurplus < 0) {
            startIndex = i + 1;
            currentSurplus = 0;
        }
    }

    return (totalSurplus >= 0) ? startIndex : -1;
}

int main() {
    int petrolPumpsCount;
    std::cin >> petrolPumpsCount;

    std::vector<PetrolPump> petrolPumps;
    readPetrolPumps(petrolPumpsCount, petrolPumps);

    std::cout << findStartingPump(petrolPumps) << std::endl;
    return 0;
}
