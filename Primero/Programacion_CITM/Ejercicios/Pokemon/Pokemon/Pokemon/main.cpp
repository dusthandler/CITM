#include <iostream>
#include "Pokemon.h"

int main() {

	pokemon p1("pikachu", 'e');
	pokemon p2("bulbasaur",'g');
	pokemon p3("charmander", 'f');
	pokemon p4("squirtle", 'w');

	cout << p1.getName() << "\n";

	system("pause");
	return 0;
}