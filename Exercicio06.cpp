/*
Fa�a um algoritmo que receba o sal�rio do funcion�rio, calcule e exiba a porcentagem de reajuste e o sal�rio reajustado 
do funcion�rio de acordo com a seguinte regra: o sal�rios at� R$ 800,00, reajuste de 50%; o	sal�rios maiores que R$ 800,00,
reajuste de 30%.
*/

#include <stdio.h>

int main(){
	
	float S, NS1, NS2;
	
	printf("Salario: \n");
	scanf("%f", &S);
	
	NS1 = (S * 150) / 100;
	NS2 = (S * 130) / 100;
	
	if (S <= 800){
		printf("Voce teve um reajuste de 50%% no seu salario \n");
		printf("O seu novo salario: %.2f",NS1);
	}
	else{
		printf("Voce teve um reajuste de 30%% no seu salario \n");
		printf("O seu novo salario: %.2f",NS2);
	}
}
