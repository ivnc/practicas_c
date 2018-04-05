#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1;
	int n2;
	printf("Esta aplicación genera la suma y la resta a partir de dos números propuestos.\n");
	printf("Introduzca primer número entero:\n");
	scanf("%i", &n1);
	printf("Introduzca segundo número entero:\n");
	scanf("%i", &n2);
	int suma=n1+n2;
	int resta=n1-n2;
	printf("Los resultados de las operaciones son:\nSuma: %i+%i=%i\nResta: %i-%i=%i", n1, n2, suma, n1, n2, resta);
}
