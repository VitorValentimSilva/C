/*
Faça um algoritmo que receba os valores das vendas de 5 produtos em 3 lojas distintas nos meses de junho, julho e agosto, 
e armazene esses valores em 3 matrizes distintas em que cada linha represente um produto e cada coluna represente uma 
loja.Calcule e exiba:
O total vendido de cada produto em cada loja no trimestre;
O total vendido de cada produto em todas as lojas no trimestre;
O total vendido em cada loja no trimestre;
Se todos os produtos em todas as lojas tiverem um aumento de 15%, quais seriam os novos valores do trimestre.
*/

#include <stdio.h>

const int PRODUTOS = 5;
const int LOJAS = 3;
const int MES = 3;

int main(){
	
	float vendas[PRODUTOS][LOJAS][MES];
	float total[PRODUTOS][LOJAS] = {0};
	float totalPorProduto[PRODUTOS] = {0};
	float totalPorLojas[LOJAS] = {0};
	float vendasNovas[PRODUTOS][LOJAS][MES];
	int i, j, k;
	
	printf("Digite os valores das vendas do mes de junho[mes 1], julho[mes 2] e agosto[mes 3]: \n");
	
	for (i = 0; i < PRODUTOS; i++){
		for (j = 0; j < LOJAS; j++){
			for (k = 0; k < MES; k++){
				printf("Digite o valor de vendas do produto %d na loja %d no mes %d: ", i + 1, j + 1, k + 1);
                scanf("%f", &vendas[i][j][k]);
			}
		}
	}
	
	printf("\n Total vendido por produto em cada loja: \n");
	
    for (i = 0; i < PRODUTOS; i++) {
        printf("Produto %d:\n", i + 1);
        for (j = 0; j < LOJAS; j++) {
            printf(" Loja %d: %.2f\n", j + 1, total[i][j]);
        }
        printf("\n");
    }
    
    printf("\n Total vendido de cada produto em todas as lojas: \n");
    
    for (i = 0; i < PRODUTOS; i++) {
        printf("Produto %d: %.2f\n", i + 1, totalPorProduto[i]);
    }
    
    printf("\n Total vendido em cada loja no trimestre: \n");
    
    for (i = 0; i < LOJAS; i++) {
        printf("Produto %d: %.2f\n", i + 1, totalPorLojas[j]);
    }
    
    for (i = 0; i < PRODUTOS; i++) {
        for (j = 0; j < LOJAS; j++) {
            for (k = 0; k < MES; k++) {
                vendasNovas[i][j][k] = vendas[i][j][k] * 1.15;
            }
        }
    }

    printf("\n Novos valores do trimestre com aumento de 15%%: \n");
    for (i = 0; i < PRODUTOS; i++) {
        for (j = 0; j < LOJAS; j++) {
            for (k = 0; k < MES; k++) {
                printf("Produto %d | Loja %d | Mês %d: %.2f \n", i + 1, j + 1, k + 1, vendasNovas[i][j][k]);
            }
        }
    }
}
