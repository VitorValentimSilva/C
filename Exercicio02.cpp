/*
A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva um programa que pergunte a quantidade de Km 
percorridos por um carro alugado e a quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar,
sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado
*/

#include <stdio.h>

int main(){
	
	float Km1, Km2, P;
	int D1, D2;
	
	printf("Qual foi a quantidade de Km percorridos pelo carro alugado? \n");
	scanf("%f", &Km1);
	
	printf("E qual foi a quantidade de dias? \n");
	scanf("%d", &D1);
	
	D2 = D1 * 90;
	Km2 = Km1 * 0.20;
	P = D2 + Km2;
	
	printf("Valor a pagar: %.2f",P);
}
