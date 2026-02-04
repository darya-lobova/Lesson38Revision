#include "logic.h"

bool is_power_of_two(int number) {

	while (number % 2 == 0) {
		int number1 = number / 2;
		if (number1 / number % 2 == 0) {
			return true;
		}
	}

	return false;
}