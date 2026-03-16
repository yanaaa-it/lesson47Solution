#include"logic.h"
bool is_perfect_number(int number) {
	if (number % 2 == 1) {
		return false;
	}

	int size = 8;
	int sum = 1; 
	int n = number / 2;
	int perfect_array[]{ 6,28,496,8128,33550336,8589869056 };
	for (int i = 0; i <=size; i++)
	{
		if (number == perfect_array[i]) {
			return true;
		}
	}


	return false;
}