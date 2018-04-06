#include <stdio.h>
#include <stdlib.h>

int main() {
	float centitemp;
	printf("Esta aplicación recoge una temperatura en grados centígrados y devuelve la conversión a grados Fahrenheit y Kelvin.\n");
	printf("Introduzca la temperatura, solo número. Puede usar decimales separando con punto y números negativos:\n");
	scanf("%f", &centitemp);
	float kelvintemp=centitemp+273.15;
	float fahrentemp=centitemp*1.8+32;
	printf("Las temperaturas resultantes de la conversión son:\n%fºC=%fK=%fºF", centitemp, kelvintemp, fahrentemp);
}
