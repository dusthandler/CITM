#include <iostream>
#include "prototipo.h"
using namespace std;

int main() {

	int var = 20;

	myFunc(&var);
	cout << var << "\n";

	system("pause");
	return 0;
}