#include <cctype>
#include <iostream>

#include "q2.hpp"

int seqsum(const int n1, const int n2) {
	int output = 0;

	for (int i = n1; i <= n2; i++) {
		output += i;
	}

	return output;
}

void q2_main() {
	std::cout << "--Q2--" << std::endl;

	char running = 'y';
	int n1, n2;

	while (std::tolower(running) == 'y') {
		std::cout << "Enter 2 positive integers that are less than 1000: ";
		std::cin >> n1 >> n2;

		if (n1 > -1 && n1 < 1000 && n2 > -1 && n2 < 1000) {
			std::cout << seqsum(n1, n2) << std::endl;

			std::cout << "Enter \"y\" to continue and \"n\" to go to the next question: ";
			std::cin >> running;
		}
	}
}
