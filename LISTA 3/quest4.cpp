#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int n, numero;
    
    printf("Quantos números deseja calcular o fatorial? ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("\nInsira o %d° número: ", i+1);
        scanf("%d", &numero);
        
        if(numero < 0) {
            printf("Erro: Fatorial de número negativo não existe!\n");
            continue;
        }
        
        long long fatorial = 1;
        
        for(int j = 1; j <= numero; j++) {
            fatorial *= j;
        }
        
        printf("%d! = %lld\n", numero, fatorial);
    }
    return 0;
}