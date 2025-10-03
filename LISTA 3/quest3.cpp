#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, i =1;
	
	printf("Insira um valor:\n");
	scanf("%d", &n);
	printf("\n");
	
	if( n <= 0){
		printf("Erro: Insira um valor positivo!\n\n");
	}else{	
		for(i; i<= n; i++){
			printf("%d\n", i );
			printf("%d\n", i + 3 );
			printf("%d\n", i + 3);
			
		}
	}
	
}
