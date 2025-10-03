#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float numeros[12];
    float raizes[12];
    float raizes2[12];
    
    for(int i = 0; i < 12; i++) {
        printf("Insira o %d° valor:\n", i+1);
        scanf("%f", &numeros[i]);
        system("cls");
    }
    
    for(int i = 0; i < 12; i++) {
        raizes[i] = sqrt(numeros[i]);
    }
    
    for(int i = 0; i < 12; i++) {
        float tentativa = (1 + numeros[i]) / 2.0;
        
        for(int iteracao = 0; iteracao < 5; iteracao++) {
            tentativa = (tentativa + numeros[i] / tentativa) / 2.0;
        }
        
        raizes2[i] = tentativa;
    }
    
    printf("=== RESULTADOS DO MÉTODO BABILÔNICO ===\n");
    printf("\n");
    for(int i = 0; i < 12; i++) {
        printf("\tRaiz de %.2f = %.2f\n", numeros[i], raizes2[i]);
    }
    printf("\n");
    printf("\n");
    printf("=== RESULTADOS DA FUNÇÃO POW ===\n");
    printf("\n");
    for(int i = 0; i < 12; i++) {
        printf("\tRaiz de %.2f = %.2f\n", numeros[i], raizes[i]);
    }
    
    return 0;
}