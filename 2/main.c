#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int dado = 10;
	printf("dado: \n", dado);
	
	dado++;
	printf("dps incremento: %d.\n", dado);
	
	dado--;
	printf("dps decremento: %d.\n", dado);
	
	dado+= 3;
	printf("dps incremento 3 unidades: %d.\n", dado);
	
	dado-= 2;
	printf("dps decremento 2 und: %d.\n", dado);
	
	dado*=10;
	printf("deps multi 10: %d.\n", dado);	
	
	return 0;
}
