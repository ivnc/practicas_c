#include <stdio.h>
#include <stdlib.h>

int main() {
	float si;
	float votos;
	printf("Esta aplicaci�n calcula el porcentaje de acuerdo en un referendum a partir de un n�mero de votos totales y un n�mero de votos afirmativos.\n");
	printf("Introducir n�mero de s�es:\n");
	scanf("%f", &si);
	printf("Ahora introducir el n�mero total de votos:\n");
	scanf("%f", &votos);
	float porcentaje=si/votos*100;
	printf("Su referendum obtuvo un %f\ de acuerdo", porcentaje);
}
