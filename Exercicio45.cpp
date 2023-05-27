/*
Crie um programa que leia vários números pelo teclado e mostre no final o somatório entre eles.
Obs: O programa será interrompido quando o número 1111 for digitado
*/

#include <stdio.h>

int main(){
	
	int i, j;
	float num[1111], soma = 0;
	
	for (i = 0; i < 1111; i++){
		printf("Digte o numero %d(digite 1111 para sair): \n", i+1);	
		scanf("%f", &num[i]);
		
		if (num[i] == 1111){
        break;
    	}
	}
	
	for (j = 0; j < i; j++){
		soma += num[j];
	} 
	
	printf("O somatorio de todos os numeros digitados e': %.2f", soma);
}
