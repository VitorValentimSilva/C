/*
Fa�a um algoritmo que receba duas notas de um aluno, calcule a m�dia aritm�tica e exiba mensagem de "APROVADO" ou 
"REPROVADO", considerando a m�dia de aprova��o maior ou igual a 6,0.
*/

#include <stdio.h>

int main(){
	
	float N1, N2, S, M;
	
	printf("Nota 1: \n");
	scanf("%f", &N1);
	
	printf("Nota 2: \n");
	scanf("%f", &N2);
	
	S = N1 + N2;
	M = S / 2;
	
	if(M >= 6){
		printf("APROVADO");
	}
	else{
		printf("REPROVADO");
	}
}
