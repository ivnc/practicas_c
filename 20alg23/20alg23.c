#include <stdlib.h>
#include <stdio.h>

int main() {
	int min;
	int max;
	printf("Esta aplicaci�n recoge dos n�meros enterosintroducidos por el usuario y devuelve los impares entre ellos, calculando el mayor.\n");
	printf("Introduzca dos n�meros enteros, separados por Enter, escribiendo primero el m�nimo y luego el m�ximo:\n");
	scanf("%i", &min);
	scanf("%i", &max);
	printf("Los n�meros impares son, de menor a mayor: ");
	if(max<=min) {
		printf("Error: Se debe introducir primero el n�mero m�nimo y a continuaci�n el m�ximo. Ha introducido primero el m�ximo y luego el m�nimo, o bien dos n�meros iguales entre los que no hay enteros.");
		exit(0);
	}
	for(int num=min+1; num<max; num++) {
		if(num%2!=0) {
			printf("%i, ", num);
		}
	}
	printf("siendo este �ltimo el mayor.");
}
