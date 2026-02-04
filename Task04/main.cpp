#include "logic.h"

int main() {

	int n, m;

	cout << "Input n: ";
	cin >> n;

	cout << "Input m: ";
	cin >> m;

	string result = order_numbers(n, m);
	cout << result << endl;

	return 0;
}