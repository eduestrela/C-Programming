#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float calculaPesoIdeal(float h, char sexo[9]);

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float altura;
	char sexo[10];
	
	printf("Insira sua altura em metros:\n");
	scanf("%f", &altura);
	printf("Selcione um sexo:\n");
	printf("Masculino\n");
	printf("Feminino\n");
	scanf("%9s", sexo);
	printf("\n");
	
	float pesoIdeal = 0;
	pesoIdeal = calculaPesoIdeal(altura, sexo);
	
	if(strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "masculino") == 0){
		printf("Peso Ideal Masculino\n");
		printf("%.2f Kg\n", pesoIdeal);
		printf("\n");
		
	}else if(strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "feminino") == 0){
		printf("Peso Ideal Feminino\n");
		printf("%.2f Kg\n", pesoIdeal);
		printf("\n");
	}
	return 0;
}

float calculaPesoIdeal(float h, char sexo[9]){
	if(strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "masculino") == 0){
		float pesoIdeal = 0;
		pesoIdeal = (72.7 * h) - 58;
		return pesoIdeal;
	}else if(strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "feminino") == 0){
		float pesoIdeal = 0;
		pesoIdeal = (62.1 * h) - 44.7;
		return pesoIdeal;
	}else{
		printf("Sexo Inválido!\n");
	}
	return 0;
}