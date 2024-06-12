#include <iostream>
#include <vector>
#include <string>
#include "InputReader.h"
#include "CalculationAlgorithms.h"
//before optimization: 150+ lines

//first is opponent, third is own response
// opponent choices: A = rock, B = paper, C = scissors
// own choice: X = rock, Y = paper, Z = scissors

//points: 6 = win, 3 = tie, 0 = lose
//points rock = 1, paper = 2, scissors = 3

//Part two:
//X == lose, Y == tie, Z == win

int main() {
	InputReader input;
	std::vector<std::string> result = input.file_input();
	CalculationAlgorithms calalgo;
	int part_one_result = calalgo.part_one_algorithm(result);
	int part_two_result = calalgo.part_two_algorithm(result);
	std::cout << "Result of part one: " << part_one_result << std::endl;
	std::cout << "Result of part two: " << part_two_result << std::endl;
	std::cout << "-------------------------------------------------Optimized-------------------------------------------------" << std::endl;
	std::cout << "Result of part one: " << calalgo.part_one_algorithm(result) << std::endl;
	std::cout << "Result of part two: " << part_two_result << std::endl;
	return 0;
}