/*
Faça um programa que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que C.
*/

#include <stdio.h>

int main(){
	
	float A, B, C, S;
	
	printf("A: \n");
	scanf("%f", &A);
	
	printf("B: \n");
	scanf("%f", &B);
	
	printf("C: \n");
	scanf("%f", &C);
	
	S = A + B;
	
	if (S < C){
		printf("A: %.2f \n",A);
		printf("B: %.2f \n",B);
		printf("C: %.2f \n",C);
		printf("Menor");
	}
	else{
		printf("A: %.2f \n",A);
		printf("B: %.2f \n",B);
		printf("C: %.2f \n",C);
		printf("Maior");	
	}
}
