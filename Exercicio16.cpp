/*
Elabore um algoritmo que calcule o que deve ser pago por um curso, considerando o preço normal de venda e a escolha da 
condição de pagamento. Utilize os códigos da tabela a seguir para informar qual a condição de pagamento escolhida pelo 
Usuário e efetue o cálculo adequado.
Depois de executado o cálculo, deve-se informar ao Usuário o valor de venda, o valor do desconto ou juros, e o valor 
total a ser pago.
Código	Condição de Pagamento
1	À vista em dinheiro ou cheque, recebe 10% de desconto.
2	À vista no cartão de crédito, recebe 5% de desconto.
3	Em 2 vezes, preço normal de venda sem juros.
4	Em 3 vezes, preço normal de venda mais juros de 10%.
*/

#include <stdio.h>

int main(){
	
	int D;
	float C, P, S;
	
	printf("Valor do curso: \n");
	scanf("%f", &C);
	printf("A vista em dinheiro ou cheque, recebe 10%% de desconto.[1] \n");
	printf("A vista no cartão de crédito, recebe 5%% de desconto.[2] \n");
	printf("Em 2 vezes, preço normal de venda sem juros.[3] \n");
	printf("Em 3 vezes, preço normal de venda mais juros de 10%%.[4] \n");
	scanf("%d", &D);
	
	switch(D){
		
		case 1:
			P = C * 90 / 100;
			printf("O valor do curso e' %.2f e o desconto vai ser de 10%% \n",C);
			printf("Entao voce vai pagar: %.2f",P);
			break;
		case 2:
			P = C * 95 / 100;
			printf("O valor do curso e' %.2f e o desconto vai ser de 5%% \n",C);
			printf("Entao voce vai pagar: %.2f",P);
			break;
		case 3:
			P = C / 2;
			printf("O valor do curso e' %.2f e voce vai parcelar em 2 vezes sem juros \n",C);
			printf("Entao voce vai pagar %.2f por mes",P);
			break;
		case 4:
			P = C * 110 / 100;
			S = P / 3;
			printf("O valor do curso e' %.2f e voce vai parcelar em 3 com juros de 10%% \n",C);
			printf("Entao voce vai pagar %.2f por mes e no total fica: %.2f",S,P);
			break;
		default:
			printf("Valor invalido.");
			break;	
	}
}
