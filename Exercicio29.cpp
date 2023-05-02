/*
Uma empresa resolveu fazer uma pesquisa de mercado, abrangendo o maior número de pessoas possíveis, para saber se as 
pessoas estão gostando ou não de um novo produto lançado no mercado. Coletando o sexo (M, F), a idade e uma resposta 
(S=sim, N=não, I=indiferente) de cada entrevistado. Faça um algoritmo que calcule:
a) quantas pessoas foram entrevistadas;
b) quantas pessoas disseram sim;
c) quantas pessoas disseram não;
d) quantas pessoas disseram indiferente;
e) o percentual de pessoas que disseram não;
f) quantas mulheres disseram sim;
g) quantos homens disseram não;
h) quantos homens até 20 anos disseram sim;
i) quantas mulheres de até 20 anos disseram não.
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
