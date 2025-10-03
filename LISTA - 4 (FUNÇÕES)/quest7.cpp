#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculaFatorial(int x);

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int n;
	float s = 1;
	float resultado;
	
	printf("Insira um valor inteiro e positivo:");
	scanf("%d", &n);
	printf("\n");
	resultado = calculaFatorial(n);
	
	printf("Valor de S\n");
	printf("S = %.6f", resultado);
	
}

float calculaFatorial(int x){
	if(x < 0){
		printf("Não existe Fatorial para números negativos!\n");	
	}else{
		float fat = 1.0;
		float s = 1;
		float resultado;
		
		for(int i =1; i<=x; i++){
			fat = fat * i;
			resultado = s+(1/fat);
		}
		
		return resultado;
	}
	
}