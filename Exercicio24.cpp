/*
Faça um algoritmo que receba a idade e a altura de várias pessoas. Calcule e exiba a média das alturas das pessoas com 
mais de 50 anos. Para encerrar a entrada de dados, digite uma idade negativa ou igual a zero.
*/

#include <stdio.h>

int main(){
	
	int i;
	float a, m1 = 0, m2 = 0, m3;
	
	do{
		printf("Idade(0 para sair): \n");
		scanf("%d", &i);
		
		printf("Altura(0 para sair): \n");
		scanf("%f", &a);
	
		if (i > 50){
			m1 = m1 + a;
			m2++;
		}
		
		m3 = m1  / m2;
			
	} while (i != 0);
	
	printf("Media das altiras das pessoas com mais de 50 anos: %.2f",m3);
}
