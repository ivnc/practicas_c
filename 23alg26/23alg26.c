#include <stdlib.h>
#include <stdio.h>

int main() {
	float num;
	float sum=0;
	printf("Esta aplicaci�n recoge 8 n�meros naturales y calcula su media aritm�tica.\n");
	printf("Introducir n�meros naturales separados con enter. Separar decimales con punto:\n");
	for(float count=0; count<8; count++) {
		scanf("%f", &num);
		sum=sum+num;
	}
	float media=sum/8;
	printf("Media aritm�tica para los 8 n�meros introducidos (sumatorio: %.0f): %.2f.", sum, media);
}
