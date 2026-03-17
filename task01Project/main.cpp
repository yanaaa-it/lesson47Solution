#include"util.h"

int main() {
	int number;

	cout << "input number:";
	cin >> number;

	int max = find_max(number);
	print(to_string(max));

	return 0;
}