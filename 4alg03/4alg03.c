#include <stdio.h>
#include <stdlib.h>

int main() {
	float centitemp;
	printf("Esta aplicaci�n recoge una temperatura en grados cent�grados y devuelve la conversi�n a grados Fahrenheit y Kelvin.\n");
	printf("Introduzca la temperatura, solo n�mero. Puede usar decimales separando con punto y n�meros negativos:\n");
	scanf("%f", &centitemp);
	float kelvintemp=centitemp+273.15;
	float fahrentemp=centitemp*1.8+32;
	printf("Las temperaturas resultantes de la conversi�n son:\n%f�C=%fK=%f�F", centitemp, kelvintemp, fahrentemp);
}
