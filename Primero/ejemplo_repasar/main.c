#include<stdio.h>
#include<string.h>
#include"prototipo.h"

int main() {

	char letra;
	printf("dame una letra\n");
	scanf_s(" %c", &letra);
	printf("%s\n", encontrar(letra));
	system("pause");
	return 0;
}
