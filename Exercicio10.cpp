/*
Faça um programa que leia a idade de uma pessoa e diga se ela pode votar.
*/

#include <stdio.h>

int main(){
	
	int I;
	
	printf("Qual a sua idade: \n");
	scanf("%d", &I);
	
	if (I >= 18){
		printf("Pode votar");
	}
	else{
		printf("Nao pode votar");
	}
}
