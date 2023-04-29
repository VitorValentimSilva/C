/*
Dado um número inteiro, construa um algoritmo que seja capaz de definir se o número fornecido é par ou ímpar, exibindo o 
resto da divisão por 2. 
Par ' Se (Numero % 2) ==0 
ÍmPar ' Se (Numero % 2) !=0
*/

#include <stdio.h>

int main(){
	
	int n;
	
	printf("Numero: \n");
	scanf("%d", &n);
	
	if (n % 2 == 0){
		printf("PAR");
	}
	else{
		printf("IMPAR");
	}
}
