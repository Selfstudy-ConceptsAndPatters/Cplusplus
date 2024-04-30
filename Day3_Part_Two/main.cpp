#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <map>
#include <string>
char getRepeatedCharacterAcrossAllItems(const std::vector<std::string>& items) {
    std::map<char, int> charCount;

    for (const auto& item : items) {
        std::set<char> uniqueChars(item.begin(), item.end());
        for (const char& c : uniqueChars) {
            charCount[c]++;
            if (charCount[c] == items.size()) {
                return c;
            }
        }
    }

    return '\0';
}

char getRepeatedCharacter(const std::string& item1, const std::string& item2) {
    std::set<char> uniqueCharsItem1(item1.begin(), item1.end());
    for (const char& c : uniqueCharsItem1) {
        if (uniqueCharsItem1.count(c)) {
            return c;
        }
    }
    return '\0';
}

int getPriority(char c) {
    if (std::islower(c)) {
        return c - 'a' + 1;
    }
    else {
        return 26 + c - 'A' + 1;
    }
}

int main() {
    std::ifstream input("input.txt");
    std::vector<std::string> rucksacks;
    std::string line;
    while (std::getline(input, line)) {
        rucksacks.push_back(line);
    }

    int totalPriority = 0;

    // Part 1
    for (const auto& rucksack : rucksacks) {
        int compartmentSize = rucksack.length() / 2;
        std::string items1 = rucksack.substr(0, compartmentSize);
        std::string items2 = rucksack.substr(compartmentSize);

        char repeatedChar = getRepeatedCharacter(items1, items2);

        int priority = getPriority(repeatedChar);

        totalPriority += priority;
    }
    std::cout << "Part 1 Total Priority: " << totalPriority << std::endl;

    // Part 2
    totalPriority = 0;
    for (size_t loop = 0; loop < rucksacks.size(); loop += 3) {
        std::vector<std::string> rucksacksGroup = {
            rucksacks[loop],
            rucksacks[loop + 1],
            rucksacks[loop + 2]
        };

        char repeatedChar = getRepeatedCharacterAcrossAllItems(rucksacksGroup);

        int priority = getPriority(repeatedChar);

        totalPriority += priority;
    }
    std::cout << "Part 2 Total Priority: " << totalPriority << std::endl;

    return 0;
}
