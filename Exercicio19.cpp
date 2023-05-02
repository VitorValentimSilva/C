/*
Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O aluguel de um carro custa R$90 por dia para carro 
popular e R$150 por dia para arro de luxo. Além disso, o cliente paga por Km percorrido. Faça um programa que leia o tipo
de carro alugado (popular ou luxo), quantos dias de aluguel e quantos Km foram percorridos. No final mostre o preço a ser
pago de acordo com a tabela a seguir:
 - Carros populares (aluguel de R$90 por dia)
 - Até 100Km percorridos: R$0,20 por Km
 - Acima de 100Km percorridos: R$0,10 por Km
 - Carros de luxo (aluguel de R$150 por dia)
 - Até 200Km percorridos: R$0,30 por Km
 - Acima de 200Km percorridos: R$0,25 por Km
*/

#include <stdio.h>

int main(){
	
	char T[10];
	int D, K;
	float S1, S2, S3;
	
	printf("Que tipo de carro voce alugou (popular ou luxo): \n");
	scanf("%s", &T);
	
	printf("Quantos dias: \n");
	scanf("%d", &D);
	
	printf("E quantos Km foram percorridos? \n");
	scanf("%d", &K);
	
	if (T[7] == 'popular'){
		if (K <= 100){
			S1 = D * 90;
			S2 = K * 0.20;
			S3 = S1 + S2;
			printf("Tem que pagar: %.2f",S3);
		}
		else{
			S1 = D * 90;
			S2 = K * 0.10;
			S3 = S1 + S2;
			printf("Tem que pagar: %.2f",S3);
		}
	}
	else{
		if (K <= 200){
			S1 = D * 150;
			S2 = K * 0.30;
			S3 = S1 + S2;
			printf("Tem que pagar: %.2f",S3);
		}
		else{
			S1 = D * 150;
			S2 = K * 0.25;
			S3 = S1 + S2;
			printf("Tem que pagar: %.2f",S3);
		}
	}
}
