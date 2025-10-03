#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    
    printf("RESOLUCAO DE EQUACAO DO GRAU 2\n");
    printf("Formato: ax² + bx + c = 0\n\n");
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    if (a == 0) {
        printf("\nERRO: O coeficiente 'a' deve ser diferente de zero!\n");
        printf("Esta nao e uma equacao do segundo grau.\n");
        return 1;
    }
    
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    delta = pow(b, 2) - 4 * a * c;
    
    printf("\n=== RESULTADOS ===\n");
    printf("Equacao: %.2fx² + %.2fx + %.2f = 0\n", a, b, c);
    printf("Delta (Δ) = %.2f\n", delta);
    
    if (delta < 0) {
        printf("Δ < 0 → Nao existem raizes reais.\n");
    } 
    else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Δ = 0 → Existe uma raiz real:\n");
        printf("x = %.2f\n", x1);
    } 
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Δ > 0 → Existem duas raizes reais:\n");
        printf("x1 = %.2f\n", x2 = %.2f\n", x1, x2);
    }
    
    return 0;
}