#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float n1, n2, n3, somaPesos, mediaPonderada;
	
	printf("Insira a nota do Trabalho:\n");
	scanf("%0.2f", &n1);
	printf("Insira a nota da Avaliacao:\n");
	scanf("%0.2f", &n2);
	printf("Insira a nota do Exame Final:\n");
	scanf("%0.2f", &n3);
	
	somaPesos = 10;
	
	mediaPonderada = ((n1*2) + (n2*3) + (n3*5)/somaPesos);
	
	if(mediaPonderada >= 8 && mediaPonderada <= 10){
		printf("CONCEITO - A\n");
	}else if(mediaPonderada >= 7 && mediaPonderada <= 7.99){
		printf("CONCEITO - B\n");
	}else if(mediaPonderada >= 6 && mediaPonderada <= 6.99){
		printf("CONCEITO - C\n");
	}else if(mediaPonderada >= 5 && mediaPonderada <= 5.99){
		printf("CONCEITO - D\n");
	}else if(mediaPonderada >= 0 && mediaPonderada <= 4.99){
		printf("CONCEITO - E\n");
	}else{
		printf("Conceito nao identificado! Cheque os valores!!");
	}
	
	return 0;
}