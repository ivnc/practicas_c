#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main() {
	int num;
	int min=INT_MAX;
	int max=0;
	float sum=0;
	float cant=0;
	printf("Esta aplicación permite introducir tantos números enteros como se desee para calcular la media aritmética y el mayor y menor de la serie.\n");
	printf("Introducir números enteros separados con enter. Finalizar con 0, que no se tendrá en cuenta:\n");
	while(num!=0) {
		scanf("%i", &num);
		if(num!=0) {
			sum=sum+num;
			if(num<min) {
				min=num;
			}
			if(num>max) {
				max=num;
			}
			cant++;
		}
	}
	float media=sum/cant;
	printf("Media aritmética para los %.0f números introducidos (sumatorio: %.0f): %.2f. Máximo: %i, mínimo: %i", cant, sum, media, max, min);
}
