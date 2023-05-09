/*
Desenvolva um algoritmo que receba a quantidade de pe�as vendidas por cada vendedor e armazene essas quantidades em um 
vetor. Receba tamb�m o pre�o da pe�a vendida de cada vendedor e armazene esses pre�os em outro vetor. 
Existem apenas 10 vendedores, e cada vendedor pode vender apenas um tipo de pe�a, isto �, para cada vendedor existe 
apenas um pre�o.
Calcule e exiba a quantidade total de pe�as vendidas por todos vendedores e, para cada vendedor, calcule e exiba o valor 
total da venda.
*/

#include <stdio.h>

int main(){
	
	int vv[10], qtv = 0, i;
	float pre[10], qtp1 = 0, qtp2 = 0;
	
	for (i=0; i<10; i++){
		
		printf("Quantidade de pecas vendidas pelo vendedor %d: \n",i+1);
		scanf("%d", &vv[i]);
		
		printf("E qual o preco da peca do vendedor %d: \n",i+1);
		scanf("%f", &pre[i]);
		
		if (vv[i] >= 0){
			qtv = qtv + vv[i];
		}
		if (pre[i] >= 0){
			qtp1 = vv[i] * pre[i];
			qtp2 = qtp2 + qtp1;
		}
	}
	
	printf("Quantidade total de pecas vendidas por todos os vendedores: %d \n",qtv);
	printf("Valor total das vendas: %.2f",qtp2);
}
