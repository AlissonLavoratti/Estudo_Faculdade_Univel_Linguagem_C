#include <stdio.h>

int main(){
	int A, B, soma, subtr, mult, divis;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &A);
	printf("Digite o segundo valor: \n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	
	printf("Resultados: \n");
	printf("Resultado da soma: %d. \n", soma);
	printf("Resultado da subtracao: %d. \n", subtr);
	printf("Resultado da multiplicacao: %d. \n", mult);
	printf("Resultado da divisao: %d. \n", divis);
}
