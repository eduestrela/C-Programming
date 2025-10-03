#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somarIntervalo(int a, int b);

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int x, y, resultado = 0;
	
	printf("Insira o primeiro valor:\n");
	scanf("%d", &x);
	printf("\n");
	printf("Insira o segundo valor:\n");
	scanf("%d", &y);
	
	resultado = resultado + somarIntervalo(x, y);
	
	Printf("A soma do intervalo entre %d e %d é respectivamente: %d", x, y, resultado);
	
	return 0;
}

somarIntervalo(int a, int b){
	int i = a;
	int soma = 0;
	
	if(a > 0 && b > 0){
		printf("Erro: Insira um valor válido para o intervalo!\n");
	}else{
		for(i; i< b; i++){
		 	soma = soma + i;
		}
	}
}