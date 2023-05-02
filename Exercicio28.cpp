/*
Fazer um programa que calcule o resultado final das eleições para a presidência de um clube, sabendo-se que: 
a) existem três chapas concorrendo; 
b) os eleitores votaram fornecendo o número da chapa escolhida;
c) votaram ao todo 200 membros do clube

O programa deverá processar os votos recebidos e fornecer o total de votos de cada uma das chapas, o total de votos em 
branco e o total de votos nulos. Além disso, o programa deverá verificar se a chapa mais votada é vencedora no primeiro 
turno da eleição (mais de 50% dos votos) ou se deverá ocorrer um segundo turno.
*/

#include <stdio.h>

int main(){
	
	int i = 1, c0, c1 = 0, c2 = 0, c3 = 0, vn = 0, vb = 0;
	
	while (i <= 200){
		
		printf("Chapa-1 [1] \n");
		printf("Chapa-2 [2] \n");
		printf("Chapa-3 [3] \n");
		printf("Voto nulo [4] \n");
		printf("Voto branco [5] \n");
		scanf("%d", &c0);
		
		switch (c0){
			
			case 1:
				c1++;
				break;
			case 2 :
				c2++;
				break;
			case 3:
				c3++;
				break;
			case 4:
				vn++;
				break;
			case 5:
				vb++;
				break;
			default:
				printf("Valor invalido.");
				break;
		}
		
		i++;
	}
	
	if (c1 >= 101){
		printf("A chapa 1 teve %d votos \n",c1);
		printf("E com isso ja ganharam o primeiro turno! \n");
	}
	else if (c2 >= 101){
		printf("A chapa 2 teve %d votos \n",c2);
		printf("E com isso ja ganharam o primeiro turno! \n");
	}
	else if (c3 >= 101){
		printf("A chapa 3 teve %d votos \n",c3);
		printf("E com isso ja ganharam o primeiro turno! \n");
	}
	
	printf("Total de votos nulos: %d \n",vn);
	printf("Total de votos brancos: %d \n",vb);
	printf("Total de votos da chapa 1: %d \n",c1);
	printf("Total de votos da chapa 2: %d \n",c2);
	printf("Total de votos da chapa 3: %d",c3);
}
