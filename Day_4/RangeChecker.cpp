#include "RangeChecker.h"
#include <sstream>


int RangeChecker::compare_ranges_part_one(const std::vector<std::string>& ranges) {
	for (const std::string& range : ranges) {
		std::stringstream ss(range);

		//stringstream reads until it encounters something that is not  a number and stores it in the new variable, hyphen. 
		//the other numbers are stored inside the integer values
		ss >> start1 >> hyphen >> end1 >> hyphen >> start2 >> hyphen >> end2;

		if (containmentChecker.is_range_contained_part_one(start1, end1, start2, end2)) {
			sum++;
		}
	}
	return sum;
}
int RangeChecker::compare_ranges_part_two(const std::vector<std::string>& ranges) {
	for (const std::string& range : ranges) {
		std::stringstream ss(range);

		ss >> start1 >> hyphen >> end1 >> hyphen >> start2 >> hyphen >> end2;
		if (containmentChecker.is_range_contained_part_two(start1, end1, start2, end2)) {
			sum_part_two++;
		}
	}
	return sum_part_two++;
}