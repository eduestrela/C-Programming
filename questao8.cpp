#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	
	int op, n1, n2, soma;
	float raiz
	
	printf(" 1 - Somar dois numeros.\n");
	printf(" 2 - Raiz qudrada de um numero.\n");
	printf(" Digite a opcao desejada.\n");
	scanf("%d", &op);
	
	if(op != 1 && op != 2){
		printf("Opcao invalida! Selecione uma opção valida!\n");
	}else if(op == 1){
		printf("Insira o primeiro valor:\n");
		scanf("%d", &n1);
		printf("Insira o segundo valor:\n");
		scanf("%d", &n2);
		
		soma = n1 + n2;
		printf("\n");
		printf("A soma dos valores e: %d,", soma);
	}else{
		printf("Insira o valor que deseja tirar a raiz quadrada:\n");
		scanf("%f", &raiz);
	}
	return 0;
}