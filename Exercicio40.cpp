/*
Um sistema de controle de estoque armazena código do produto, quantidade em estoque e preço unitário de até 40 produtos. 
Faça um menu que exiba as seguintes opções:

MENU
1 - Cadastrar produtos <código, quantidade, preço>
2 - Debitar a quantidade no estoque de um produto <código, quantidade> **verificar a disponibilidade
3 - Consultar a quantidade de estoque de um produto <código>
4 - Consultar o preço unitário de um produto <código>
5 - Exibir o valor a pagar para um produto e uma determinada quantidade <código, quantidade>
6 - Sair
*/

#include <stdio.h>
#define tf 5

int main(){
	
	int menu, i, codp[tf], qes[tf], quap;
	float pre[tf];
	
	for (i=1; menu!=6; i++){
	printf("MENU \n");
	printf("1 - Cadastrar produtos \n");
	printf("2 - Debitar a quantidade no estoque de um produto \n");
	printf("3 - Consultar a quantidade de estoque de um produto \n");
	printf("4 - Consultar o preço unitário de um produto \n");
	printf("5 - Exibir o valor a pagar para um produto e uma determinada quantidade \n");
	printf("6 - Sair \n");
	scanf("%d", &menu);
	
	switch (menu){
		
		case 1:
			printf("Codigo do produto: \n"),
			scanf("%d", &codp);
				
			printf("Quantidade em estoque: \n");
			scanf("%d", &qes);
			
			printf("Preco: \n");
			scanf("%f", &pre);
			
			break;
		case 2:
			printf("Codigo do produto: \n"),
			scanf("%d", &codp);
				
			printf("Quantidade em estoque: \n");
			scanf("%d", &qes);
			
			
			
			break;
		case 3:
			printf("Codigo do produto: \n"),
			scanf("%d", &codp);
			
			
			
			break;
		case 4:
			printf("Codigo do produto: \n"),
			scanf("%d", &codp);
			
			
			
			break;
		case 5:
			printf("Codigo do produto: \n"),
			scanf("%d", &codp);
				
			printf("Quantidade do produto: \n");
			scanf("%d", &quap);
			
			
			
			break;
			
			
	}
	}
}
