#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");
    
    float numero;
    int quantidade_total = 0, quantidade_pares = 0, quantidade_impares = 0;
    float soma_total = 0, soma_pares = 0;
    float maior = 0, menor = 0;
    int primeiro = 1;
    
    printf("Digite números entre 0 e 30000 (30000 para sair):\n");
    
    do {
        printf("Número: ");
        
        if(scanf("%f", &numero) != 1) {
            printf("ERRO: Digite um número válido!\n");
        }
        
        if(numero == 30000) break;
        
        if(numero < 0 || numero > 30000) {
            printf("ERRO: Número deve estar entre 0 e 30000!\n");
            continue;
        }
        
        quantidade_total++;
        soma_total += numero;
        
        if(primeiro) {
            maior = menor = numero;
            primeiro = 0;
        } else {
            if(numero > maior) maior = numero;
            if(numero < menor) menor = numero;
        }
        
        if((int)numero % 2 == 0) {
            quantidade_pares++;
            soma_pares += numero;
        } else {
            quantidade_impares++;
        }
        
    } while(numero != 30000);
    
    printf("\n------------ RELATÓRIO FINAL ------------\n");
    
    if(quantidade_total > 0) {
        printf("\n");
        printf("•\tQuantidade: %d números\n", quantidade_total);
        printf("•\tSoma total: %.2f\n", soma_total);
        printf("•\tMédia geral: %.2f\n", soma_total / quantidade_total);
        printf("•\tMaior número: %.2f\n", maior);
        printf("•\tMenor número: %.2f\n", menor);
        printf("•\tNúmeros pares: %d\n", quantidade_pares);
        printf("•\tNúmeros ímpares: %d\n", quantidade_impares);
        
        if(quantidade_pares > 0) {
            printf("•\tMédia dos pares: %.2f\n", soma_pares / quantidade_pares);
        }
        
        printf("•\tPercentual de ímpares: %.2f%%\n", 
        (quantidade_impares * 100.0) / quantidade_total);
        
    }else {
        printf("\tNenhum número válido foi digitado!\n");
    }
    printf("------------------------------------------\n");
    
    return 0;
}