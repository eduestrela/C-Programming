#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario_minimo, valor_hora, salario_mes, valor_hora_extra, salarioLiquido;
    int horas_trabalhadas, num_dependentes, horas_extras;
    float valor_dependentes, valor_total_extras, salario_bruto, valor_irrf;

    printf("Digite o valor do salario minimo: R$ ");
    scanf("%f", &salario_minimo);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    printf("Digite o numero de dependentes: ");
    scanf("%d", &num_dependentes);
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%d", &horas_extras);

    valor_hora = salario_minimo / 5.0;
    salario_mes = horas_trabalhadas * valor_hora;
    valor_dependentes = num_dependentes * 32.0;
    valor_hora_extra = valor_hora * 1.5;
    valor_total_extras = horas_extras * valor_hora_extra;
    salario_bruto = salario_mes + valor_dependentes + valor_total_extras;
 	
 	if(salario_bruto < 200){
 		printf("\n=== SALARIO FUNCIONARIO ===\n");
    	printf("SALARIO BRUTO A RECEBER: R$ %.2f\n", salario_bruto);
	}else if(salario_bruto >= 200 && salario_bruto <= 500){
		valor_irrf = salario_bruto * 0.10;
		salario_bruto = salario_bruto - valor_irrf;
	
		if(salario_bruto <= 350){
			salario_bruto = salario_bruto + 100;
			printf("\n=== SALARIO FUNCIONARIO ===\n");
    		printf("SALARIO BRUTO A RECEBER: R$ %.2f\n", salario_bruto);
		}else if(salario_bruto >350){
			salario_bruto = salario_bruto + 50;
			printf("\n=== SALARIO FUNCIONARIO ===\n");
    		printf("SALARIO BRUTO A RECEBER: R$ %.2f\n", salario_bruto);
		}
		
	}else if(salario_bruto > 500){
		valor_irrf = salario_bruto * 0.20;
		salario_bruto = salario_bruto - valor_irrf;
		printf("\n=== SALARIO FUNCIONARIO ===\n");
    	printf("SALARIO BRUTO A RECEBER: R$ %.2f\n", salario_bruto);
	}
    return 0;
}