/*
Uma loja de cal�ados anota diariamente a quantidade de pares vendidos. Determinar em que dia do m�s de mar�o ocorreu a 
maior venda e qual foi a quantidade de pares de cal�ados vendidos neste dia.
*/

#include <stdio.h>

int main(){
	
	int i = 1, p, d, ma;
	
	while (i <= 31){
		
		printf("Quantidade de pares vendidos no dia %d de marco? \n",i);
		scanf("%d", &p);
		
		if (p > ma){
			ma = p;
			d = i;
		}
		
		i++;
	}
	
	printf("O dia de marco que mais vendeu foi no dia %d \n",d);
	printf("E a quantidade vendida foi de %d pares",ma);
}
