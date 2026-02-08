#include "logic.h"

string get_prime_numbers(int number) {
	int first_number = 2;

	string result = to_string(first_number);

	if (number <= 1) {
		result = "Error.";
	}

	for (int i = 3; i < number; i += 2) {
		result += " " + to_string(i);
	}

	return result;
}