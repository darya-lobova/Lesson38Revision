#include "logic.h"

int main() {

	int number;
	cout << "Input number: ";
	cin >> number;

	string result = get_prime_numbers(number);

	cout << result << endl;

	return 0;
}