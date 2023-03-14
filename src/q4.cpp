#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

#include "q4.hpp"

bool containsChar(const std::string& str, const char& ch) {
	for (char c : str) {
		if (c == ch) {
			return true;
		}
	}

	return false;
}

void copyFile(const std::string& inputFileName, const std::string& outputFileName) {
	const std::string fisrtName = "umar";
	std::unordered_map<char, int> charOccurence;

	std::ifstream inputFile(inputFileName);
	std::ofstream outputFile(outputFileName);
	std::string line;

	while (getline(inputFile, line)) {
		outputFile << line << "\n";


		for (char c : line) {
			if (std::isalpha(c)) {
				c = tolower(c);

				if (containsChar(fisrtName, c)) {
					charOccurence[c]++;
				}
			}
		}
	}

	for (auto const& pair : charOccurence) {
		std::cout << pair.first << ": " << pair.second << "\n";
	}
}

void q4_main() {
	std::cout << "--Q4--" << std::endl;

	char running = 'y';
	std::string inputFileName, outputFileName;

	while (std::tolower(running) == 'y') {
		std::cout << "Enter file path for two files: ";
		std::cin >> inputFileName >> outputFileName;

		copyFile(inputFileName, outputFileName);

		std::cout << "Enter \"y\" to continue and \"n\" to go to the next question: ";
		std::cin >> running;
	}
}
