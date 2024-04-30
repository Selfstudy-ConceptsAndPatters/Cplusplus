#include "Calculation.h"
#include <algorithm>

int Calculation::calculate_max_of_single_elve(std::vector<int> calories_of_elves) {
	int max_calories = *max_element(calories_of_elves.begin(), calories_of_elves.end());

	if (calories_of_elves.size() > 1) {
		return max_calories;
	}
	return 0;
}

int Calculation::calculate_max_of_top_three_elves(std::vector<int> calories_of_elves) {
	if (calories_of_elves.size() > 1) {
		std::sort(calories_of_elves.begin(), calories_of_elves.end(), std::greater<int>());
		return calories_of_elves[0] + calories_of_elves[1] + calories_of_elves[2];
	}
	return 0;
}