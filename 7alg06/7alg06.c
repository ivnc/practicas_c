#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1;
	int n2;
	printf("Esta aplicaci�n recoge dos n�meros enteros y muestra la divisi�n entera y su resto.\n");
	printf("Introducir primer n�mero entero:\n");
	scanf("%i", &n1);
	printf("Introducir segundo n�mero entero:\n");
	scanf("%i", &n2);
	int div=n1/n2;
	int resto=n1%n2;
	printf("Resultados para la divisi�n %i/%i.\n\nParte entera resultado: %i\nResto: %i", n1, n2, div, resto);
}
