#pragma once
#include "CharFinder.h"
#include "RucksackConverter.h"
#include "RucksackCalculator.h"
#include "InputReader.h"

//This class calls other classes to calculate the sum of priority value of the common items
class SumRucksackCalculation
{
private:
	InputReader inputReader;
	CharFinder charFinder;
	RucksackCalculator rucksackCalculator;
public:
	int calculation_rucksack_common_items();
};

