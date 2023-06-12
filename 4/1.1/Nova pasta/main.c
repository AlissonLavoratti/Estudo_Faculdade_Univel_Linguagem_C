#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	char caracter[10];//%s.
	
	int idade;//%d.
	float decimal;//
	
	printf("Ola! Qual seu nome?\n");
	scanf("%s.", &caracter);
	printf("\n");
	printf("Ola %s.\n", caracter);
	printf("Qual sua idade?\n");
	scanf("%d.", &idade);
	
	if(idade >= 18){
		printf("acesse o site de apostas!\n");
		printf("Escolha um dia de segunda a sexta:\n");
		printf("Segunda = 1 \n");
		printf("Terca = 2 \n");
		printf("Quarta = 3 \n");
		printf("Quinta = 4 \n");
		printf("Sexta = 5 \n");
		
	}else{
		printf("Somente com altorizacao dos pais!\n");
	}
	

	//scanf()
			
	system("pause");//pausa o programa
	return 0;
	
}
