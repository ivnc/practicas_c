#include <stdio.h>
#include <stdio.h>

int main() {
	float num;
	printf("Esta aplicaci�n recobe un n�mero y devuelve si es mayor, igual o menor que 100\n");
	printf("Introducir n�mero a evaluar, separar decimales con punto\n");
	scanf("%f", &num);
	if(num<100) {
		printf("N�mero %f es menor que 100", num);
	}
	else if(num==100) {
		printf("�%f ya es 100!", num);
	}
	else {
		printf("El n�mero %f es mayor que 100", num);
	}
}
