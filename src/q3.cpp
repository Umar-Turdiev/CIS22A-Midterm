#include <cctype>
#include <iostream>

#include "q3.hpp"

bool is_triangle(const int x, const int y, const int z) {
	return (x < y + z) && (y < x + z) && (z < x + y) ? true : false;
}

bool is_right_angle_triangle(const int x, const int y, const int z) {
	return (z * z == x * x + y * y) ? true : false;
}

void q3_main() {
	std::cout << "--Q3--" << std::endl;

	char running = 'y';
	int n1, n2, n3;

	while (std::tolower(running) == 'y') {
		std::cout << "Enter 3 positive integers that presents tree sides of a triangle: ";
		std::cin >> n1 >> n2 >> n3;

		if (n1 > -1 && n2 > -1) {
			if (is_triangle(n1, n2, n3)) {
				if (is_right_angle_triangle(n1, n2, n3)) {
					std::cout << n1 << ", " << n2 << ", " << n3 << " form a right angle triangle." << std::endl;
				}
				else {
					std::cout << n1 << ", " << n2 << ", " << n3 << " form a triangle." << std::endl;
				}
			}
			else {
				std::cout << n1 << ", " << n2 << ", " << n3 << " does not form a triangle." << std::endl;
			}

			std::cout << "Enter \"y\" to continue and \"n\" to go to the next question: ";
			std::cin >> running;
		}
	}
}
