/*
Escreva um algoritmo que receba 132 n�meros, calcule e exiba as quantidades de n�meros pares e  de n�meros �mpares
existentes neste conjunto conhecido.
*/

#include <stdio.h>

int main(){
	
	int i = 1, n, p = 0, im = 0;
	
	while (i <= 132){
		printf("Digite um numero: \n");
		scanf("%d", &n);
		
		if (n % 2 == 0){
			p++;
		}
		else{
			im++;
		}
		
		i++;
	}
	
	printf("Quantidade de numeros pares: %d \n",p);
	printf("Quantidade de numeros impares: %d",im);
}
