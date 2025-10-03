#include <stdio.h>
#include <time.h>
#include <locale.h>

int main() {
    time_t tempo_atual;
    struct tm *info_tempo;
    char buffer[80];
    
    setlocale(LC_TIME, "Portuguese_Brazil.1252"); 
    time(&tempo_atual);
    info_tempo = localtime(&tempo_atual);
    
    printf("DATA E HORA DO SISTEMA\n");
    
    strftime(buffer, sizeof(buffer), "%d/%m/%Y", info_tempo);
    printf("Formato 1 (dia/mes/ano): %s\n", buffer);
    
    char *meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    
    printf("Formato 2 (mes por extenso): %d de %s de %d\n", 
           info_tempo->tm_mday, 
           meses[info_tempo->tm_mon], 
           info_tempo->tm_year + 1900);
    
    strftime(buffer, sizeof(buffer), "%H:%M", info_tempo);
    printf("Formato 3 (hora:minuto): %s\n", buffer);
    
    printf("\n=== FORMATO COMPLETO ===\n");
    printf("%d/%d/%d - ", 
           info_tempo->tm_mday, 
           info_tempo->tm_mon + 1, 
           info_tempo->tm_year + 1900);
    
    printf("%d de %s de %d - ", 
           info_tempo->tm_mday, 
           meses[info_tempo->tm_mon], 
           info_tempo->tm_year + 1900);
    
    printf("%02d:%02d\n", 
           info_tempo->tm_hour, 
           info_tempo->tm_min);
    
    return 0;
}