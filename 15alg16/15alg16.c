#include <stdio.h>

int main() {
	int opcion;
	printf("Seleccione una opci�n mediante su n�mero:\n");
	printf("1. Archivo\n2. Buscar\n3. Salir\n");
	scanf("%i", &opcion);
	switch(opcion) {
	case 1:
		printf("Ha elegido archivo.");
		break;
	case 2:
		printf("Ha elegido buscar");
		break;
	case 3:
		printf("Ha elegido salir");
		break;
	default:
		printf("Opci�n no v�lida. Introduzca un n�mero de acci�n de la lista");
	}
	printf(". Gracias.");
}
