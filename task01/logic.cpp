#include"logic.h"
int find_max(int number, int length) {
	int v=number%10;
	while (number > 0) {
		number /= number;
		int digit = number % 10;
			if (digit > v) {
				v = digit;
			}
			if (digit ==0) {
				v = digit;
				break;
			}
}


	return v;
}
int find_min(int number, int length) {
	int v = number % 10;
	while (number > 0) {
		number /= number;
		int digit = number % 10;
		if (digit == 9) {
			v = digit;
			break;
		}
		if (digit < v) {
			v = digit;
		}
	}
	return v;
}