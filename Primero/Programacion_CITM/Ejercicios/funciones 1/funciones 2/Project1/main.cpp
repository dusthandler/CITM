#include<iostream>
#include<string>
using namespace std;

int cuenta(int x, int y) {

	int n = 0, i;
	for (i = x; i < y; i++) {
		n++;
	}
	return n;
}

int main() {

	int a, b;
	cout << "entre que numeros quieres comprobar\n";
	cin >> a >> b;
	cout << cuenta(a,b)<<"\n";
	system("pause");
	return 0;
}