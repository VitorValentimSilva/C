#include <stdio.h>

int main() {
	
  int vetor1[10], vetor2[10], vetor_resultante[20];
  int i, j, k;

  printf("Digite os valores do primeiro vetor:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vetor1[i]);
  }

  printf("Digite os valores do segundo vetor:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vetor2[i]);
  }

  i = j = k = 0;
  while (i < 10 && j < 10) {
    if (vetor1[i] < vetor2[j]) {
      vetor_resultante[k++] = vetor1[i++];
    } else {
      vetor_resultante[k++] = vetor2[j++];
    }
  }
  while (i < 10) {
    vetor_resultante[k++] = vetor1[i++];
  }
  while (j < 10) {
    vetor_resultante[k++] = vetor2[j++];
  }

  printf("Vetor resultante:\n");
  for (i = 0; i < 20; i++) {
    printf("%d ", vetor_resultante[i]);
  }
  printf("\n");

  return 0;
}
