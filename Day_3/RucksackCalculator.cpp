#include "RucksackCalculator.h"

int RucksackCalculator::rucksack_calculation(std::vector<char>& chrs) {
	for (auto i = 0; i < chrs.size(); i++) {
		count = count + rucksackConverter.rucksack_prio_conversion(chrs[i]);
	}
	return count;
}