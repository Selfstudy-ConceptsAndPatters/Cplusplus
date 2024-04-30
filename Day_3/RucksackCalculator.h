#pragma once
#include <vector>
#include "RucksackConverter.h"
//used to calculate the sum of common types in each rucksack
class RucksackCalculator
{
private:
	int count = 0;
	RucksackConverter rucksackConverter;
public:
	int rucksack_calculation(std::vector<char>& chrs);
};

