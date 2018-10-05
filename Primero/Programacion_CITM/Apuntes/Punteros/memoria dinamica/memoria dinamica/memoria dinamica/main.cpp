#include <iostream>

using namespace std;

int main() {

	int *p = new int; //reserva la memoria

	*p = 5;

	cout << *p << "\n";

	delete p; //libera la memoria, ahora el puntero puede ser reutilizado

	p = new int[20];

	for (int x = 0; x < 20; x++) {
		cin >> p[x] >> x;
		cout << *p << "\n";
	}

	delete[]p;

	system("pause");
	return 0;
}