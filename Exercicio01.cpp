/*
Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o seu novo salário, com 15% de aumento.
*/

#include <stdio.h>

int main(){
	
	float S, A;
	
	printf("Salario: \n");
	scanf("%f", &S);
	
	A = (S * 115) / 100;
	
	printf("Novo salario: %.2f",A);
}
