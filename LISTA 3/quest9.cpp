#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");
    
    float maior = 0, menor = 0;
    float numero = 0;
    int primeiro = 1;
    int quantidade = 0;
    
    printf("Digite números (-1 para finalizar):\n");
    printf("\n");
    do {
        printf("Número: ");
        if(scanf("%f", &numero) != 1) {
            printf("Erro: Entrada inválida!\n");
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
    
    printf("\n------------ RELATÓRIO FINAL ------------\n");
    
    if(quantidade > 0) {
        printf("• Maior número: %.2f\n", maior);
        printf("• Menor número: %.2f\n", menor);
    } else {
        printf("• Nenhum número válido foi digitado!\n");
    }
    
    printf("------------------------------------------\n");
    
    return 0;
}