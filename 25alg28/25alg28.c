#include <stdlib.h>
#include <stdio.h>

int main() {
	int num1=1;
	int num2=1;
	int res;
	printf("Esta aplicación imprime la serie de Fibonacci hasta 10000\n");
	printf("%i, %i, ", num1, num2);
	while(res<10000) {
		res=num1+num2;
		if(res>10000) {
			break;
		}
		num1=num2;
		num2=res;
		printf("%i, ", res);
	}
}
