/*
Faça um programa que deverá permitir que o usuário entre com os valores dos elementos de uma
matriz quadrada de ordem 4 e possibilite o usuário realizar as seguintes funcionalidades:
a) Imprimir todos os elementos da matriz;
b) Somar os quadrados de todos os elementos da primeira coluna;
c) Somar todos os elementos da terceira linha;
d) Somar os elementos da diagonal principal; e
e) Somar todos os elementos de índice par da segunda linha.
*/

#include <stdio.h>

#define L 4
#define C 4

int main(){
	
	int i, j, esco;
	int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0; 
	int matriz[L][C];
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("Digite a linha %d da coluna %d: \n", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	do{
		printf("--------------------------------------------------------------------- \n");
		printf("Escolha oque voce quer(Digite 0 para sair): \n");
		printf("--------------------------------------------------------------------- \n");
		printf("Imprimir todos os elementos da matriz(Digite 1) \n");
		printf("Somar os quadrados de todos os elementos da primeira coluna(Digite 2) \n");
		printf("Somar todos os elementos da terceira linha(Digite 3) \n");
		printf("Somar os elementos da diagonal principal(Digite 4) \n");
		printf("Somar todos os elementos de indice par da segunda linha(Digite 5) \n");
		printf("--------------------------------------------------------------------- \n");
		scanf("%d", &esco);
		
		switch(esco){
			case 1:
				for(i = 0; i < 4; i++){
					printf(" |");
					for(j = 0; j < 4; j++){
						printf(" %d ", matriz[i][j]);
					}
					printf("| \n");
				}
				break;
				
			case 2:
				for(i = 0; i < 4; i++){
					for(j = 0; j < 1; j++){
						soma1 += matriz[i][j];
					}
				}
				
				printf(" Resposta: %d \n", soma1);
				break;
				
			case 3:
				for(j = 0; j < 4; j++){
					soma2 += matriz[2][j];
				}
				
				printf(" Resposta: %d \n", soma2);
				break;
				
			case 4:
				j = 0;
				for(i = 0; i < 4; i++){
					soma3 += matriz[i][j];
					j++;
				}
				
				printf(" Resposta: %d \n", soma3);
				break;
				
			case 5:
				for(j = 0; j < 4; j++){
					if(matriz[1][j] % 2 == 0){
						soma4 += matriz[1][j];
					}
				}
				
				if(soma4 == 0){
					printf("Nenhum valor da linha 2 e' par! \n");
				}
				else{
					printf(" Resposta: %d \n", soma4);
				}
				break;
				
			default:
				printf("Valor digitado invalido! \n");
				break;
		}
	} while(esco != 0);
}
