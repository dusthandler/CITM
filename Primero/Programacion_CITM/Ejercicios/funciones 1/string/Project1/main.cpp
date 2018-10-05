#include<iostream>
#include<string>
using namespace std;



int main() {

	string x;
	int i;

	cout << "palabra?\n";
	cin >> x;

	int tamanyo = x.size();

	cout << x << "\n";

	for (i = tamanyo-1; i >= 0; i--) {
		cout << x[i];
	}
	cout << "\n";

	system("pause");
	return 0;
}