long long get_fibo_number(int index) {

	if (index < 1) {
		return -1;
	}

	int first_number = 0;
	int second_number = 1;

	int number = index == 2 ? 1 : 0;

	for (int i = 2; i < index; i++) {
		number = first_number + second_number;
		first_number = second_number;
		second_number = number;
	}

	return number;
}