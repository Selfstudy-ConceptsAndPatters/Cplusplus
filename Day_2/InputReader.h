#pragma once
#include <vector>
#include <string>
#include <fstream>

class InputReader
{
public:
	std::vector<std::string> file_input();
private:
	std::ifstream in_file;
	std::vector <std::string> tournament;
	std::string line;
};

