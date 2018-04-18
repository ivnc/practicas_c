#include <stdio.h>
#include <stdlib.h>

int main() {
	float base;
	float height;
	printf("Esta aplicación recoge dos números reales correspondientes a la base y altura de un triángulo y calcula su área.\n");
	printf("Introducir base, separar decimales con punto:\n");
	scanf("%f", &base);
	printf("Introducir altura, separar decimales con punto:\n");
	scanf("%f", &height);
	float area=base*height/2;
	printf("Para el triángulo con base de %f y altura de %f, área = %f", base, height, area);
}
