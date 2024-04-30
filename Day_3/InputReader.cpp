#include "InputReader.h"
#include <iostream>
#include <string>
std::vector<std::string> InputReader::file_input_part_one() {
	in_file.open("input.txt");
	if (!in_file) {
		std::cerr << "Problem opening file" << std::endl;
		return tournament;
	}

	while (std::getline(in_file, line)) {
		if (!line.empty()) {
			tournament.push_back(line);
		}
	}
	return tournament;
}