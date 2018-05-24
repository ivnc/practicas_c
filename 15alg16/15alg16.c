#include <stdio.h>

int main() {
	int opcion;
	printf("Seleccione una opción mediante su número:\n");
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
		printf("Opción no válida. Introduzca un número de acción de la lista");
	}
	printf(". Gracias.");
}
