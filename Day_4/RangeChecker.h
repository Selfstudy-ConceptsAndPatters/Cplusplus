#pragma once
#include <vector>
#include <string>
#include "RangeContainmentChecker.h"

class RangeChecker
{
private: 
	int sum = 0;
	int sum_part_two = 0;
	int start1, end1, start2, end2;
	char hyphen;
	RangeContainmentChecker containmentChecker;
public: 
	int compare_ranges_part_one(const std::vector<std::string>& ranges);
	int compare_ranges_part_two(const std::vector<std::string>& ranges);
};

