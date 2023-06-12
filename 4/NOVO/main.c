#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	char caracter[10];//%s.
	int idade, dia_semana;//%d.
	
	float decimal;//
	
	printf("Ola! Qual seu nome?\n");
	scanf("%s.\n", &caracter);
	printf("\n");
	printf("Ola %s.\n", caracter);
	printf("\n");
	printf("Qual sua idade?\n");
	scanf("%d.", &idade);
	
	if(idade >= 18){
		printf("\n");
		printf("acesse o site de apostas!\n");
		printf("Escolha um dia de segunda a sexta:\n");
		printf("Domingo = 1 \n");
		printf("Segunda = 2 \n");
		printf("Terca = 3 \n");
		printf("Quarta = 4 \n");
		printf("Quinta = 5 \n");
		printf("Sexta = 6 \n");
		scanf("%d.", &dia_semana);
		
		
		switch(dia_semana){
			case 1:
				printf("Voce escolheu domingo-feira!");
				break;
			case 2:
				printf("Voce escolheu segunda-feira!\n");
				break;
			case 3:
				printf("Voce escolheu terca-feira!\n");
				break;
			case 4:
				printf("Voce escolheu quarta-feira!\n");
				break;
			case 5:
				printf("Voce escolheu quinta-feira!\n");
				break;
			case 6:
				printf("Voce escolheu sexta-feira!\n");
				break;
			case 7:
				printf("Voce escolheu sabado-feira!\n");
				break;
			default :
				printf("numero invalido!\n");
				break;
		}
	}else{
		printf("Somente com altorizacao dos pais!\n");
	}
	


			
	system("pause");//pausa o programa
	return 0;
	
}
