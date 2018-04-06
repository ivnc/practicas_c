#include <stdio.h>
#include <stdlib.h>

int main() {
	float si;
	float votos;
	printf("Esta aplicación calcula el porcentaje de acuerdo en un referendum a partir de un número de votos totales y un número de votos afirmativos.\n");
	printf("Introducir número de síes:\n");
	scanf("%f", &si);
	printf("Ahora introducir el número total de votos:\n");
	scanf("%f", &votos);
	float porcentaje=si/votos*100;
	printf("Su referendum obtuvo un %f\ de acuerdo", porcentaje);
}
