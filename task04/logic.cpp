#include"logic.h"

int sum_numbers(int array[DEFAULT_SIZE], int n) {
	int sum = 0;

	for (int index = 0; index < n; index++)
	{

		sum += array[index];
	}
	return sum;
}
int find_missing_number(int array[DEFAULT_SIZE], int n) {
	int fact_sum = (n * (n + 1)) / 2;

	int really_sum = sum_numbers(array, n);

	return fact_sum ;
}