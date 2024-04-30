#pragma once
#include <vector>
#include "InputReader.h"
#include "RangeChecker.h"

class Result
{
private:
    InputReader reader;
    RangeChecker rChecker;
    std::vector<std::string> result = reader.input_reader();
public:
    void print_results();
};

