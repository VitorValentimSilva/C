/*
Fa�a um algoritmo que carregue 1 vetor de 6 elementos num�ricos inteiros; calcule e exiba a quantidade de n�meros pares e 
a quantidade de n�meros �mpares.
*/

#include <stdio.h>

int main(){
	
	int vet[6], i, par = 0, impar = 0;
	
	for (i=0; i<6; i++){
		printf("Digite o valor inteiro numero %d: \n",i);
		scanf("%d", &vet[i]);	
		
		if (vet[i] % 2 == 0){
			par++;
		}
		else{
			impar++;
		}
	}
	
	printf("Quantidade de numeros pares digitados: %d \n",par);
	printf("Quantidade de numeros impares digitados: %d",impar);
}
