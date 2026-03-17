#include"util.h"

int main() {
	int n;
	int array[DEFAULT_SIZE];

	do {
		cout << "input n:";
		cin >> n;
	} while (n <= 0);

	user_init(array, n);


	print(to_string(find_missing_number(array, n)));


	return 0;
}