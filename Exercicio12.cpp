/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um programa para calcular e exibir o peso ideal, 
utilizando as seguintes fórmulas: 
para homens: (72.7 * altura) - 58; 
para mulheres: (62.1 * altura) - 44.7.
*/

#include <stdio.h>

int main(){
	
	float A, P1, P2;
	char S[1];
	
	printf("Qual a sua altura? \n");
	scanf("%f", &A);
	
	printf("Qual o seu sexo [m/f]? \n");
	scanf("%s", &S);
	
	if (S[0] == 'm'){
		P1 = (A * 72.7)- 58;
		printf("%.2f",P1);
	}
	else{
		P2 = (A * 62.1) - 44.7;
		printf("%.2f",P2);
	}
}
