/*
Ao ser fornecido um vetor, uma posição e um elemento, insira o elemento na posição especificada, sem perder o valor 
anteriormente conhecido.
*/

#include <stdio.h>

int main() {
	
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int posicao, elemento, i;
    
    printf("Digite a posicao onde deseja inserir o elemento: ");
    scanf("%d", &posicao);
    
    printf("Digite o elemento a ser inserido: ");
    scanf("%d", &elemento);
    
    for (i = 9; i >= posicao; i--) {
        vetor[i+1] = vetor[i];
    }
    
    vetor[posicao] = elemento;
    
    printf("\nVetor resultante:\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", vetor[i]);
    }
}

