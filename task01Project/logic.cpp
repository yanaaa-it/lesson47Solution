#include"logic.h"
int find_max(int number) {
	if (number < 0) {
		number *= -1;
	}
	int v = number % 10;
	while (number > 0) {
		number /= 10;
		int digit = number % 10;
		if (digit > v) {
			v = digit;
		}
		if (digit == 9) {
			v = digit;
			break;
		}
		
	}
	return v;
}
