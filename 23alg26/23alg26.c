#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main() {
	int num;
	int min=INT_MAX;
	int max=0;
	float sum=0;
	float cant=0;
	printf("Esta aplicaci�n permite introducir tantos n�meros enteros como se desee para calcular la media aritm�tica y el mayor y menor de la serie.\n");
	printf("Introducir n�meros enteros separados con enter. Finalizar con 0, que no se tendr� en cuenta:\n");
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
	printf("Media aritm�tica para los %.0f n�meros introducidos (sumatorio: %.0f): %.2f. M�ximo: %i, m�nimo: %i", cant, sum, media, max, min);
}
