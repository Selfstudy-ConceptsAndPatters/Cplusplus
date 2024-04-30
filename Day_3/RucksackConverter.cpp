#include "RucksackConverter.h"

int RucksackConverter:: rucksack_prio_conversion(char content) {
	if (content >= 'a' && content <= 'z') {
		return content - 'a' + 1;
	}
	else if (content >= 'A' && content <= 'Z') {
		return content - 'A' + 27;
	}
	else {
		return -1; // return -1 or throw an error if the character is not a-z or A-Z
	}
}
