#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1;
	int n2;
	printf("Esta aplicación recoge dos números enteros y muestra la división entera y su resto.\n");
	printf("Introducir primer número entero:\n");
	scanf("%i", &n1);
	printf("Introducir segundo número entero:\n");
	scanf("%i", &n2);
	int div=n1/n2;
	int resto=n1%n2;
	printf("Resultados para la división %i/%i.\n\nParte entera resultado: %i\nResto: %i", n1, n2, div, resto);
}
