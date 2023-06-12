#include <stdio.h>

#define texto "entrada e saida de dados."
int main(){
	printf("%s\n",texto);
	
	int idade1=0;//%d
	float altura1=0.0;//%f
	char nome[50]= "";//s
	
	printf("Digite a idade: \n");
	scanf("%d", &idade1);
	
	printf("Digite a altura: \n");
	scanf("%f", &altura1);
	
	printf("Digite seu nome: \n");
	scanf("%s", nome);
	
	printf("Dados informados:\n");
	printf("Sua idade e: %d. \n", idade1);
	printf("Sua altura e: %.2f. \n", altura1);
	printf("Seu nome e: %s.\n", nome);
}
