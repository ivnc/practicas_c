#include <stdlib.h>
#include <stdio.h>

int main() {
	int num;
	int factor=1;
	printf("Esta aplicaci�n recoge un n�mero y muestra sus tablas de multiplicar.\n");
	printf("Introducir n�mero entero:\n");
	scanf("%i", &num);
	printf("Para el n�mero %i, las tablas del 1 al 9 son:\n", num);
	while(factor<10) {
		printf("*%i=%i\n", factor, num*factor);
		factor++;
	}
}
