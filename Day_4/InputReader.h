#pragma once
#include <vector>
#include <string>
#include <fstream>

//Used open text file and return its content inside a vector of string
class InputReader
{
private:
	std::ifstream in_file;
	std::vector<std::string> ranges;
	std::string line;

public:
	std::vector<std::string> input_reader();
};

