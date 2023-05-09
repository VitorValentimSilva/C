/*
Uma loja de calçados anota diariamente a quantidade de pares vendidos. Determinar em que dia do mês de abril ocorreu a 
maior venda e qual foi a quantidade de pares de calçados vendidos neste dia
*/

#include <stdio.h>

int main(){
	
	int i, par, mai = 0, dia = 0;
	
	for (i = 1;i <=30;i++){
		
		printf("Quantidade de pares venditos no dia %d de abril: \n",i);
		scanf("%d", &par);
		
		if (par > mai){
			mai = par;
			dia = i;
		}
	}
	
	printf("Dia que ocorreu maior venda: %d \n",dia);
	printf("Quantidade de pares vendidos nesse dia: %d",mai);
}
