/*
Uma empresa resolveu fazer uma pesquisa de mercado, abrangendo o maior n�mero de pessoas poss�veis, para saber se as 
pessoas est�o gostando ou n�o de um novo produto lan�ado no mercado. Coletando o sexo (M, F), a idade e uma resposta 
(S=sim, N=n�o, I=indiferente) de cada entrevistado. Fa�a um algoritmo que calcule:
a) quantas pessoas foram entrevistadas;
b) quantas pessoas disseram sim;
c) quantas pessoas disseram n�o;
d) quantas pessoas disseram indiferente;
e) o percentual de pessoas que disseram n�o;
f) quantas mulheres disseram sim;
g) quantos homens disseram n�o;
h) quantos homens at� 20 anos disseram sim;
i) quantas mulheres de at� 20 anos disseram n�o.
*/

#include <stdio.h>

int main(){
	
	int i = 1;
	char s[1], r[1];
	
	do{
		
		printf("Sexo (m/f): \n");
		scanf ("%s", &s);
		
		printf("Idade: \n");
		scanf("%d", &ida);
		
		printf("Gostou do novo produto: \n");
		printf("Sim(s), Nao(n), Indiferente(i) \n");
		scanf("%s", &r);
		
		printf("Para sair digite (0): \n");
		scanf("%d", &i); 
		
		if (i != 0){
			e++;
		}
		
		if (r[1] == 's'){
			ts++;
		}
		
		if (r[1] == 'n'){
			tn++;
		}
		
		if (r[1] == 'i'){
			ti++;
		}
		
		
		
	} while(i != 0)
}
