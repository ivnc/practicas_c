#include <stdlib.h>
#include <stdio.h>

int main() {
	float nota;
	printf("Esta aplicaci�n recoge un n�mero real entre 0 y 10 y devuelve la descripci�n de la calificaci�n.\n");
	printf("Introducir n�mero real entre 0 y 10 (nota)");
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
		printf("Matr�cula de honor");
	}
	else {
		printf("Entrada no v�lida, se necesita un n�mero real entre 0 y 10 incluidos");
	}
}
