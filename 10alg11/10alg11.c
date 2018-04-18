#include <stdio.h>
#include <stdio.h>

int main() {
	float num;
	printf("Esta aplicación recobe un número y devuelve si es mayor, igual o menor que 100\n");
	printf("Introducir número a evaluar, separar decimales con punto\n");
	scanf("%f", &num);
	if(num<100) {
		printf("Número %f es menor que 100", num);
	}
	else if(num==100) {
		printf("¡%f ya es 100!", num);
	}
	else {
		printf("El número %f es mayor que 100", num);
	}
}
