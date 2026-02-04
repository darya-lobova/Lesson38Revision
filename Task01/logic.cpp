#include "logic.h"

string calculate_likes(int like, int day) {
	if (day <= 0 || like < 0) {
		return "Wrong data.";
	}

	string result;

	for (int i = 1; i <= day; i++) {
		int final_likes = like * i;
		result += "Day " + to_string(i) + ": " + to_string(final_likes) + " likes\n";

	}

	return result;
}