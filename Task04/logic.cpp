#include "logic.h"

string order_numbers(int n, int m) {

	string result = "";

	if (n > m) {
		for (int i = n; m <= n; i--) {
			result += to_string(i) + " ";
		}
	}
	else if (m > n) {
		for (int i = n; m >= n; i++) {
			result += to_string(i) + " ";
		}
	}

		return result;
	}