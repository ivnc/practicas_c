#include <stdio.h>
#include <stdlib.h>

int main() {
	float n1;
	float n2;
	printf("Esta aplicación recobe dos números reales y calcula su suma, diferencia y producto.\n");
	printf("Introducir primer número real, separar decimales con punto:\n");
	scanf("%f", &n1);
	printf("Introducir segundo número real, separar decimales con punto:\n");
	scanf("%f", &n2);
	float suma=n1+n2;
	float resta=n1-n2;
	float producto=n1*n2;
	printf("Estos son los resultados devueltos:\nSuma: %f+%f=%f\nResta: %f-%f=%f\nProducto: %f*%f=%f", n1, n2, suma, n1, n2, resta, n1, n2, producto);
}
