/*
Na disciplina de algoritmos, a nota final do estudante � calculada a partir de 3 notas atribu�das respectivamente a um 
trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. As notas variam de 0 a 10 e a nota final � a m�dia
ponderada das 3 notas mencionadas. A tabela a seguir fornece os pesos das notas:
Laborat�rio -> peso 2
Av. Semestral -> peso 3
Exame Final -> peso 5

Fa�a um algoritmo que receba as 3 notas do estudante, calcule e imprima a m�dia final e o conceito desse estudante. O 
conceito segue a tabela abaixo:
M�dia Final	Conceito
8.0  a  10.0  A
7.0  a  8.0	  B
6.0  a  7.0	  C
5.0  a  6.0	  D
<  5.0	      E
*/

#include <stdio.h>

int main(){
	
	float L, S, E, P1, P2, P3, P4, M;
	
	printf("Nota do trabalho de laboratorio: \n");
	scanf("%f", &L);
	
	printf("Nota da avaliacao semestral: \n");
	scanf("%f", &S);
	
	printf("Nota do exame final: \n");
	scanf("%f", &E);
	
	P1 = L * 2;
	P2 = S * 3;
	P3 = E * 5;
	P4 = P1 + P2 + P3;
	M = P4 / 10;
	
	if (M >= 8.1){
		printf("Sua media final: %.2f \n",M);
		printf("Conceito: A");
	}
	else if (M >= 7.1){
		printf("Sua media final: %.2f \n",M);
		printf("Conceito: B");
	}
	else if (M >= 6.1){
		printf("Sua media final: %.2f \n",M);
		printf("Conceito: C");
	}
	else if (M >= 5){
		printf("Sua media final: %.2f \n",M);
		printf("Conceito: D");
	}
	else if (M < 5){
		printf("Sua media final: %.2f \n",M);
		printf("Conceito: E");
	}
	else{
    	printf("Nota inv�lida! Tente novamente.\n");
	}
}
