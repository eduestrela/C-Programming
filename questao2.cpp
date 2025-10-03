#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float n1, n2, n3, mediaAritmetica;
	
	printf("Insira a primeira nota:\n");
	scanf("%0.2f", &n1);
	printf("Insira a sua segunda nota:\n");
	scanf("%0.2f", &n2);
	printf("Insira sua terceira nota:\n");
	scanf("%0.2f", &n3);
	
	mediaAritmetica = (n1+n2+n3)/3;
	
	if(mediaAritmetica >= 0 && mediaAritmetica <= 2.99){
		printf("SITUACAO - REPROVADO! ");
	}else if(mediaAritmetica >= 3 && mediaAritmetica <= 6.99){
		printf("SITUACAO - EXAME FINAL! ");
	}else if(mediaAritmetica >= 7 && mediaAritmetica <= 10){
		printf("SITUACAO - APROVADO! ");
	}
	
	return 0;
}