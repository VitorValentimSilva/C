/*
Dados dois números inteiros e distintos, construa um algoritmo que seja capaz de definir qual é o maior número, dentre os
números fornecidos.
*/

#include <stdio.h>

int main(){
	
	int N1, N2;
	
	printf("Numero 1: \n");
	scanf("%d", &N1);
	
	printf("Numero 2: \n");
	scanf("%d", &N2);
	
	if (N1 > N2){
		printf("Maior numero: %d",N1);
	}
	else{
		printf("Maior numero: %d",N2);
	}
}
