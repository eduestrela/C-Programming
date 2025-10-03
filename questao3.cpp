#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float n1, n2;
	
	printf("Insira o primeiro valor:\n");
	scanf("%f", &n1);
	printf("Insira o segundo valor:\n");
	scanf("%f", &n2);
	
	if(n1 > n2){
		printf("O numero %f e maior!", n1);
	}else{
		printf("O numero %f e maior!", n2);
	}
}