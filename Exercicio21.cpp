/*
Escreva um algoritmo que receba a idade de 10 pessoas, calcule e exiba a quantidade de pessoas maiores de idade, sendo 
que a maioridade é obtida após se completar 18 anos.
*/

#include <stdio.h>

int main(){
	
	int i = 1, d = 0, idade;
	
	while (i <= 10){
		printf("Idade: \n");
		scanf("%d", &idade);
		if (idade >= 18){
			d++;
		}
		i++;
	}
	
	printf("Quantidade de pessoas maiores de idade: %d",d);
}
