#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1;
	int num2;
	int num3;
	printf("Esta aplicaci�n recoge tres n�meros enteros y los ordena en �rden descendente.\n");
	printf("Introducir n�meros separados mediante enter:\n");
	scanf("%i", &num1);
	scanf("%i", &num2);
	scanf("%i", &num3);
	printf("Orden para %i, %i, %i: ", num1, num2, num3);
	if(num3>num2 && num2>num1) {
		printf("%i>%i>%i", num3, num2, num1);
	}
	else if(num1>num2 && num2>num3) {
		printf("%i>%i>%i", num1, num2, num3);
	}
	else if(num2>num1 && num1>num3) {
		printf("%i>%i>%i", num2, num1, num3);
	}
	else if(num2>num3 && num3>num1) {
		printf("%i>%i>%i", num2, num3, num1);
	}
	else if(num3>num1 && num1>num2) {
		printf("%i>%i>%i", num3, num1, num2);
	}
	else if(num1>num3 && num3>num2) {
		printf("%i>%i>%i", num1, num3, num2);
	}
	else {
		printf("No se han encontrado combinaciones para los dos n�meros introducidos. Introduzca tres n�meros enteros no iguales");
	}
}
