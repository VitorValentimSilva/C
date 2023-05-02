/*
Em uma pesquisa no R.U. perguntou-se a cada aluno quantas refei��es fez no m�s anterior. Fa�a um programa que forne�a: 
a) n�mero de alunos entrevistados; 
b) n�mero de alunos que fez menos de 10 refei��es no m�s; 
c) n�mero de alunos que fez entre 10 e 20 refei��es; e 
d) n�mero de alunos que fez mais de 20 refei��es. 
*/

#include <stdio.h>

int main(){
	
	int a, r, me = 0, en = 0, ma = 0;
	
	printf("Numeros de alunos entrevistados: \n");
	scanf("%d", &a);
	
	while (a > 0){
		
		printf("%d-Quantas refeicoes voce fez no mes? \n",a);
		scanf("%d", &r);
		
		if (r < 10){
			me++;
		}
		else if (r >= 10 && r <= 20){
			en++;
		}
		else{
			ma++;
		}
		
		a--;
	}

	printf("Numero de alunos que fez menos de 10 refeicoes no mes: %d \n",me);
	printf("Numero de alunos que fez entre 10 e 20 refeicoes: %d \n",en);
	printf("Numero de alunos que fez mais de 20 refeicoes: %d",ma);
}
