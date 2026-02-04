#include "logic.h"

int main() {

	int like;
	int day;

	cout << "Input number of likes:: ";
	cin >> like;

	cout << "Input number of days: ";
	cin >> day;

	string result = calculate_likes(like,day);

	cout << result << endl;

	return 0;
}