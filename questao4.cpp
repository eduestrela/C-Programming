#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float n1, n2 n3;
	float maior, meio, menor;
	
	printf("Insira o primeiro numero:\n");
	scanf("%f", &n1);
	printf("Insira o segundo numero:\n");
	scanf("%f", &n2);
	printf("Insira o terceiro numero:\n");
	scanf("%f", &n3);
	
	if(n1 <= n2 && n1 <= n3){
		menor = n1;
		if(n2 <= n3){
			meio = n2;
			maior = n3;
		}else{
			meio = n3;
			maior = n2;
		}
	}else if(n2 <= n1 && n2 <= n3){
		menor = n2;
		if(n1 <= n3){
			meio = n1;
			maior = n3;
		}else{
			meio = n3;
			maior = n1;
		}
	}else{
		menor = n3;
		if(n1 <= n2){
			meio = n1;
			maior = n2;
		}else{
			meio = n2;
			maior = n1;
		}
	}
	printf("Os numeros em ordem crescente sao:\n");
	printf("%.2f, %.2f, %.2f", menor, meio, maior);
	
	return 0;
}