#include "logic.h"

string order_numbers(int n, int m) {
	int step = (n >= m) ? -1 : 1;

	string result = "";

	for (int i = n; i != m + step; i += step) {
		result += to_string(i) + " ";
	}

		return result;
	}