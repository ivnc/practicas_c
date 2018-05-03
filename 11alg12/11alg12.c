#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	printf("Esta aplicación recoge un número entero y devuelve si es par o impar:\n");
	printf("Introducir número:\n");
	scanf("%i", &num);
	if(num%2==0) {
		printf("El número %i es par", num);
	}
	else {
		printf("El número %i es impar.", num);
	}
}
