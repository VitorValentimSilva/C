/*
Crie um programa que leia o n�mero de dias trabalhados em um m�s e mostre o sal�rio de um funcion�rio, sabendo que ele 
trabalha 8 horas por dia e ganha R$25 por hora trabalhada.
*/

#include <stdio.h>

int main(){
	
	int D, H, S;
	
	printf("Quandos dias foram trabalhados no mes? \n");
	scanf("%d", &D);
	
	H = D * 8;
	S = H * 25;
	
	printf("Salario: %d",S);
}
