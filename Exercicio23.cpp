/*
Escreva um algoritmo que receba um conjunto de valores inteiros, calcule e exiba o maior e o menor valor do conjunto.
Para encerrar a entrada de dados, deve ser digitado o valor zero;
Para valores negativos, deve ser enviada uma mensagem;
Esses valores (zero e negativos) não entrarão nos cálculos.
*/

#include <stdio.h>

int main(){
	
	int i = 1, n, ma, me = 10000000;
	
	do {
		printf("Digite um numero: \n");
		scanf("%d", &n);
		
		if (n > ma){
			ma = n;
		}
		if (n < me && n != 0){
			me = n;
		}
		
		if (n < 0){
			printf("Esses valores (zero e negativos) não entrarão nos cálculos.");
		}
		
	} while (n != 0);
	
	printf("O maior valor digitado: %d \n",ma);
	printf("O menor valor digitado: %d",me);
}
