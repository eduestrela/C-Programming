#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float salario, bonificacao, novoSalario;
	
	printf("Insira o valor do seu salario:");
	scanf("%f", &salario);
	
	if(salario <0 && salario == 0){
		printf("Erro: valro de salario invalido! Insira um valor valido:");
		printf("Insira o valor do seu salario:");
		scanf("%f", &salario);
	}else if(salario >= 1 && salario <= 500){
		bonificacao = salario * 0.05;
		novoSalario = salario + bonificacao + 150;
		printf("O seu novo salario e: R$ %.2f", novoSalario);
	}else if(salario > 500 && salario <= 1200){
		if(salario >500 && salario <=600){
			bonificacao = salario * 0.12;
			novoSalario = salario + bonificacao + 150;
			printf("O seu novo salario com aplicacao de bonificacoes e R$ %.2f", novoSalario);
		}else if(salario > 600 && salario <= 1200){
			bonificacao = salario * 0.12;
			novoSalario = salario + bonificacao + 100;
			printf("O seu novo salario com aplicacao de bonificacoes e R$ %.2f", novoSalario);
		}else{
			printf("O valor do seu salario e R$ %.2f", salario);
		}
	}
	
	return 0;
}