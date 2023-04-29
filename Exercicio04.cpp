/*
Escreva um programa para calcular a redução do tempo de vida de um fumante. Pergunte a quantidade de cigarros fumados por
dias e quantos anos ele já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule quantos dias de 
vida um fumante perderá e exiba o total em dias.
*/

#include <stdio.h>

int main(){
	
	int D, A, C1, C2, C3, T;
	
	printf("Quntidade de cigarros fumados por dia: \n");
	scanf("%d", &D);
	
	printf("E quantos anos voce ja fumou: \n");
	scanf("%d", &A);
	
	C1 = D * 365;
	C2 = C1 * A;
	C3 = C2 * 10;
	T = C3 / 1440;
	
	printf("Voce ja fumou %d cigarros, e ja perdeu %d minutos de vida, ou seja, voce ja perdeu aproximadamete %d dias de vida",C2,C3,T);
}
