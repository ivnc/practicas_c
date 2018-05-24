#include <stdlib.h>
#include <stdio.h>

int main() {
	int hab;
	int plt;
	int cam;
	printf("Este programa recoge un número de habitación e informa acerca de sus características.\nSeleccione una habitación entre las siguientes indicando su número:\n");
	printf("1. Azul\n2. Verde\n3. Roja\n4. Amarilla\n5. Gris\n7. Rosa\n");
	scanf("%i", &hab);
	switch(hab) {
	case 1:
		plt=1;
		cam=2;
		break;
	case 2:
		plt=1;
		cam=1;
		break;
	case 3:
		plt=1;
		cam=3;
		break;
	case 4:
		plt=2;
		cam=2;
		break;
	case 5:
		plt=2;
		cam=1;
		break;
	case 7:
		plt=3;
		cam=3;
		break;
	default:
		printf("Error: Número de habitación no válido. Inténtelo de nuevo escogiendo una de entre las anteriores, escribiendo sólo su número");
		exit(0);
	}
	printf("Ha seleccionado la habitación nº %i.\nSituación: planta %iª\nCapacidad: %i camas", hab, plt, cam);
}
