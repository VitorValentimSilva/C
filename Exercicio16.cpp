/*
Elabore um algoritmo que calcule o que deve ser pago por um curso, considerando o pre�o normal de venda e a escolha da 
condi��o de pagamento. Utilize os c�digos da tabela a seguir para informar qual a condi��o de pagamento escolhida pelo 
Usu�rio e efetue o c�lculo adequado.
Depois de executado o c�lculo, deve-se informar ao Usu�rio o valor de venda, o valor do desconto ou juros, e o valor 
total a ser pago.
C�digo	Condi��o de Pagamento
1	� vista em dinheiro ou cheque, recebe 10% de desconto.
2	� vista no cart�o de cr�dito, recebe 5% de desconto.
3	Em 2 vezes, pre�o normal de venda sem juros.
4	Em 3 vezes, pre�o normal de venda mais juros de 10%.
*/

#include <stdio.h>

int main(){
	
	int D;
	float C, P, S;
	
	printf("Valor do curso: \n");
	scanf("%f", &C);
	printf("A vista em dinheiro ou cheque, recebe 10%% de desconto.[1] \n");
	printf("A vista no cart�o de cr�dito, recebe 5%% de desconto.[2] \n");
	printf("Em 2 vezes, pre�o normal de venda sem juros.[3] \n");
	printf("Em 3 vezes, pre�o normal de venda mais juros de 10%%.[4] \n");
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
