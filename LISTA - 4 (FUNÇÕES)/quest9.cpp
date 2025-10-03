#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float somaNumeros(int x);

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int n;
	float s = 0.0;
	
	printf("Insira um valor:\n");
	scanf("%d", &n);
	
	if(n < 0){
		printf("Erro: valor inválido! Insira um valor válido!\n");
	}else{
		printf("\n");
		s = somaNumeros(n);
		printf("O valor de S é : %.6f", s);
	}
	
	return 0;
}

float somaNumeros(int x){
    float s = 0.0;
    for(int i = 1; i <= x; i++){
        float numerador = 1 + pow(i, 2);
        float denominador = i + 3;
        s += numerador / denominador;
    }
    return s;
}