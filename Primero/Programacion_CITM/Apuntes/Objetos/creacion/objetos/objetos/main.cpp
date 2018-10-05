#include <iostream>
#include <string>

using namespace std;

//nombre : Pokemon
	//atributos : Nombre, tipo, vida, energia
	//comportamiento = funciones : atacar

class Pokemon {
	int live;
	int energy;
	int attack;
};

	class Electric:Pokemon {
	public:

		
		void strike(){
			cout << "te robo las vidas\n";
		}

		void takeDamage() {
			if (attack() == true) {
				live[]--;
			}
		}

		void dodge() {
			cout << "esquivado\n";
		}
	};

int main() {

	Pokemon electric; 
	
	Electric Pikachu; //Creamos un objeto Pikachu de la clase Electric
	Pikachu.live = 50;
	Pikachu.energy = 10;
	Pikachu.attack = 20;

	Pokemon grass;



	Pokemon fire;



	Pokemon water;



	.type == electric;
	Pikachu.attack(); //Usamos el comportamiento atacar

	system("pause");
	return 0;
}