/*
Faça um algoritmo que receba dois números, verifique se estes são pares ou ímpares e exiba a mensagem sobre a situação de
cada um. Além de exibir o resultado das seguintes operações, com base na tabela abaixo:
Situação	                           Operação entre os Números
Dois números pares	                   Adição
Dois números ímpares                   Subtração
O primeiro ser par e o segundo ímpar   Multiplicação
O primeiro ser ímpar e o segundo par   Divisão
*/

#include <stdio.h>

int main(){
	
	int N1, N2;
	float O;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &N1);
	
	printf("Digite o segundo numero: \n");
	scanf("%d", &N2);
	
	if (N1 % 2 == 0 && N2 % 2 == 0){
		O = N1 + N2;
		printf("Os dois numeros sao pares \n");
		printf("A soma entre eles: %.2f",O);
	}
	else if (N1 % 2 == 1 && N2 % 2 == 1){
		O = N1 - N2;
		printf("Os dois numeros sao impares \n");
		printf("A subtracao entre eles: %.2f",O);
	}
	else if (N1 % 2 == 0 && N2 % 2 ==1){
		O = N1 * N2;
		printf("O primeiro numero e' par e o segundo impar \n");
		printf("A multiplicacao entre eles: %.2f",O);
	}
	else{
		O = (float)N1 / N2;
		printf("O primeiro numero e' impar e o segundo par \n");
		printf("A divisao entre eles: %.2f",O);
	}
}
