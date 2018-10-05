#include<iostream>

using namespace std;

int suma1(int k) {
	int n = k;
	n = n + 1;
	return n;
}

int main() {
	int a,b;

	cout << "dame el valor de a\n";
	cin >> a;
	cout << suma1(a) << "\n";
	cout<<"dame el valor de b\n";
	cin >> b;
	cout << suma1(b) << "\n";

	system("pause");
	return 0;
}