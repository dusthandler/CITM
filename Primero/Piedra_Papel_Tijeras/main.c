#include <stdio.h>
#include "prototipo.h"

int main() {
	char u, m, resp, resp2;
	int contu = 0, contm = 0, contmj = 0, contuj = 0;
	do {
		do {
			printf("Has apostado: %c\n", u = apuestausuario());

			printf("La maquina ha apostado: %c\n", m = piedrapapeltijeras());


			comprobar(u, m, &contu, &contm); //mismo orden variables aqui y en función

			if (contu < 2 && contm < 2) {
				printf("Quieres seguir jugando? Si <s> o No <n>? \n");
				scanf_s(" %c", &resp);
				printf("\n");
			}

		} while (resp == 's' && contu != 2 && contm != 2);

		printf("\n");
		if (contm == 2) {
			contmj++;
		}
		if (contu == 2) {
			contuj++;
		}
		if (contu == 2) {
			printf("Has ganado 1 juego tras ganar 2 rondas \n");
			printf("Recuento total: \n");
			printf("\t Usuario: %i - Maquina: %i \n", contuj, contmj);

		}

		else if (contm == 2) {
			printf("La maquina ha ganado 1 juego tras ganar 2 rondas \n");
			printf("Recuento total: \n");
			printf("\t Usuario: %i - Maquina: %i \n", contuj, contmj);
		}

		else {
			printf("Victorias del usuario: %i \n", contuj);
			printf("Victorias de la maquina: %i \n", contmj);
		}
		printf("Quieres realizar otro juego? Si <s> o No <n>?\n");
		scanf_s(" %c", &resp2);
		
		
		contu = 0;
		contm = 0;
	} while (resp2 == 's');

	system("pause");
	return 0;
}
