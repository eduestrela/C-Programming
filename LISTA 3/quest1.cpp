#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salarioInicio = 1000.00;
	float salarioNovo, percentAnual = 1.5;
	int i=1;
	int ano = 2005;
	
	printf("\n");
	printf("ATUALIZAÇÕES DE SALÁRIO POR ANO:\n\n");
	for(i; i<=20; i++){
		salarioNovo = salarioNovo + salarioInicio + (salarioInicio * (1.5 /100));
		ano++;	
		if(ano == 2007){
			salarioNovo = salarioNovo + (salarioInicio * ((percentAnual * 2) /100));	
		}
		printf("ANO : %d  |  SALÁRIO: %.2f \n", ano, salarioNovo);
	}
	return 0;
}