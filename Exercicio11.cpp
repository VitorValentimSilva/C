/*
Fa�a um programa que leia dois valores inteiros. Se os valores forem iguais dever� se somar os dois, caso contr�rio 
multiplique um valor pelo outro. Ao final de qualquer um dos c�lculos deve-se atribuir o resultado para uma vari�vel C e 
mostrar seu conte�do na tela.
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
