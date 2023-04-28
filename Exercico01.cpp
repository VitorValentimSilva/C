#include <stdio.h>

int main(){
	
	float S, A;
	
	printf("Salario: \n");
	scanf("%f", &S);
	
	A = (S * 115) / 100;
	
	printf("Novo salario: %.2f",A);
}
