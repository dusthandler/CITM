#include<iostream>
using namespace std;

void mix(char *x, char *y) {
	char z;
	z = *x;
	*x = *y;
	*y = z;
}


int main() {

	char a = '#', b = '@';

	mix(&a, &b);
	cout << a << "\t" << b << "\n";

	system("pause");
	return 0;
}