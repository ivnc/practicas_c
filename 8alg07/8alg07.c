#include <stdio.h>
#include <stdlib.h>

int main() {
	float base;
	float height;
	printf("Esta aplicaci�n recoge dos n�meros reales correspondientes a la base y altura de un tri�ngulo y calcula su �rea.\n");
	printf("Introducir base, separar decimales con punto:\n");
	scanf("%f", &base);
	printf("Introducir altura, separar decimales con punto:\n");
	scanf("%f", &height);
	float area=base*height/2;
	printf("Para el tri�ngulo con base de %f y altura de %f, �rea = %f", base, height, area);
}
