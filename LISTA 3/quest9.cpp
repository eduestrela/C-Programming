#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");
    
    float maior = 0, menor = 0;
    float numero = 0;
    int primeiro = 1;
    int quantidade = 0;
    
    printf("Digite n�meros (-1 para finalizar):\n");
    printf("\n");
    do {
        printf("N�mero: ");
        if(scanf("%f", &numero) != 1) {
            printf("Erro: Entrada inv�lida!\n");
        }
        if(numero == -1) {
            break;
        }
        quantidade++;
        
        if(primeiro) {
            maior = menor = numero;
            primeiro = 0;
        } else {
            if(numero > maior) maior = numero;
            if(numero < menor) menor = numero;
        }
        
    } while(1);
    
    printf("\n------------ RELAT�RIO FINAL ------------\n");
    
    if(quantidade > 0) {
        printf("� Maior n�mero: %.2f\n", maior);
        printf("� Menor n�mero: %.2f\n", menor);
    } else {
        printf("� Nenhum n�mero v�lido foi digitado!\n");
    }
    
    printf("------------------------------------------\n");
    
    return 0;
}