#include <stdlib.h>
#include <stdio.h>

int main() {
	int num;
	int factor;
	while(num!=0) {
		factor=1;
		printf("Esta aplicación recoge un número y muestra sus tablas de multiplicar.\n");
		printf("Introducir número entero, 0 o ctrl+c para salir:\n");
		scanf("%i", &num);
		printf("Para el número %i, las tablas del 1 al 9 son:\n", num);
		while(factor<10) {
			printf("*%i=%i\n", factor, num*factor);
			factor++;
		}
	}
}
