#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma (int n) {
	if (n == 0){//para as opera��es do c�digo
		return 0; 
	}else{
		return (n + soma (n-2));//(n - 2)=chamada recursiva, ele faz a opera��o: -2 do numero que o usu�rio insere na variavel 
	}
}//a opera��o continua se o resultado do else nao for =0, e de maneira continua ele realiza operac�es continuas


int main (){
	int n;
	printf("Digite um inteiro positivo:\n");
	scanf("%d", &n);
	if(n%2 == 0){
		printf("a soma dos numeros pares de 0 ate %d = %d\n", n,soma(n));
 	}else{
	printf("a soma dos numeros pares de a ate %d = %d\n", n,soma(n-1));
	
	}
		
}
