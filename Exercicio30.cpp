/*
Fa�a um programa que receba o pre�o, a categoria (1 - limpeza, 2 - alimenta��o, 3 - vestu�rio) e a situa��o 
(R - produtos que necessitam de refrigera��o e N - produtos que n�o necessitam de refrigera��o). Calcule e exiba:

a)	O valor do aumento, usando as regras que seguem:

PRE�O	CATEGORIA	PERCENTUAL DE AUMENTO
<= 25	1			5%
		2			8%
		3			10%
> 25	1			12%
		2			15%
		3			18%

b)	O valor do imposto, usando as regras que seguem:

O produto que preencher pelo menos um dos seguintes requisitos pagar� imposto equivalente a 5% do pre�o; caso contr�rio,
pagar� 8%. Os requisitos s�o:

Categoria : 2
Situa��o : R

c)	O novo pre�o, ou seja, o pre�o mais o aumento menos o imposto.
d)	A classifica��o, usando as regras a seguir:

NOVO PRE�O				CLASSIFICA��O
<= 50,00				Promo��o
Entre 50,00 e 120,00	Normal
>= 120,00				Extra
*/

#include <stdio.h>

int main(){
	
	
	
	printf("Preco: \n");
	scanf("%f", &pre);
	
	printf("Categoria: \n");
	printf("Limpeza - [1] \n");
	printf("Alimentacao - [2] \n");
	pritnf("Vestuario - [3] \n");
	scanf("%d", &cate);
	
	printf("Situacao: \n");
	printf("Produtos que necessitam de refrigeracao - [r] \n");
	printf("Produtos que n�o necessitam de refrigeracao - [n] \n");
	scanf("%s", &situ);
	
	if (pre <= 25){
		if (cate == 1){
			npre = pre * 105 / 100;
		}
		else if (cate == 2){
			npre = pre * 108 / 100;
		}
		else{
			npre = pre * 110 / 100;
		}	
	}
	else{
		if (cate == 1){
			npre = pre * 112 / 100;
		}
		else if (cate == 2){
			npre = pre * 115 / 100;
		}
		else{
			npre = pre * 118 / 100;
		}
	}
}
