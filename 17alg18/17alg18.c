#include <stdlib.h>
#include <stdio.h>

int main() {
	int hab;
	int plt;
	int cam;
	printf("Este programa recoge un n�mero de habitaci�n e informa acerca de sus caracter�sticas.\nSeleccione una habitaci�n entre las siguientes indicando su n�mero:\n");
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
		printf("Error: N�mero de habitaci�n no v�lido. Int�ntelo de nuevo escogiendo una de entre las anteriores, escribiendo s�lo su n�mero");
		exit(0);
	}
	printf("Ha seleccionado la habitaci�n n� %i.\nSituaci�n: planta %i�\nCapacidad: %i camas", hab, plt, cam);
}
