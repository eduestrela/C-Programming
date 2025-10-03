#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, i = 1;
	int fatorial = 1;
	float somatorio = 1;
	
	printf("Insira um valor:\n");
	scanf("%d", &n);
	printf("\n");
	if(n <= 0){
		printf("Erro: Insira um número positivo!\n");
	}else{
		printf("\tTERMO E\n");
		printf("%.2f\n", somatorio);
		for(i; i<= n; i++){
			fatorial *= i;
			somatorio += (1.0 / fatorial);
			printf("%.2f \n", somatorio);
		}
	}
}