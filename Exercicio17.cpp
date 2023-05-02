/*
Uma empresa da cidade de Presidente Prudente-SP possui 3.000 (tr�s mil) funcion�rios e precisa de um algoritmo onde s�o 
informados os dados de um funcion�rio espec�fico (idade, sexo, sal�rio base, ano de contrata��o e matr�cula) exiba todos 
os dados do funcion�rio al�m do novo sal�rio que deve ser calculado de acordo com o quadro abaixo
Faixa et�ria	Sexo	Reajuste	Desconto                  Acr�scimo
                                  (at� 10 anos na empresa)	(mais de 10 anos na empresa)
18 - 39	         M	       10%			R$10,00					R$17,00
	             F			8%			R$11,00					R$16,00
40 - 69			 M			8%			R$ 5,00					R$15,00
				 F			10%			R$ 7,00					R$14,00
70 - 99			 M			15%			R$ 15,00				R$13,00
		 		 F			17%			R$ 17,00				R$12,00
*/

#include <stdio.h>

int main(){
	
	int I, Ac, Aa, E;
	float Sa, D, Ns1, Ns2;
	char Se[2];
	
	printf("Idade: \n");
	scanf("%d", &I);
	
	printf("Sexo[m/f]: \n");
	scanf("%s", &Se[2]);
	
	printf("Salario: \n");
	scanf("%f", &Sa);
	
	printf("Ano de contratacao: \n");
	scanf("%d", &Ac);
	
	printf("Ano atual: \n");
	scanf("%d", &Aa);
	
	printf("Matricula: \n");
	scanf("%f", &D);
	
	E = Aa - Ac;
	
	if (I >= 18 && I <= 39 && Se[2] == 'm' && E <= 10){
		Ns1 = Sa * 110 / 100;
		Ns2 = Ns1 - 10;
		printf("Novo salario: %.2f \n",Ns2);
	}
	else if (I >= 18 && I <= 39 && Se[2] == 'm' && E > 10){
		Ns1 = Sa * 110 / 100;
		Ns2 = Ns1 + 17;
		printf("Novo salario: %.2f \n",Ns2);
	}
	else if (I >= 18 && I <= 39 && Se[2] == 'f' && E <= 10){
		Ns1 = Sa * 108 / 100;
		Ns2 = Ns1 - 11;
		printf("Novo salario: %.2f \n",Ns2);
	}
	else if (I >= 18 && I <= 39 && Se[2] == 'f' && E > 10){
		Ns1 = Sa * 108 / 100;
		Ns2 = Ns1 + 16;
		printf("Novo salario: %.2f \n",Ns2);
	}
	else if (I >= 40 && I <= 69 && Se[2] == 'm' && E <= 10){
		Ns1 = Sa * 108 / 100;
		Ns2 = Ns1 - 5;
		printf("Novo salario: %.2f \n",Ns2);
	}
	else if (I >= 40 && I <= 69 && Se[2] == 'm' && E > 10){
		Ns1 = Sa * 108 / 100;
		Ns2 = Ns1 + 15;
		printf("Novo salario: %.2f \n",Ns2);
	}
	else if (I >= 40 && I <= 69 && Se[2] == 'f' && E <= 10){
		Ns1 = Sa * 110 / 100;
		Ns2 = Ns1 - 7;
		printf("Novo salario: %.2f \n",Ns2);
	}
	else if (I >= 40 && I <= 69 && Se[2] == 'f' && E > 10){
		Ns1 = Sa * 110 / 100;
		Ns2 = Ns1 + 14;
		printf("Novo salario: %.2f \n",Ns2);
	}
	else if (I >= 70 && Se[2] == 'm' && E <= 10){
		Ns1 = Sa * 115 / 100;
		Ns2 = Ns1 - 15;
		printf("Novo salario: %.2f \n",Ns2);
	}
	else if (I >= 70 && Se[2] == 'm' && E > 10){
		Ns1 = Sa * 115 / 100;
		Ns2 = Ns1 + 13;
		printf("Novo salario: %.2f \n",Ns2);
	}
	else if (I >= 70 && Se[2] == 'f' && E <= 10){
		Ns1 = Sa * 117 / 100;
		Ns2 = Ns1 - 17;
		printf("Novo salario: %.2f \n",Ns2);
	}
	else if (I >= 70 && Se[2] == 'f' && E > 10){
		Ns1 = Sa * 117 / 100;
		Ns2 = Ns1 + 12;
		printf("Novo salario: %.2f \n",Ns2);
	}
}
