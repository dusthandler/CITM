#include<iostream>
using namespace std;



int main() {

	int a = 5, b = 2, c;
	int *p = &a;

	p = &b;
	*p = 7;
	p = &a;
	*p = 1;
	p = &b;
	c = *p;
	*p = 3;
	cout << a << "\n" << b << "\n" << *p << "\n" << c << "\n" << b << "\n";
	system("pause");
	return 0;
}