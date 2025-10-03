#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int cod;
	float salario, novoSalario, aumentoSalario;
	
	printf("Insira o codigo que corresponde ao seu cargo:\n");
	printf(" 1 - Escrituario\n");
	printf(" 2 - Secretario\n");
	printf(" 3 - Caixa\n");
	printf(" 4 - Gerente\n");
	printf(" 5 - Diretor\n");
	scanf("%d", &cod);
	printf("\n");
	printf("Insira o valor do seu salario:\n");
	scanf("%f", &salario);
	
	if(cod == 1){
		novoSalario = (salario * 0.5);
		aumentoSalario = novoSalario - salario;
		printf("Suas informacoes:\n");
		printf("Cargo: Escrituario\n");
		printf("Aumento: %.2f\n", aumentoSalario);
		printf("Novo Salario: %.2f\n", novoSalario);
	}else if( cod == 2){
		novoSalario = (salario * 0.35);
		aumentoSalario = novoSalario - salario;
		printf("Suas informacoes:\n");
		printf("Cargo: Secretario\n");
		printf("Aumento: %.2f\n", aumentoSalario);
		printf("Novo Salario: %.2f\n", novoSalario);
	}else if(cod == 3){
		novoSalario = (salario * 0.20);
		aumentoSalario = novoSalario - salario;
		printf("Suas informacoes:\n");
		printf("Cargo: Caixa\n");
		printf("Aumento: %.2f\n", aumentoSalario);
		printf("Novo Salario: %.2f\n", novoSalario);
	}else if(cod == 4){
		novoSalario = (salario * 0.10);
		aumentoSalario = novoSalario - salario;
		printf("Suas informacoes:\n");
		printf("Cargo: Gerente\n");
		printf("Aumento: %.2f\n", aumentoSalario);
		printf("Novo Salario: %.2f\n", novoSalario);
	}else{
		novoSalario = (salario * 0.5);
		printf("Suas informacoes:\n");
		printf("Cargo:Diretor\n");
		printf("Aumento: Sem aumento");
		printf("Novo Salario: %.2f\n", novoSalario);
		
	}
	return 0;
}