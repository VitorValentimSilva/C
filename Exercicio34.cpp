/*
A Faculdade de Informática de Presidente Prudente realizará em maio a Infoeste e precisa que você faça um programa que 
leia o termo, idade, o sexo dos 300 estudantes da faculdade. O programa deverá exibir quantos alunos do primeiro termo 
estão inscritos, a média de idade dos inscritos do sexo feminino.
*/

#include <stdio.h>

int main(){
	
	int i, ter, ida, al1 = 0, qf = 0;
	char sex[2];
	float mf, sida = 0;
	
	for (i = 1;i<=5;i++){
		
		printf("Termo da faculdade do %d aluno: \n",i);
		scanf("%d", &ter);
		
		printf("Idade do %d aluno: \n",i);
		scanf("%d", &ida);
		
		printf("Sexo (m/f) do %d aluno: \n",i);
		scanf("%s", &sex[2]);
		
		if (ter == 1){
			al1++;
		}
		
		if (sex[2] == 'f'){
			qf++;
			sida = sida + ida;
		}
	}
	
	mf = sida / qf;
	
	printf("Quantos alunos do primeiro termo estao inscritos: %d \n",al1);
	printf("Media de idade dos inscritos do sexo feminino: %.2f",mf);
}
