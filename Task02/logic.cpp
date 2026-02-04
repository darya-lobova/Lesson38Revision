#include "logic.h"

string find_odd_numbers(int n, int m) {

	if (n > m) {
		return "Wrong data.";
	}
	string result = "";

	for (int i = m; i >= n; i--) {
		result += i % 2 == 1 ? (to_string(i) + " ") : "";
	}

	return result;
}