#include <stdio.h>
#include "prototipo.h"

int main() {
	int num1, num2,resultado;
	printf("que numeros quieres sumar?\n");
	scanf_s("%i", &num1);
	scanf_s("%i", &num2);
	resultado = suma(num1, num2);
	printf("resultado = %i\n"), resultado;
	system("pause");
	return 0;
}