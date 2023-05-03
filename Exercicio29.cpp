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
	
	int i = 1, ida, e = 1, h20 = 0, m20 = 0, ts = 0, ti = 0, tn = 0, ms, hn;
	float s1, s2;
	char s[2], r[2];
	
	while(i != 0){
		
		printf("Sexo (m/f): \n");
		scanf ("%s", &s[2]);
		
		printf("Idade: \n");
		scanf("%d", &ida);
		
		printf("Gostou do novo produto: \n");
		printf("Sim(s), Nao(n), Indiferente(i) \n");
		scanf("%s", &r[2]); 
		
		printf("Para sair digite (0): \n");
		scanf("%d", &i);
		
		if (i != 0){
			e++;
		}
		
		if (r[2] == 's'){
			ts++;
			if (s[2] == 'f'){
				ms++;
			}
			else if (s[2] == 'm' && i <= 20){
				h20++;
			}
		}
		
		if (r[2] == 'n'){
			tn++;
			if (s[2] == 'm'){
				hn++;
			}
			else if (s[2] == 'f' && i <= 20){
				m20++;
			}
		}
		
		if (r[2] == 'i'){
			ti++;
		}	
	}
	
	s1 = ts + tn;
	s2 = tn * 100 / s1;
	
	printf("Quantidade de pessoas que foram entrevistadas: %d \n",e);
	printf("Quantidade de pessoas que disseram sim: %d \n",ts);
	printf("Quantidade de pessoas que disseram nao: %d \n",tn);
	printf("Quantidade de pessoas que disseram indiferente: %d \n",ti);
	printf("Percentual de pessoas que disseram nao: %.2f%% \n",s2);
	printf("Quantidade de mulheres que disseram sim: %d \n",ms);
	printf("Quantidade de homens que disseram nao: %d \n",hn);
	printf("Quantidade de homens de ate 20 anos disseram sim: %d \n",h20);
	printf("Quantidade de mulhres de ate 20 anos disseram nao: %d",m20);
}
