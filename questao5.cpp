#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float n1, n2, n3, n4;
	float controle;
	
	printf("Insira o primeiro valor:\n");
	scanf("%f", &n1);
	printf("Insira o segundo valor:\n");
	scanf("%f", &n2);
	printf("Insira o terceiro valor:\n");
	scanf("%f", &n3);

	if(!((n1 <= n2 && n2 <= n3) || (n1 >= n2 && n2 >= n3))){
		printf("Erro: Os valores nao estao organizados em ordem!\n");
		return 1;
	}
	
	printf("Insira o quarto numero:");
	scanf("%f", &n4);
	
	if (n1 <= n2 && n2 <= n3){
		controle = n1;
		n1 = n3;
		n3 = controle;
	}
	
	if(n4 >= n1){
		controle = n1;
		n1 = n4;
		n4 = n3;
		n3 = n2;
		n2 = controle;
		
	}else if(n4 >= n2){
		controle = n2;
		n2 = n4;
		n4 = n3;
		n3 = controle;
	}else if(n4 >= n3){
		controle = n3;
		n3 = n4;
		n4 = controle;
	}	
	printf("O valores em ordem decrescente sao:\n");
	printf("%.2f, %.2f, %.2f, %.2f. ", n1, n2, n3, n4);
	
	return 0;
}