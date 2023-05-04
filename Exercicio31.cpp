/*
Fa�a um programa para processar os dados estat�sticos sobre acidentes de tr�nsito, coletados em cidades brasileiras. 
Foram obtidos os seguintes dados na pesquisa:
a)	C�digo da cidade;
b)	N�mero de ve�culos de passeio;
c)	N�mero de acidentes de tr�nsito.
Deseja-se obter:
a)	Qual o maior e menor n�mero de acidentes de tr�nsito e em quais cidades?
b)	Qual a m�dia de ve�culos dentre todas as cidades?
c)	Qual a m�dia de acidentes de tr�nsito nas cidades com menos de 2000 ve�culos de passeio?
*/

#include <stdio.h>

int main(){

	int i = 1, cc, vp, at, me, ma = 0, ccma, ccme, svp = 0, tvp, tat = 0, tcc = 0;
	float mvp, mcc;

	do{
		printf("Codigo da cidade: \n");
		scanf("%d", &cc);

		printf("Numero de veiculos de passeio: \n");
		scanf("%d", &vp);

		printf("Numero de acidentes de transito: \n");
		scanf("%d", &at);

		if(at > ma){
			ma = at;
			ccma = cc;
		}
		else if(at < me){
			me = at;
			ccme = cc;
		}

		if(vp >=0){
			tvp++;
		}

		if (vp < 2000){
			tat = tat + at;
			tcc++;
		}

		svp = svp + vp;

		printf("Para sair digite (0): \n");
		scanf("%d", &i);
		
	}while (i != 0);

	mvp = svp / tvp;

	mcc = tat / tcc;

	printf("Maior numero de acidentes: %d \n",ma);
	printf("Menor numero de acidentes: %d \n",me);
	printf("O codigo da cidade de maior numero de acidentes: %d \n",ccma);
	printf("O codigo da cidade de menor numero de acidentes: %d \n",ccme);
	printf("Media de veiculos dentre todas as cidades: %.2f \n",mvp);
	printf("Media de acidentes de tr�nsito nas cidades com menos de 2000 veiculos de passeio: %.2f",mcc);
}
