#include "InputReader.h"
#include <iostream>

std::vector<std::string> InputReader::input_reader() {
	in_file.open("input.txt");
	if (!in_file) {
		std::cerr << "Problem opening file" << std::endl;
		return ranges;
	}

	while (std::getline(in_file, line)) {
		if (!line.empty()) {
			ranges.push_back(line);
		}
	}
	return ranges;
}