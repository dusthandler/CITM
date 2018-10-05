#include <iostream>
using namespace std;

int main() {

	int numbers[100];
	cout << sizeof(numbers) / sizeof(numbers[0]) << "\n";

	system("pause");
	return 0;
}