#ifndef _POKEMON_H_
#define _POKEMON_H_
#include <string>

using namespace std;

class pokemon {

protected:
	string name;
	char type;

public:
	pokemon() {
		name = "";
		type = 'n';
	};
	pokemon(string n, char t) {
		name = n;
		type = t;
		};

	string getName() {
		return name;
	}
	char getType() {
		return type;
	}

	void setName(string nom) {
		name = nom;
	}
};

#endif // !_POKEMON_H_
