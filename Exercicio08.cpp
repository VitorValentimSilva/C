/*
Dado um n�mero inteiro, construa um algoritmo que seja capaz de definir se o n�mero fornecido � par ou �mpar, exibindo o 
resto da divis�o por 2. 
Par ' Se (Numero % 2) ==0 
�mPar ' Se (Numero % 2) !=0
*/

#include <stdio.h>

int main(){
	
	int n;
	
	printf("Numero: \n");
	scanf("%d", &n);
	
	if (n % 2 == 0){
		printf("PAR");
	}
	else{
		printf("IMPAR");
	}
}
