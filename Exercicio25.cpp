/*
Uma empresa possui algumas categorias de funcion�rios descritas abaixo. Fa�a um algoritmo que receba os c�digos 
correspondente ao cargo de seus funcion�rios e exiba, o seu cargo, o percentual de aumento ao qual este funcion�rio tem 
direito seguindo a tabela abaixo, e tamb�m, o sal�rio reajustado:

C�digo	Cargo			Percentual
  1		Escritur�rio	50%
  2		Secret�rio		35%
  3		Caixa			20%
  4		Gerente			10%
  5		Diretor			N�o tem aumento
*/

#include <stdio.h>

int main(){
	
	int c;
	float s, ns;
	
	printf("Codigo correspondente ao seu cargo: \n");
	printf("[1]: Escriturario \n");
	printf("[2]: Secretario \n");
	printf("[3]: Caixa \n");
	printf("[4]: Gerente \n");
	printf("[5]: Diretor \n");
	scanf("%d", &c);
	
	switch (c){
		
		case 1:
			printf("Qual o seu salario: \n");
			scanf("%f", &s);
			
			ns = s * 150 / 100;
			
			printf("Novo salario: %.2f",ns);
			
			break;
		
		case 2:
			printf("Qual o seu salario: \n");
			scanf("%f", &s);
			
			ns = s * 135 / 100;
			
			printf("Novo salario: %.2f",ns);
			
			break;
		
		case 3:
			printf("Qual o seu salario: \n");
			scanf("%f", &s);
			
			ns = s * 120 / 100;
			
			printf("Novo salario: %.2f",ns);
			
			break;
		
		case 4:
			printf("Qual o seu salario: \n");
			scanf("%f", &s);
			
			ns = s * 110 / 100;
			
			printf("Novo salario: %.2f",ns);
			
			break;
		
		case 5:
			printf("Voce nao tem aumento");
		
			break;
		
		 default:
            printf("Codigo invalido.\n");
            return 0;
    }
}
