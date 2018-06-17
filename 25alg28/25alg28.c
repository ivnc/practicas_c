#include <stdlib.h>
#include <stdio.h>

int main() {
	int num1=0;
	int num2=1;
	int res=num2;
	printf("Esta aplicación imprime la serie de Fibonacci hasta 10000\n");
	while(res<10000) {
		// Start printing in order to aboid showing numbers outside the range (1-10000)
		printf("%i, ", res);
		res=num1+num2;
		num1=num2;
		num2=res;
	}
}
