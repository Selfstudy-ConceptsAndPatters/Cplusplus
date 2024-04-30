#include <iostream>
#include "Calculation.h"
#include "CalorieService.h"

int main() {
	Calculation calculation;
	CalorieService service;
	std::cout << calculation.calculate_max_of_single_elve(service.file_input_part_one()) << std::endl;
	std::cout << "---------------------------------------------------PART TWO:---------------------------------------------------" << std::endl;
	if (calculation.calculate_max_of_top_three_elves(service.file_input_part_one()) != 0)
		std::cout << calculation.calculate_max_of_top_three_elves(service.file_input_part_one()) << std::endl;

	return 0;
}
