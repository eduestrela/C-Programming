#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    double x;
    double cosseno = 1.0;
    int qtdtermos = 3;
    int sinal = -1;
    
    printf("Insira um valor para X (Em Radianos):\n");
    scanf("%lf", &x);
    printf("\n");

    double termo1, termo2, termo3;
    termo1 = 1.0;

    for(int i = 1; i <= qtdtermos; i++) {
        int expoente = 2 * i;
        long long fatorial = 1;
        
        for(int j = 1; j <= expoente; j++) {
            fatorial *= j;
        }
        
        double termo = sinal * pow(x, expoente) / fatorial;
        cosseno += termo;
        
        if(i == 1) termo2 = termo;
        if(i == 2) termo3 = termo;
        
        sinal *= -1;
        printf("Termo %d: cos(x) = %.6f\n", i, cosseno);
    }
    
    printf("\ncos(%.2f) ≈ %.6f\n", x, cosseno);
    printf("\n\n");
    
    double cosAproximado = termo1 + termo2 + termo3;
    double cosExato = cos(x);
    
    printf("=== CÁLCULO COM 3 TERMOS ===\n");
    printf("Termo 1 (n=0): %.6f\n", termo1);
    printf("Termo 2 (n=1): %.6f\n", termo2);
    printf("Termo 3 (n=2): %.6f\n", termo3);
    printf("Soma dos 3 termos: %.6f\n", cosAproximado);
    printf("\n=== COMPARAÇÃO ===\n");
    printf("cos(%.2f) pela série (3 termos): %.6f\n", x, cosAproximado);
    printf("cos(%.2f) pela math.h: %.6f\n", x, cosExato);
    printf("Diferença: %.6f\n", fabs(cosExato - cosAproximado));

    return 0;
}