#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fatorial(int n){
	if(n == 1){
		return 1;
	}else{
		return (n * fatorial(n-1));
	}
	
}



int main (){
	int n;
	printf("Digite um inteiro positivo: ");
	scanf("%d", &n);
	printf("%d! = %d\n", n, fatorial(n));

}
