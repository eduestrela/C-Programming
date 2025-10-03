#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numero, qtdNulo = 0, qtdBranco = 0;
    int qtdC1 = 0, qtdC2 = 0, qtdC3 = 0, qtdC4 = 0;
    int totalVotos = 0;
    
    printf("\n------------ VOTAÇÃO ELEITORAL ------------\n");
    printf("\n");
    printf("\tDigite 1 - CANDIDATO 1\n");
    printf("\tDigite 2 - CANDIDATO 2\n");
    printf("\tDigite 3 - CANDIDATO 3\n");
    printf("\tDigite 4 - CANDIDATO 4\n");
    printf("\tDigite 5 - VOTO NULO\n");
    printf("\tDigite 6 - VOTO EM BRANCO\n");
    printf("\tDigite 0 - ENCERRAR VOTAÇÃO\n");
    printf("\n");
    
    do {
        printf("Número do Candidato: ");
        
        if(scanf("%d", &numero) != 1) {
            printf("Erro: Digite um número válido!\n");
        }
        
        if(numero == 0) {
            break;
        }
        
        if(numero < 1 || numero > 6) {
            printf("Erro: Opção inválida! Digite de 1 a 6.\n");
            continue;
        }
        
        totalVotos++;
        
        switch(numero) {
            case 1: qtdC1++; break;
            case 2: qtdC2++; break;
            case 3: qtdC3++; break;
            case 4: qtdC4++; break;
            case 5: qtdNulo++; break;
            case 6: qtdBranco++; break;
        }
        
        printf("Voto computado!\n\n");
        
    } while(1);
    
    float percC1 = (totalVotos > 0) ? (qtdC1 * 100.0) / totalVotos : 0;
    float percC2 = (totalVotos > 0) ? (qtdC2 * 100.0) / totalVotos : 0;
    float percC3 = (totalVotos > 0) ? (qtdC3 * 100.0) / totalVotos : 0;
    float percC4 = (totalVotos > 0) ? (qtdC4 * 100.0) / totalVotos : 0;
    float percNulo = (totalVotos > 0) ? (qtdNulo * 100.0) / totalVotos : 0;
    float percBranco = (totalVotos > 0) ? (qtdBranco * 100.0) / totalVotos : 0;
    
    int vencedor = 0;
    int maiorVotos = 0;
    
    if(qtdC1 > maiorVotos) { maiorVotos = qtdC1; vencedor = 1; }
    if(qtdC2 > maiorVotos) { maiorVotos = qtdC2; vencedor = 2; }
    if(qtdC3 > maiorVotos) { maiorVotos = qtdC3; vencedor = 3; }
    if(qtdC4 > maiorVotos) { maiorVotos = qtdC4; vencedor = 4; }
    
    printf("\n------------ RELATÓRIO FINAL ------------\n");
    printf("TOTAL DE VOTOS: %d\n\n", totalVotos);
    
    printf("CANDIDATO 1: %d votos (%.1f%%)\n", qtdC1, percC1);
    printf("CANDIDATO 2: %d votos (%.1f%%)\n", qtdC2, percC2);
    printf("CANDIDATO 3: %d votos (%.1f%%)\n", qtdC3, percC3);
    printf("CANDIDATO 4: %d votos (%.1f%%)\n", qtdC4, percC4);
    printf("VOTOS NULOS: %d (%.1f%%)\n", qtdNulo, percNulo);
    printf("VOTOS EM BRANCO: %d (%.1f%%)\n", qtdBranco, percBranco);
    
    printf("\n------------ RESULTADO ------------\n");
    if(vencedor > 0) {
        printf("VENCEDOR: CANDIDATO %d com %d votos\n", vencedor, maiorVotos);
    } else {
        printf("Nenhum voto válido foi computado!\n");
    }
    
    int empate = 0;
    if(qtdC1 == maiorVotos && vencedor != 1) empate = 1;
    if(qtdC2 == maiorVotos && vencedor != 2) empate = 1;
    if(qtdC3 == maiorVotos && vencedor != 3) empate = 1;
    if(qtdC4 == maiorVotos && vencedor != 4) empate = 1;
    
    if(empate) {
        printf("HOUVE EMPATE!\n");
    }
    
    printf("------------------------------------------\n");
    
    return 0;
}