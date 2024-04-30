#include "Result.h"
#include <iostream>

void Result::print_results()
{
	std::cout << "Result Part One: " << rChecker.compare_ranges_part_one(result) << std::endl;
	std::cout << "Result Part Two: " << rChecker.compare_ranges_part_two(result) << std::endl;
}
