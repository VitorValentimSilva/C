/*
Uma empresa precisa reajustar o salário dos seus funcionários, dando um aumento de acordo com alguns fatores. Faça um 
programa que leia o salário atual, o gênero do funcionário e há quantos anos esse funcionário trabalha na empresa. 
No final, mostre o seu novo salário, baseado na tabela a seguir:
- Mulheres
 - menos de 15 anos de empresa: +5%
 - de 15 até 20 anos de empresa: +12%
 - mais de 20 anos de empresa: +23%
- Homens
 - menos de 20 anos de empresa: +3%
 - de 20 até 30 anos de empresa: +13%
 - mais de 30 anos de empresa: +25%
*/

#include <stdio.h>

int main(){
	
	float Sa, Ns;
	char S[1];
	int A;
	
	printf("Salario atual: \n");
	scanf("%f", &Sa);
	
	printf("Sexo[m/f]: \n");
	scanf("%s", &S);
	
	printf("Quantos anos voce trabalha na empresa: \n");
	scanf("%d", &A);
	
	if (S[1] == 'f'){
		if (A < 15){
			Ns = Sa * 105 / 100;
			printf("Novo salario: %.2f",Ns);
		}
		else if (A > 20){
			Ns = Sa * 123 / 100;
			printf("Novo salario: %.2f",Ns);
		}
		else{
			Ns = Sa * 123 / 100;
			printf("Novo salario: %.2f",Ns);
		}
	}
	else{
		if (A < 20){
			Ns = Sa * 103 / 100;
			printf("Novo salario: %.2f",Ns);
		}
		else if (A > 30){
			Ns = Sa * 125 / 100;
			printf("Novo salario: %.2f",Ns);
		}
		else{
			Ns = Sa * 113 / 100;
			printf("Novo salario: %.2f",Ns);
		}
	}
}
