#include "ProgramStart.h"
#include <iostream>
void ProgramStart::application()
{
	std::cout << "Result of part one: " << calalgo.part_one_algorithm(result) << std::endl;
	std::cout << "Result of part two: " << calalgo.part_two_algorithm(result) << std::endl;
}
