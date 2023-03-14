#include <cctype>
#include <iostream>
#include <vector>

#include "q1.hpp"

bool isPrime(const int n) {
	if (n < 2) {
		return false;
	}

	for (int i = 2; i <= std::sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

void q1_main() {
	std::cout << "--Q1--" << std::endl;

	char running = 'y';
	int n1, n2;

	while (std::tolower(running) == 'y') {
		std::cout << "Enter 2 positive integers that are less than 1000: ";
		std::cin >> n1 >> n2;

		if (n1 > -1 && n1 < 1000 && n2 > -1 && n2 < 1000) {
			std::vector<int> primeList;

			for (int i = n1; i <= n2; i++) {
				if (isPrime(i)) {
					primeList.push_back(i);
				}
			}

			for (std::vector<int>::iterator it = primeList.begin(); it != primeList.end(); ++it) {
				std::cout << *it << "\n";
			}

			std::cout << "Enter \"y\" to continue and \"n\" to go to the next question: ";
			std::cin >> running;
		}
	}
}
