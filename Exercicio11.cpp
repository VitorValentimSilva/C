/*
Faça um programa que leia dois valores inteiros. Se os valores forem iguais deverá se somar os dois, caso contrário 
multiplique um valor pelo outro. Ao final de qualquer um dos cálculos deve-se atribuir o resultado para uma variável C e 
mostrar seu conteúdo na tela.
*/

#include <stdio.h>

int main(){
	
	int N1, N2, S1, S2;
	
	printf("Numero 1: \n");
	scanf("%d", &N1);
	
	printf("Numero 2: \n");
	scanf("%d", &N2);
	
	if (N1 == N2){
		S1 = N1 + N2;
		printf("C: %d",S1);
	}
	else{
		S2 = N1 * N2;
		printf("C: %d",S2);
	}
}
