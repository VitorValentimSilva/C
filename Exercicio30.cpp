/*
Faça um programa que receba o preço, a categoria (1 - limpeza, 2 - alimentação, 3 - vestuário) e a situação 
(R - produtos que necessitam de refrigeração e N - produtos que não necessitam de refrigeração). Calcule e exiba:

a)	O valor do aumento, usando as regras que seguem:

PREÇO	CATEGORIA	PERCENTUAL DE AUMENTO
<= 25	1			5%
		2			8%
		3			10%
> 25	1			12%
		2			15%
		3			18%

b)	O valor do imposto, usando as regras que seguem:

O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5% do preço; caso contrário,
pagará 8%. Os requisitos são:

Categoria : 2
Situação : R

c)	O novo preço, ou seja, o preço mais o aumento menos o imposto.
d)	A classificação, usando as regras a seguir:

NOVO PREÇO				CLASSIFICAÇÃO
<= 50,00				Promoção
Entre 50,00 e 120,00	Normal
>= 120,00				Extra
*/

#include <stdio.h>

int main(){

	float pre, npre, ipre, apre;
	int cate;
	char situ[2];

	printf("Preco: \n");
	scanf("%f", &pre);

	printf("Categoria: \n");
	printf("Limpeza - [1] \n");
	printf("Alimentacao - [2] \n");
	printf("Vestuario - [3] \n");
	scanf("%d", &cate);

	printf("Situacao: \n");
	printf("Produtos que necessitam de refrigeracao - [r] \n");
	printf("Produtos que não necessitam de refrigeracao - [n] \n");
	scanf("%s", &situ);

	if (pre <= 25){
		if (cate == 1){
		apre = pre * 105 / 100;
		}
		else if (cate == 2){
		apre = pre * 108 / 100;
		}
		else{
		apre = pre * 110 / 100;
		}
	}
	else{
		if (cate == 1){
		apre = pre * 112 / 100;
		}
		else if (cate == 2){
		apre = pre * 115 / 100;
		}
		else{
		apre = pre * 118 / 100;
		}
	}

	if (cate == 2 || situ[1] == 'r'){
		ipre = pre * 105 / 100;
	}
	else{
		ipre = pre * 108 / 100;
	}

	npre = apre + ipre;

	if (npre <= 50){
		printf("Promocao! \n");
		printf("Preco a pagar: %.2f",npre);
	}
	else if (npre >= 120){
		printf("Extra! \n");
		printf("Preco a pagar: %.2f",npre);
	}
	else{
		printf("Normal! \n");
		printf("Preco a pagar: %.2f",npre);
	}
}
