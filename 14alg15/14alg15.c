#include <stdlib.h>
#include <stdio.h>

int main() {
	float nota;
	printf("Esta aplicación recoge un número real entre 0 y 10 y devuelve la descripción de la calificación.\n");
	printf("Introducir número real entre 0 y 10 (nota)");
	scanf("%f", &nota);
	printf("Para una nota de %f, el resultado es ", nota);
	if(nota>=0 && nota<5) {
		printf("Suspenso");
	}
	else if(nota>=5 && nota<6.5) {
		printf("Aprobado");
	}
	else if(nota>=6.5 && nota<8.5) {
		printf("Notable");
	}
	else if(nota>=8.5 && nota<10) {
		printf("Sobresaliente");
	}
	else if(nota==10) {
		printf("Matrícula de honor");
	}
	else {
		printf("Entrada no válida, se necesita un número real entre 0 y 10 incluidos");
	}
}
