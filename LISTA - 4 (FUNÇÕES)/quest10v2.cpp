#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>   
#ifdef _WIN32
#include <windows.h> 
#endif

void typewriter(const char *texto, int delay_ms) {
    for (int i = 0; texto[i] != '\0'; i++) {
        putchar(texto[i]);   
        fflush(stdout);   

        #ifdef _WIN32
            Sleep(delay_ms);
        #else
            struct timespec ts;
            ts.tv_sec = 0;
            ts.tv_nsec = delay_ms * 1000000L;
            nanosleep(&ts, NULL);
        #endif
    }
}

void imprimiFatorial(int a[10]) {
    int fatorial[10];

    for (int i = 0; i < 10; i++) {
        int n = a[i];

        if (n < 0) {
            fatorial[i] = -1;
            continue;
        }

        int fat = 1;
        for (int j = 1; j <= n; j++) {
            fat *= j;
        }
        fatorial[i] = fat;
    }

    typewriter("\nVetor de fatoriais\n", 50);

    char buffer[100];
    for (int i = 0; i < 10; i++) {
        if (fatorial[i] == -1) {
            sprintf(buffer, "Posição %d: inválido\n", i);
        } else {
            sprintf(buffer, "Posição %d: %d\n", i, fatorial[i]);
        }
        typewriter(buffer, 50);
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int x[10];

    typewriter("Insira 10 valores para calcular o fatorial:\n", 50);
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        if (scanf("%d", &x[i]) != 1) {
            typewriter("Entrada inválida.\n", 50);
            return 1;
        }
    }

    imprimiFatorial(x);

    return 0;
}
