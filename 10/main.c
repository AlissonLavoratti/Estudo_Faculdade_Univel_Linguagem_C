#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int *x,i,*x1;
	x = malloc(5 * sizeof(int));
	if (x == NULL){//testa a locação
		printf("erro de alocação!!!");
		exit(1);//encerra o programa
	}
	for(i=0;i<5;i++){
		printf("informe posição x[%d]: ",i);
		scanf("%d", &x[i]);
	}
	for(i=0;i<5;i++){
		printf("%5d", x[i]);
	}
	x1 = (int *) reallloc(x, 1* sizeof (int));
	for(i=5;i<10;i++){
		printf("informe posicao x[%d]: ",i);
		scanf("%d", &x1[i]);
	}
	for(i=0;i<10;i++){
		printf("%5d", x1[i]);
	}
	free[x];
	free[x1];
	
}
