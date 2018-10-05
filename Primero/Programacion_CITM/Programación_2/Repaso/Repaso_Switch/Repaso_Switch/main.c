#include <stdio.h>

int main() {

	int opc,n1,n2;
	printf("quieres sumar <0> o restar <1>?\n");
	scanf_s("%i", &opc);
	printf("dame el primer numero\n");
	scanf_s("%i", &n1);
	printf("dame el segundo numero\n");
	scanf_s("%i", &n2);
	switch (opc) {
	case 0:
		printf("%i + %i=%i\n",n1,n2,n1+n2);
		break;
	case 1:
		printf("%i - %i = %i\n", n1, n2, n1 - n2);
		break;
	}
	system("pause");
	return 0;
}