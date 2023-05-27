#include <stdio.h>

const int MAX_LINHAS = 3;
const int MAX_COLUNAS = 3;
const int MAX_POSICOES = 9; 

int main() {
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int maior = 0;
    int posicoes[MAX_POSICOES][2]; 
    int numPosicoes = 0; 
    
    printf("Digite os elementos da matriz %dx%d:\n", MAX_LINHAS, MAX_COLUNAS);
    for (int i = 0; i < MAX_LINHAS; i++) {
        for (int j = 0; j < MAX_COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                numPosicoes = 0;
            }

            if (matriz[i][j] == maior) {
                posicoes[numPosicoes][0] = i;
                posicoes[numPosicoes][1] = j;
                numPosicoes++;
            }
        }
    }

    printf("\nMaior elemento da matriz: %d\n", maior);
    printf("Posições do maior elemento:\n");
    for (int i = 0; i < numPosicoes; i++) {
        printf("Linha: %d, Coluna: %d\n", posicoes[i][0], posicoes[i][1]);
    }
}

