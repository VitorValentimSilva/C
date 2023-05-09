/*
Faça um algoritmo que receba a temperatura média de cada mês do ano e armazene essas temperaturas em um vetor; calcule e 
exiba a maior e a menor temperatura do ano e em que mês estas temperaturas aconteceram.
*/

#include <stdio.h>

int main(){
	
	float tm[12], mai = -200, men = 1000;
	int i, maimes = 0, menmes = 0;
	
	for (i=0; i<12; i++){
		
		printf("Qual foi a media de temperatura do mes %d: \n",i+1);
		scanf("%f", &tm[i]);
		
		if (tm[i] > mai){
			mai = tm[i];
			maimes = i + 1;
		}
		else if (tm[i] < men){
			men = tm[i];
			menmes = i + 1;
		}
	}
	
	printf("A maior temperatura do ano foi de: %.2f \n",mai);
	printf("E o mes com essa temperatura foi o mes: %d \n",maimes);
	printf("A menor temperatura do ano foi de: %.2f \n",men);
	printf("E o mes com essa temperatura foi o mes: %d",menmes);
}
