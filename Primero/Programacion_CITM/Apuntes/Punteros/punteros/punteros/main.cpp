#include <iostream>
using namespace std;

int main() {

	int x = 5;
	int *xptr = &x;

	/*cout << xptr << "\n";*/ // se imprime la direcci�n a la que apunta

	/*cout << *xptr << "\n";*/ // se imprime el contenido de la direcci�n

	system("pause");
	return 0;
}