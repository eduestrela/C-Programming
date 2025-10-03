#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float peso, altura;
	
	printf("Insira a altura em metros:\n");
	scanf("%f", &altura);
	printf("Insira o peso em Kg:\n");
	scanf("%f", &peso);
	
	if(altura < 1.20 && peso <= 60){
		printf("--- CLASSIFICACAO ---\n");
		printf("         A             ");
		if(peso > 60 && peso <= 90){
			printf("--- CLASSIFICACAO ---\n");
			printf("         D             ");
		}else if(peso > 90){
			printf("--- CLASSIFICACAO ---\n");
			printf("         G             ");
		}
		
	}else if(altura >= 1.20 && altura <= 1.70 && peso <= 60){
		printf("--- CLASSIFICACAO ---\n");
		printf("         B             ");
		if(peso >60 && peso <= 90){
			printf("--- CLASSIFICACAO ---\n");
			printf("         E             ");
		}else if(peso > 90){
			printf("--- CLASSIFICACAO ---\n");
			printf("         H             ");
		}
	}else if(altura > 1.70 && peso < 60){
		printf("--- CLASSIFICACAO ---\n");
		printf("         C             ");
		if(peso > 60 && peso <= 90){
			printf("--- CLASSIFICACAO ---\n");
			printf("         F             ");
		}else if(peso > 90){
			printf("--- CLASSIFICACAO ---\n");
			printf("         I             ");
		}
	} 
}