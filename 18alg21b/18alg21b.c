#include <stdlib.h>
#include <stdio.h>

int main() {
	int i;
	printf("Esta aplicación imrpime los números pares menores que 100\n");
	for(i=0; i<100; i=i+2) {
		printf("%i, ", i);
	}
}
