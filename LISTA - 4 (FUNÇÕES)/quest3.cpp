#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somarIntervalo(int a, int b, int c);

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int x, y, z, resultado;
	
	printf("Insira o primeiro valor:\n");
	scanf("%d", &x);
	
	if(x == 1){
		printf("Erro: Insira um valor válido!\n");
	}else{
		
		printf("\n");
		printf("Insira o segundo valor:\n");
		scanf("%d", &y);
		printf("\n");
		printf("Insira o terceiro valor:\n");
		scanf("%d", &z);
		printf("\n");
		
		if(x > 0 && y > 0 && z > 0){
			resultado = somarIntervalo(x, y, z);
			if(resultado %y == 0){
				printf("O resultado da soma é: %d", resultado);
			}
		}
	}
	return 0;
	
}

int somarIntervalo(int a, int b, int c){
	int soma = 0, i;
 
    for(i = a+1; i< b; i++){
       soma = soma + i;
    }
    return soma;
}