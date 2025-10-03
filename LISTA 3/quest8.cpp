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
    
    printf("Digite n�meros entre 0 e 30000 (30000 para sair):\n");
    
    do {
        printf("N�mero: ");
        
        if(scanf("%f", &numero) != 1) {
            printf("ERRO: Digite um n�mero v�lido!\n");
        }
        
        if(numero == 30000) break;
        
        if(numero < 0 || numero > 30000) {
            printf("ERRO: N�mero deve estar entre 0 e 30000!\n");
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
    
    printf("\n------------ RELAT�RIO FINAL ------------\n");
    
    if(quantidade_total > 0) {
        printf("\n");
        printf("�\tQuantidade: %d n�meros\n", quantidade_total);
        printf("�\tSoma total: %.2f\n", soma_total);
        printf("�\tM�dia geral: %.2f\n", soma_total / quantidade_total);
        printf("�\tMaior n�mero: %.2f\n", maior);
        printf("�\tMenor n�mero: %.2f\n", menor);
        printf("�\tN�meros pares: %d\n", quantidade_pares);
        printf("�\tN�meros �mpares: %d\n", quantidade_impares);
        
        if(quantidade_pares > 0) {
            printf("�\tM�dia dos pares: %.2f\n", soma_pares / quantidade_pares);
        }
        
        printf("�\tPercentual de �mpares: %.2f%%\n", 
        (quantidade_impares * 100.0) / quantidade_total);
        
    }else {
        printf("\tNenhum n�mero v�lido foi digitado!\n");
    }
    printf("------------------------------------------\n");
    
    return 0;
}