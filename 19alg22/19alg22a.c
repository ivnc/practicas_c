#include <stdlib.h>
#include <stdio.h>

int main() {
	int i=1;
	int sum;
	printf("Esta aplicaci�n va sumando los n�meros del 1 al 100 y muestra el proceso\n");
	do {
		sum=i+i+1;
		printf("%i+%i=%i, ", i, i+1, sum);
		i++;
	}
	while(i<100);
}
