#include <stdlib.h>
#include <stdio.h>

int main() {
	int i=1;
	int sum=0;
	printf("Esta aplicaci�n va sumando los n�meros del 1 al 100 y muestra el proceso\n");
	do {
		printf("%i", sum);
		sum=sum+i;
		printf("+%i=%i, ", i, sum);
		i++;
	}
	while(i<100);
}
