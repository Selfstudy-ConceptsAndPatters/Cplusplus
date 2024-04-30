#pragma once
#include <vector>
#include <string>

class CharFinder
{
public:
	std::vector<char> findCommonChars(const std::vector<std::string>& strs);
private:
	std::vector<char> result;
};

