#include <stdio.h>
#include <stdlib.h>

int main() {
	//	 Define vehiculos
	int tur;
	int tt;
	// Solicita cambios al usuario
	printf("Esta aplicaci�n calcula las necesidades de combustible.\n");
	printf("Introduzca n�mero de turismos (p.ej. 32):\n");
	scanf("%i", &tur);
	printf("Introduzca n�mero de todoterrenos (p.ej. 11):\n");
	scanf("%i", &tt);
	// Capacidades
	int ctur=40;
	int ctt=65;
	// Calculo
	int comb=tur*ctur+tt*ctt;
	printf("Las necesidades de combustible son de %i.\nSe tom� como base una cantidad de turismos de %i con %i de capacidad, y de %i de todoterrenos con %i de capacidad", comb, tur, ctur, tt, ctt);
}
