#include <stdio.h>
#include <stdlib.h>

int main() {
	float precio;
	int dto;
	printf("Esta aplicación recoge un precio y calcula el descuento a aplicar sobre el mismo.\n");
	printf("Introducir importe:\n");
	scanf("%f", &precio);
	if(precio>15000) {
		dto=10;
	}
	else if(precio<10000) {
		dto=2;
	}
	else {
		dto=5;
	}
	float final=precio*(100-dto)/100;
	printf("Precio final aplicando descuento del %i%% sobre %f: %f", dto, precio, final);
}
