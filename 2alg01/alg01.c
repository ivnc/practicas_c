#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1;
	int n2;
	printf("Esta aplicaci�n genera la suma y la resta a partir de dos n�meros propuestos.\n");
	printf("Introduzca primer n�mero entero:\n");
	scanf("%i", &n1);
	printf("Introduzca segundo n�mero entero:\n");
	scanf("%i", &n2);
	int suma=n1+n2;
	int resta=n1-n2;
	printf("Los resultados de las operaciones son:\nSuma: %i+%i=%i\nResta: %i-%i=%i", n1, n2, suma, n1, n2, resta);
}
