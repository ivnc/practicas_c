#include <stdlib.h>
#include <stdio.h>

int main() {
	int sum=0;
	printf("Esta aplicaci�n va sumando los n�meros del 1 al 100 y muestra el proceso\n");
	for(int i=1; i<100; i++) {
		printf("%i", sum);
		sum=sum+i;
		printf("+%i=%i, ", i, sum);
	}
}
