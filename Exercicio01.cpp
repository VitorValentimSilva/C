/*
Fa�a um algoritmo que leia o sal�rio de um funcion�rio, calcule e mostre o seu novo sal�rio, com 15% de aumento.
*/

#include <stdio.h>

int main(){
	
	float S, A;
	
	printf("Salario: \n");
	scanf("%f", &S);
	
	A = (S * 115) / 100;
	
	printf("Novo salario: %.2f",A);
}
