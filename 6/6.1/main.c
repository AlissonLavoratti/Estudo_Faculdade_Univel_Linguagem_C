#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int v[5];
	int i;
		
	for (i=0; i<8; i++){
		printf("Insira um dado:\n");
		scanf("%d", &v[i]);
	}
	
	printf("Dados inseridos:\n");
	for(i=0;i<8;i++){
		printf("%d ", v[i]);
	}
}
