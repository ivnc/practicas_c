#include <stdlib.h>
#include <stdio.h>

int main() {
	float num;
	float sum=0;
	printf("Esta aplicación recoge 8 números naturales y calcula su media aritmética.\n");
	printf("Introducir números naturales separados con enter. Separar decimales con punto:\n");
	for(float count=0; count<8; count++) {
		scanf("%f", &num);
		sum=sum+num;
	}
	float media=sum/8;
	printf("Media aritmética para los 8 números introducidos (sumatorio: %.0f): %.2f.", sum, media);
}
