#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int decission;
	double inp;
	double ang;
	printf("Esta aplicación recoge un ángulo y calcula su seno. coseno y tangente\n");
	printf("Seleccione una magnitud para introducir su valor:\n1. Grados\n2. Radianes");
	scanf("%i", &decission);
	printf("Introduzca el valor del ángulo, separando decimales con punto.\n");
	scanf("%lf", &inp);
	switch(decission) {
		case 1:
		ang=inp*M_PI/180;
		break;
		case 2:
		ang=inp;
		break;
		default:
		printf("Error: la magnitud seleccionada no es válida. Inténtelo de nuevo.");
		exit(0);
	}
	double angcos=cos(ang);
	double angsin=sin(ang);
	double angtan=tan(ang);
	printf("Resultados para una medida de %lfr: seno = %lf\nCoseno = %lf\nTangente = %lf", ang, angcos, angsin, angtan);
}
