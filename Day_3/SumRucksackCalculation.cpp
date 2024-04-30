#include "SumRucksackCalculation.h"
#include <vector>

int SumRucksackCalculation::calculation_rucksack_common_items() {
	std::vector<char> result = charFinder.findCommonChars(inputReader.file_input_part_one());

	return rucksackCalculator.rucksack_calculation(result);
}