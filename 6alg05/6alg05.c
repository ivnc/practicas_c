#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float radio;
	printf("Esta aplicaci�n recoge un radio introducido y calcula la longitud de la circunferencia, el �rea del c�rculo y el volumen de la esfera correspondientes.\n");
	printf("Introducir radio, separar decimales con punto:");
	scanf("%f", &radio);
	float lenght=2*M_PI*radio;
	float area=M_PI*pow(radio,2);
	float vol=4/3*M_PI*pow(radio,3);
	printf("El radio introducido es: %f y se tiene en cuenta que pi es %f\n\nLoingitud de la circunferencia: %f\n�rea del c�rculo: %f\nVolumen de la esfera: %f", radio, M_PI, lenght, area, vol);
}
