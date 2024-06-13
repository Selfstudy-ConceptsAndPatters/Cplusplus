#pragma once
#include <vector>
#include <string>
#include "InputReader.h"
#include "CalculationAlgorithms.h"
class ProgramStart
{
public:
	void application();
private:
	InputReader input;
	std::vector<std::string> result = input.file_input();
	CalculationAlgorithms calalgo;

};

