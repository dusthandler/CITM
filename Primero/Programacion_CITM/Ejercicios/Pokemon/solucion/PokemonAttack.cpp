#include <iostream>
#include <cstring> // strcmp
using namespace std;

const int DEFAULT_DAMAGE = 10;

// Pokemon base class
class Pokemon
{
protected:

	const char *name;
	const char *type;

public:

	// Constructor 1 - The statement asks for this one
	Pokemon(const char *pname) :
		name(pname),
		type("noType")
	{ }

	// Constructor 2 - The statement does not ask for this one...
	// However, this one feels better for subclasses so they can
	// initialize the 'type' parameter more elegantly
	Pokemon(const char *pname, const char *ptype) :
		name(pname),
		type(ptype)
	{ }

	// NOTE: The base class' destructor must be virtual
	virtual ~Pokemon()
	{ }

	const char *getName() const
	{
		return name;
	}

	const char *getType() const
	{
		return type;
	}

	// This is a pure virtual (or pure abstract) method,
	// which makes the whole Pokemon class an abstract class
	virtual int damageAttack(Pokemon *p) const = 0;
};


// ElectricPokemon is a child class of the base class Pokemon
class ElectricPokemon : public Pokemon
{
public:

	// Constructor
	ElectricPokemon(const char *name) :
		Pokemon(name) // Uses Pokemon base class' constructor 1
	{
		type = "Electric";
	}

	// Overriding base class damageAttack() virtual method
	int damageAttack(Pokemon *p) const override {
		if (strcmp(p->getType(), "Grass") == 0) { return DEFAULT_DAMAGE / 2; }
		if (strcmp(p->getType(), "Water") == 0) { return DEFAULT_DAMAGE * 2; }
		return DEFAULT_DAMAGE;
	}
};


// GrassPokemon is a child class of the base class Pokemon
class GrassPokemon : public Pokemon
{
public:

	// Constructor (nicer than ElectricPokemon's constructor)
	GrassPokemon(const char *name) :
		Pokemon(name, "Grass") // Uses Pokemon base class' constructor 2
	{ }

	// Overriding base class damageAttack() virtual method
	int damageAttack(Pokemon *p) const override {
		if (strcmp(p->getType(), "Fire") == 0) { return DEFAULT_DAMAGE / 2; }
		if (strcmp(p->getType(), "Water") == 0) { return DEFAULT_DAMAGE * 2; }
		return DEFAULT_DAMAGE;
	}
};


// FirePokemon is a child class of the base class Pokemon
class FirePokemon : public Pokemon
{
public:

	// Constructor (nicer than ElectricPokemon's constructor)
	FirePokemon(const char *name) :
		Pokemon(name, "Fire") // Uses Pokemon base class' constructor 2
	{ }

	// Overriding base class damageAttack() virtual method
	int damageAttack(Pokemon *p) const override {
		if (strcmp(p->getType(), "Grass") == 0) { return DEFAULT_DAMAGE * 2; }
		if (strcmp(p->getType(), "Water") == 0) { return DEFAULT_DAMAGE / 2; }
		return DEFAULT_DAMAGE;
	}
};


// WaterPokemon is a child class of the base class Pokemon
class WaterPokemon : public Pokemon
{
public:

	// Constructor (nicer than ElectricPokemon's constructor)
	WaterPokemon(const char *name) :
		Pokemon(name, "Water") // Uses Pokemon base class' constructor 2
	{ }

	// Overriding base class damageAttack() virtual method
	int damageAttack(Pokemon *p) const override {
		if (strcmp(p->getType(), "Grass") == 0) { return DEFAULT_DAMAGE / 2; }
		if (strcmp(p->getType(), "Fire") == 0) { return DEFAULT_DAMAGE * 2; }
		return DEFAULT_DAMAGE;
	}
};


int main()
{
	Pokemon *pikachu = new ElectricPokemon("Pikachu");
	Pokemon *bulbasaur = new GrassPokemon("Bulbasaur");
	Pokemon *charmander = new FirePokemon("Charmander");
	Pokemon *squirtle = new WaterPokemon("Squirtle");

	cout << "-- Damage Attacks --" << endl;

	cout << pikachu->getName() << " -> " << bulbasaur->getName() << " = " << pikachu->damageAttack(bulbasaur) << " units" << endl;
	cout << bulbasaur->getName() << " -> " << squirtle->getName() << " = " << bulbasaur->damageAttack(squirtle) << " units" << endl;
	cout << squirtle->getName() << " -> " << charmander->getName() << " = " << squirtle->damageAttack(charmander) << " units" << endl;
	cout << charmander->getName() << " -> " << pikachu->getName() << " = " << charmander->damageAttack(pikachu) << " units" << endl;

	delete pikachu;
	delete bulbasaur;
	delete charmander;
	delete squirtle;

	system("pause");

	return 0;
}
