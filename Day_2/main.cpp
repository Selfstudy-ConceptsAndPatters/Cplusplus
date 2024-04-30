#include <iostream>
#include <fstream>
#include <vector>
#include <string>


//first is opponent, third is own response
// opponent choices: A = rock, B = paper, C = scissors
// own choice: X = rock, Y = paper, Z = scissors

//points: 6 = win, 3 = tie, 0 = lose
//points rock = 1, paper = 2, scissors = 3

std::vector<std::string> file_input_part_one() {
	std::ifstream in_file;
	std::vector<std::string> tournament;
	std::string line;

	in_file.open("input.txt");
	if (!in_file) {
		std::cerr << "Problem opening file" << std::endl;
		return tournament;
	}

	while (std::getline(in_file, line)) {
		if (!line.empty()) {
			tournament.push_back(line);
		}
	}
	return tournament;
}

int tournament_result_calculation(std::vector<std::string> file) {
	int points = 0;
	for (auto i = 0; i < file.size(); i++) {
		if (file[i][0] == 'A') {
			if (file[i][2] == 'X') {
				points = points + 1;
				points = points + 3;
				//std::cout << "Rock vs Rock, result is tie. Total points: " << points << std::endl;
			}
			else if (file[i][2] == 'Y') {
				points = points + 2;
				points = points + 6;
				//std::cout << "Rock vs Paper, result is win. Total points: " << points << std::endl;
			}
			else if (file[i][2] == 'Z') {
				points = points + 3;
				//std::cout << "Rock vs Scissors, result is lose. Total points: " << points << std::endl;
			}
		}
		else if (file[i][0] == 'B') {
			if (file[i][2] == 'X') {
				points = points + 1;
				//std::cout << "Paper vs Rock, result is lose. Total points: " << points << std::endl;
			}
			else if (file[i][2] == 'Y') {
				points = points + 2;
				points = points + 3;
				//std::cout << "Paper vs Paper, result is tie. Total points: " << points << std::endl;
			}
			else if (file[i][2] == 'Z') {
				points = points + 3;
				points = points + 6;
				//std::cout << "Paper vs Scissors, result is win. Total points: " << points << std::endl;
			}
		}
		else if (file[i][0] == 'C') {
			if (file[i][2] == 'X') {
				points = points + 1;
				points = points + 6;
				//std::cout << "Scissors vs Rock, result is win. Total points: " << points << std::endl;
			}
			else if (file[i][2] == 'Y') {
				points = points + 2;
				//std::cout << "Scissors vs Paper, result is lose. Total points: " << points << std::endl;
			}
			else if (file[i][2] == 'Z') {
				points = points + 3;
				points = points + 3;
				//std::cout << "Scissors vs Scissors, result is tie. Total points: " << points << std::endl;
			}
		}
	}
	return points;
}


//Part two:
//X == lose, Y == tie, Z == win
int part_two_result_calculation(std::vector<std::string> file) {
	int points = 0;
	for (auto i = 0; i < file.size(); i++) {
		if (file[i][0] == 'A') {
			if (file[i][2] == 'X') {
				points = points + 3;
				//std::cout << "Rock vs Scissors, result is lose. Total points: " << points << std::endl;
			}
			else if (file[i][2] == 'Y') {
				points = points + 1;
				points = points + 3;
				//std::cout << "Rock vs Rock, result is tie. Total points: " << points << std::endl;
			}
			else if (file[i][2] == 'Z') {
				points = points + 2;
				points = points + 6;
				//std::cout << "Rock vs Paper, result is win. Total points: " << points << std::endl;
			}
		}
		else if (file[i][0] == 'B') {
			if (file[i][2] == 'X') {
				points = points + 1;
				//std::cout << "Paper vs Rock, result is lose. Total points: " << points << std::endl;
			}
			else if (file[i][2] == 'Y') {
				points = points + 2;
				points = points + 3;
				//std::cout << "Paper vs Paper, result is tie. Total points: " << points << std::endl;
			}
			else if (file[i][2] == 'Z') {
				points = points + 3;
				points = points + 6;
				//std::cout << "Paper vs Scissors, result is win. Total points: " << points << std::endl;
			}
		}
		else if (file[i][0] == 'C') {
			if (file[i][2] == 'X') {
				points = points + 2;
				//std::cout << "Scissors vs Paper, result is lose. Total points: " << points << std::endl;
			}
			else if (file[i][2] == 'Y') {
				points = points + 3;
				points = points + 3;
				//std::cout << "Scissors vs Scissors, result is tie. Total points: " << points << std::endl;
			}
			else if (file[i][2] == 'Z') {
				points = points + 1;
				points = points + 6;
				//std::cout << "Scissors vs Rock, result is win. Total points: " << points << std::endl;
			}
		}
	}
	return points;
}



int main() {
	std::cout << "Result of part one: " << tournament_result_calculation(file_input_part_one()) << std::endl;
	std::cout << "Result of part two: " << part_two_result_calculation(file_input_part_one()) << std::endl;
	return 0;
}