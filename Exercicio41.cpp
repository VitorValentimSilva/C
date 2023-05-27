#include <stdio.h>

const int LINHAS = 3;
const int COLUNAS = 3;

int main() {
    int matriz[LINHAS][COLUNAS];
    int maior = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("O maior elemento da matriz e': %d\n", maior);
}

