/*
Faça um algoritmo que carregue uma matriz com números reais, calcule e exiba a soma dos elementos da diagonal principal
*/

#include <stdio.h>

const int LINHAS = 3;
const int COLUNAS = 3;

int main(){
	
	float matriz[LINHAS][COLUNAS];
	float soma = 0;
	int i, j;
	
	printf ("Digite os elementos da matriz 3x3: \n");
	
	for (i = 0; i < LINHAS; i++){
		for (j = 0; j < COLUNAS; j++){
			printf("Elementos [%d][%d]: ", i, j);
			scanf ("%f", &matriz[i][j]);
		}
	}
	
	soma = matriz[0][0] + matriz[1][1] + matriz[2][2];
	
	printf("A soma dos elementos da diagonal principal e': %.2f", soma);
}
