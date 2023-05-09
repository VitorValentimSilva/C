/*
Uma pesquisa desenvolvida com 20 pessoas de uma região da cidade com o objetivo de levantar algumas informações. Para 
isso foram coletados os dados de altura e sexo dessas pessoas. Faça um programa que leia a altura e o sexo dessas 20 
pessoas e informe:
a) a média de altura das mulheres
b) a média de altura da população
c) a quantidade de homens
d) a quantidade de homens com mais de 1.80 de altura.
*/

#include <stdio.h>

int main(){
	
	int i, tp = 0, qm = 0, m18 = 0;
	float alt, sf = 0, sa = 0, mf = 0, mp = 0, qf = 0;
	char sex[2];
	
	for (i = 1;i <= 20;i++){
		
		printf("Altura: \n");
		scanf("%f", &alt);
		
		printf("Sexo [m/f]: \n");
		scanf("%s", &sex[2]);
		
		if (sex[2] == 'f'){
			sf = sf + alt;
			qf++;
		}
		else if (sex[2] == 'm'){
			qm++;
			if (alt > 1.80){
				m18++;
			}
		}
		else{
			 printf("Sexo invalido!\n");
			 i--;
		}
		
		sa = sa + alt;
	}
	
	mf = sf / qf;
	mp = sa / 20;
	
	printf("Media de altura das mulheres: %.2f \n",mf);
	printf("Media de altura da populacao: %.2f \n",mp);
	printf("Quantidade de homens: %d \n",qm);
	printf("Quantidade de homens com mais de 1.80 de altura: %d",m18);
}
