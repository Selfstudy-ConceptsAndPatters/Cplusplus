#include "CharFinder.h"
#include <unordered_set>

std::vector<char> CharFinder::findCommonChars(const std::vector<std::string>& strs) {
	for (const auto& str : strs) {
		int len = str.size();
		std::unordered_set<char> firstHalf(str.begin(), str.begin() + len / 2);
		for (auto it = str.begin() + len / 2; it != str.end(); ++it) {
			if (firstHalf.count(*it)) {
				result.push_back(*it);
				break;
			}
			if (it == str.end() - 1) {
				result.push_back('\0');
			}
		}
	}
	return result;
}