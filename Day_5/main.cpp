#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <stack>

std::vector<std::string> input_reader(std::string fileName) {
	std::ifstream in_file;
	std::vector<std::string> input;
	std::string line;

	in_file.open(fileName);
	if (!in_file) {
		std::cerr << "Problem opening file" << std::endl;
		return input;
	}

	while (std::getline(in_file, line)) {
		if (!line.empty()) {
			input.push_back(line);
		}
	}
	return input;
}

//Method to convert movements txt content to only contain numbers
//...amount...location...destination
void movement_implementation(std::vector<std::string> movements) {
	int amount, location, destination;
	std::string strng;
	for (const std::string& movement : movements) {
		std::stringstream ss(movement);
		
		ss >> strng >> amount >> strng >> location >> strng >> destination;
		std::cout << amount << " " << location << " " << destination << std::endl;
	}
}

class Stacking {
private:
	std::vector<char> stack1{ 'T', 'V', 'J', 'W', 'N', 'R', 'M', 'S'};
	std::vector<char> stack2{ 'V', 'C', 'P', 'Q', 'J', 'D', 'W', 'B'};
	std::vector<char> stack3{ ' ', 'P', 'R', 'D', 'H', 'F', 'J', 'B'};
	std::vector<char> stack4{ ' ', 'D', 'N', 'M', 'B', 'P', 'R', 'F'};
	std::vector<char> stack5{ ' ', ' ', 'B', 'T', 'P', 'R', 'V', 'H'};
	std::vector<char> stack6{ ' ', ' ', ' ', ' ', 'T', 'P', 'B', 'C'};
	std::vector<char> stack7{ ' ', ' ', ' ', 'L', 'P', 'R', 'J', 'B'};
	std::vector<char> stack8{ 'W', 'B', 'Z', 'T', 'L', 'S', 'C', 'N'};
	std::vector<char> stack9{ ' ', ' ', ' ', ' ', ' ', 'G', 'S', 'L'};
public:
	void print_out_stacks() {
		for (auto i = 0; i < stack1.size(); i++) {
			std::cout << stack1[i] << " ";
			std::cout << stack2[i] << " ";
			std::cout << stack3[i] << " ";
			std::cout << stack4[i] << " ";
			std::cout << stack5[i] << " ";
			std::cout << stack6[i] << " ";
			std::cout << stack7[i] << " ";
			std::cout << stack8[i] << " ";
			std::cout << stack9[i] << std::endl;
		}
	}
};

int main() {
	std::vector<std::string> movements = input_reader("movement.txt");
	std::vector<std::string> startingStacks = input_reader("starting_stacks.txt");
    std::vector<std::string> input_raw = input_reader("input.txt");
	//movement_implementation(movements);
	Stacking stacking;
	stacking.print_out_stacks();
	return 0;
}