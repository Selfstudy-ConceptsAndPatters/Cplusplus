#include "CalorieService.h"
#include <fstream>
#include <iostream>

std::vector<int> CalorieService::file_input_part_one() {
	std::ifstream in_file;

	in_file.open("input.txt");
	if (!in_file) {
		std::cerr << "Problem opening file" << std::endl;
		return calories_of_elves;
	}

	calories_of_elves.push_back(0); // Add an initial element for the first Elf

	while (getline(in_file, line)) {
		if (line.empty()) {
			calories_of_elves.push_back(0); // Start a new element for the next Elf
		}
		else {
			calories_of_elves.back() += stoi(line); // Add to the current Elf's total
		}
	}
	return calories_of_elves;
}
