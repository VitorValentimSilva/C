/*
Fa�a um algoritmo que receba o sal�rio base, a idade, o ano de contrata��o e o n�mero de dependentes de um funcion�rio de 
uma empresa. Deve-se receber tamb�m o ano atual. Calcule o seu sal�rio final, sabendo que este � calculado adicionando ao
sal�rio base, os seguintes acr�scimos:
1% por cada ano de idade superior a 25 anos.
3% por cada ano de casa.
5% por dependente.
*/

#include <stdio.h>

int main(){
	
	float S1, S2, S3, S4, S5, S6;
	int I1, I2, AC, D, AA, A;
	
	printf("Salario: \n");
	scanf("%f", &S1);
	
	printf("Idade: \n");
	scanf("%d", &I1);
	
	printf("Ano de contratacao: \n");
	scanf("%d", &AC);
	
	printf("Numero de dependentes: \n");
	scanf("%d", &D);
	
	printf("Ano atual: \n");
	scanf("%d", &AA);
	
	if (I1 > 25){
		I2 = I1 - 25;
		S2 = I2 * 0.01;
		A= AA - AC;
		S3 = A * 0.03;
		S4 = D * 0.05;
		S5 = S2 + S3 + S4 + 1;
		S6 = S1 * S5;
		printf("O seu novo salario: %.2f",S6);
	}
	else{
		A = AC - AA;
		S2 = A * 0.03;
		S3 = D * 0.05;
		S4 = S2 + S3 + 1;
		S5 = S1 * S4;
		printf("O seu novo salario: %.2f",S5);
	}
}
