#include <stdlib.h>
#include <stdio.h>

int main() {
	int i;
	printf("Esta aplicaci�n imrpime los n�meros pares menores que 100\n");
	for(i=0; i<100; i=i+2) {
		printf("%i, ", i);
	}
}
