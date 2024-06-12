#include "CalculationAlgorithms.h"

int CalculationAlgorithms::part_one_algorithm(std::vector<std::string> file)
{
	for (auto i = 0; i < file.size(); i++) {
		if (file[i][0] == 'A') {
			if (file[i][2] == 'X') {
				points_part_one = points_part_one + 1;
				points_part_one = points_part_one + 3;
				//std::cout << "Rock vs Rock, result is tie. Total points_part_one: " << points_part_one << std::endl;
			}
			else if (file[i][2] == 'Y') {
				points_part_one = points_part_one + 2;
				points_part_one = points_part_one + 6;
				//std::cout << "Rock vs Paper, result is win. Total points_part_one: " << points_part_one << std::endl;
			}
			else if (file[i][2] == 'Z') {
				points_part_one = points_part_one + 3;
				//std::cout << "Rock vs Scissors, result is lose. Total points_part_one: " << points_part_one << std::endl;
			}
		}
		else if (file[i][0] == 'B') {
			if (file[i][2] == 'X') {
				points_part_one = points_part_one + 1;
				//std::cout << "Paper vs Rock, result is lose. Total points_part_one: " << points_part_one << std::endl;
			}
			else if (file[i][2] == 'Y') {
				points_part_one = points_part_one + 2;
				points_part_one = points_part_one + 3;
				//std::cout << "Paper vs Paper, result is tie. Total points_part_one: " << points_part_one << std::endl;
			}
			else if (file[i][2] == 'Z') {
				points_part_one = points_part_one + 3;
				points_part_one = points_part_one + 6;
				//std::cout << "Paper vs Scissors, result is win. Total points_part_one: " << points_part_one << std::endl;
			}
		}
		else if (file[i][0] == 'C') {
			if (file[i][2] == 'X') {
				points_part_one = points_part_one + 1;
				points_part_one = points_part_one + 6;
				//std::cout << "Scissors vs Rock, result is win. Total points_part_one: " << points_part_one << std::endl;
			}
			else if (file[i][2] == 'Y') {
				points_part_one = points_part_one + 2;
				//std::cout << "Scissors vs Paper, result is lose. Total points_part_one: " << points_part_one << std::endl;
			}
			else if (file[i][2] == 'Z') {
				points_part_one = points_part_one + 3;
				points_part_one = points_part_one + 3;
				//std::cout << "Scissors vs Scissors, result is tie. Total points_part_one: " << points_part_one << std::endl;
			}
		}
	}
	return points_part_one;
}

int CalculationAlgorithms::part_two_algorithm(std::vector<std::string> file)
{
	for (auto i = 0; i < file.size(); i++) {
		if (file[i][0] == 'A') {
			if (file[i][2] == 'X') {
				points_part_two = points_part_two + 3;
				//std::cout << "Rock vs Scissors, result is lose. Total points_part_two: " << points_part_two << std::endl;
			}
			else if (file[i][2] == 'Y') {
				points_part_two = points_part_two + 1;
				points_part_two = points_part_two + 3;
				//std::cout << "Rock vs Rock, result is tie. Total points_part_two: " << points_part_two << std::endl;
			}
			else if (file[i][2] == 'Z') {
				points_part_two = points_part_two + 2;
				points_part_two = points_part_two + 6;
				//std::cout << "Rock vs Paper, result is win. Total points_part_two: " << points_part_two << std::endl;
			}
		}
		else if (file[i][0] == 'B') {
			if (file[i][2] == 'X') {
				points_part_two = points_part_two + 1;
				//std::cout << "Paper vs Rock, result is lose. Total points_part_two: " << points_part_two << std::endl;
			}
			else if (file[i][2] == 'Y') {
				points_part_two = points_part_two + 2;
				points_part_two = points_part_two + 3;
				//std::cout << "Paper vs Paper, result is tie. Total points_part_two: " << points_part_two << std::endl;
			}
			else if (file[i][2] == 'Z') {
				points_part_two = points_part_two + 3;
				points_part_two = points_part_two + 6;
				//std::cout << "Paper vs Scissors, result is win. Total points_part_two: " << points_part_two << std::endl;
			}
		}
		else if (file[i][0] == 'C') {
			if (file[i][2] == 'X') {
				points_part_two = points_part_two + 2;
				//std::cout << "Scissors vs Paper, result is lose. Total points_part_two: " << points_part_two << std::endl;
			}
			else if (file[i][2] == 'Y') {
				points_part_two = points_part_two + 3;
				points_part_two = points_part_two + 3;
				//std::cout << "Scissors vs Scissors, result is tie. Total points_part_two: " << points_part_two << std::endl;
			}
			else if (file[i][2] == 'Z') {
				points_part_two = points_part_two + 1;
				points_part_two = points_part_two + 6;
				//std::cout << "Scissors vs Rock, result is win. Total points_part_two: " << points_part_two << std::endl;
			}
		}
	}
	return points_part_two;
}
