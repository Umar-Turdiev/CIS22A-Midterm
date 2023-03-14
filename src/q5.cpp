#include <cstddef>
#include <iostream>

#include "q5.hpp"

void print_array_forloop(int a[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << a[i] << "\n";
	}
}

void print_array_forloop_reverse(int a[], int size) {
	for (int i = size - 1; i >= 0; i--) {
		std::cout << a[i] << "\n";
	}
}

void print_array_whileloop(int a[], int size) {
	int i = 0;

	while (i < size) {
		std::cout << a[i] << "\n";

		i++;
	}
}

void print_array_dowhileloop(int a[], int size) {
	int i = 0;

	do {
		std::cout << a[i] << "\n";

		i++;
	} while (i < size);
}

void q5_main() {
	std::cout << "--Q5--" << std::endl;

	int a[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	size_t size = sizeof(a) / sizeof(a[0]);

	std::cout << "print_array_forloop: " << std::endl;
	print_array_forloop(a, size);

	std::cout << "print_array_whileloop: " << std::endl;
	print_array_whileloop(a, size);

	std::cout << "print_array_dowhileloop: " << std::endl;
	print_array_dowhileloop(a, size);

	std::cout << "print_array_forloop_reverse: " << std::endl;
	print_array_forloop_reverse(a, size);
}
