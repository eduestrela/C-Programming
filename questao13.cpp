#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int op;
	float salario, imposto, novoSalario;
	
	printf(" 1 - Imposto\n");
	printf(" 2 - Novo Salario\n");
	printf(" 3 - Classificacao\n");
	printf(" Digite a opcao desejada ->");
	scanf("%d", &op);
	
	if(op != 1 && op != 2 && op != 3){
		printf("Erro: selecione uma opcao valida!\n\n");
		printf(" 1 - Imposto\n");
		printf(" 2 - Novo Salario\n");
		printf(" 3 - Classificacao\n");
		scanf("%d", &op);
		
		if(op == 1 || op == 2 || op == 3){
			if(op == 1){
				printf("Insira o valo do seu salario:\n");
				scanf("%f", &salario);
				if(salario < 500){
					imposto = salario * 0.05;
					printf("O valor do imposto aplicado sobre o salario e R$ %.2f", imposto);
				}else if(salario >= 500 && salario <= 850){
					imposto = salario * 0.10;
					printf("O valor do imposto aplicado sobre o salario e R$ %f.2f", imposto);
				}else if(salario >850){
					imposto = salario * 0.15;
					printf("O valor do imposto aplicado sobre o salrio e R$ %f.2f", imposto);
				}
			}else if(op ==2){
				printf("Insira o valo do seu salario:\n");
				scanf("%f", &salario);
				if(salario > 1500){
					novoSalario = salario + 25;
					printf("O valor do novo salario e: R$ %.2f", novoSalario);
				}else if(salario >= 750 && salario <= 1500){
					novoSalario = salario + 50;
					printf("O valor do novo saalrio e: R$ %.2f", novoSalario);
				}else if(salario >= 450 && salario <= 750){
					novoSalario = salario + 75;
					printf("O valor do novo salari e: R$ %.2f", novoSalario);
				}else if(salario < 450){
					novoSalario = salario +100;
					printf("O valor do novo salario e: R$ %.2f", novoSalario);
				}
			}else if(op == 3){
				printf("Insira o valor dos eu salario:\n");
				scanf("%f",&salario);
				if(salario <= 700){
					printf("Classificacao:\n");
					printf("  Mal remunerado. ");
					
				}else if(salario > 700){
					printf("Classificacao:\n");
					printf("  Bem remunerado.  ");
				}
			}
		}
		
	}
	return 0;
}