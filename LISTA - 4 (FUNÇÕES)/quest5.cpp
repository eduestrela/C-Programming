#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float tranformPercent(float x);

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float valorAntigo, valorAtual;
	float resultado = 0;
	float diferenca = 0;
	float resultFinal = 0;
	
	printf("Insira o antigo valor do profuto em R$:\n");
	scanf("%f", &valorAntigo);
	printf("\n");
	printf("Insira o atual valor do produto em R$:\n");
	scanf("%f", &valorAtual);
	printf("\n");
	
	diferenca = valorAtual - valorAntigo;
	resultFinal = (diferenca / valorAntigo);
	resultado = resultado + tranformPercent(resultFinal);
	
	printf("O percentual em relação ao valor antigo e o atual do produto é de : %.0f %%.", resultado);
}

float tranformPercent(float x){
	float percentual = 0;
	percentual = x*100;
	return percentual;
}