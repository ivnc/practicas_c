#include <stdlib.h>
#include <stdio.h>

int main() {
	int min;
	int max;
	printf("Esta aplicación recoge dos números enterosintroducidos por el usuario y devuelve los impares entre ellos, calculando el mayor.\n");
	printf("Introduzca dos números enteros, separados por Enter, escribiendo primero el mínimo y luego el máximo:\n");
	scanf("%i", &min);
	scanf("%i", &max);
	printf("Los números impares son, de menor a mayor: ");
	if(max<=min) {
		printf("Error: Se debe introducir primero el número mínimo y a continuación el máximo. Ha introducido primero el máximo y luego el mínimo, o bien dos números iguales entre los que no hay enteros.");
		exit(0);
	}
	for(int num=min+1; num<max; num++) {
		if(num%2!=0) {
			printf("%i, ", num);
		}
	}
	printf("siendo este último el mayor.");
}
