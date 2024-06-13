#include <iostream>
#include "SumRucksackCalculation.h"
int main() {
	SumRucksackCalculation sumRucksackCalculation;
	std::cout << "Sum of common type: "<< sumRucksackCalculation.calculation_rucksack_common_items() << std::endl;
	return 0;
}