#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	printf("Esta aplicaci�n recoge un n�mero entero y devuelve si es par o impar:\n");
	printf("Introducir n�mero:\n");
	scanf("%i", &num);
	if(num%2==0) {
		printf("El n�mero %i es par", num);
	}
	else {
		printf("El n�mero %i es impar.", num);
	}
}
