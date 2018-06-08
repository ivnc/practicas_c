#include <stdlib.h>
#include <stdio.h>
#include <float.h>

int main() {
	float num;
	float min=FLT_MAX;
	float max=FLT_MIN;
	float sum=0;
	float media;
	int count=0;
	printf("Esta aplicaci�n permite introducir tantos n�meros reales como se desee para calcular la media aritm�tica y el mayor y menor de la serie seg�n se vayan introduciendo.\n");
	printf("Introducir n�meros enteros separados con enter. Finalizar con 0, que no se tendr� en cuenta:\n");
	while(num!=0) {
		scanf("%f", &num);
		if(num!=0) {
			sum=sum+num;
			if(num<min) {
				min=num;
			}
			if(num>max) {
				max=num;
			}
			count++;
			media=sum/count;
			printf("Media aritm�tica para los %i n�meros introducidos (sumatorio: %.2f): %.2f. M�ximo: %.2f, m�nimo: %.2f\n", count, sum, media, max, min);
		}
		else {
			printf("Programa finalizado. Se introdujeron en total %i n�meros, cuyo sumatorio es de %.5f, media aritm�tica %.5f, m�nimo %.5f y m�ximo %.5f", count, sum, media, min, max);
		}
	}
}
