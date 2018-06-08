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
	printf("Esta aplicación permite introducir tantos números reales como se desee para calcular la media aritmética y el mayor y menor de la serie según se vayan introduciendo.\n");
	printf("Introducir números enteros separados con enter. Finalizar con 0, que no se tendrá en cuenta:\n");
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
			printf("Media aritmética para los %i números introducidos (sumatorio: %.2f): %.2f. Máximo: %.2f, mínimo: %.2f\n", count, sum, media, max, min);
		}
		else {
			printf("Programa finalizado. Se introdujeron en total %i números, cuyo sumatorio es de %.5f, media aritmética %.5f, mínimo %.5f y máximo %.5f", count, sum, media, min, max);
		}
	}
}
