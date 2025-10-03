#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int n1;
	
	printf("Inira o valor:\n");
	scanf("%d", &n1);
	
	if(n1 %2 == 0){
		printf("O numero e par!");
	}else{
		printf("O numero e impar!");
	}
}