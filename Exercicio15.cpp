/*
Fa�a um algoritmo que receba dois n�meros, verifique se estes s�o pares ou �mpares e exiba a mensagem sobre a situa��o de
cada um. Al�m de exibir o resultado das seguintes opera��es, com base na tabela abaixo:
Situa��o	                           Opera��o entre os N�meros
Dois n�meros pares	                   Adi��o
Dois n�meros �mpares                   Subtra��o
O primeiro ser par e o segundo �mpar   Multiplica��o
O primeiro ser �mpar e o segundo par   Divis�o
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
