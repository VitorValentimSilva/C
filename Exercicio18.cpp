/*
Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 80Km/h, exiba uma mensagem dizendo que o 
usuário foi multado. Nesse caso, exiba o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.
*/

#include <stdio.h>

int main(){
	
	int V, M1, M2;
	
	printf("Qual a velocidade do carro[km/h]? \n");
	scanf("%d", &V);
	
	if (V > 80){
		M1 = V - 80;
		M2 = M1 * 5;
		printf("Voce foi multado! \n");
		printf("Voce tera que pagar: %.d",M2);
	}
	else{
		printf("Voce nao foi multado");
	}
}
