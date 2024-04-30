#pragma once
#include <vector>
#include <fstream>
//Used to put items form the txt file in a vector<string>

class InputReader
{
private:
	std::ifstream in_file;
	std::vector<std::string> tournament;
	std::string line;
public:
	std::vector<std::string> file_input_part_one();
};

