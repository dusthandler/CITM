#include <stdio.h>
#include<time.h>
#include "prototipo.h"

char apuestausuario() {
	char u;
	do {
		printf("Piedra <p>, papel <a> o tijeras <t>? ");
		scanf_s(" %c", &u);
	} while (u != 'p' && u != 'a' && u != 't');

	return u;

}

char piedrapapeltijeras(){
	int valor;

	srand(time(NULL));
	valor = rand() % 3;

	switch (valor) {
	case 0:
		return 'p';
		break;

	case 1:
		return 'a';
		break;

	case 2:
		return 't';
		break;
	}

}

void comprobar(char lu, char lm, int *contu, int *contm) {

	if (lu == lm) {
		printf("Empate\n");
	}

	else if (lu == 'p' && lm == 't' || lu == 't' && lm == 'a' || lu == 'a' && lm == 'p') { //gana u

		printf("Has ganado!!\n");

		(*contu)++;
	}

	else { //gana m

		printf("Gana la maquina\n");

		(*contm)++;

	}


}
