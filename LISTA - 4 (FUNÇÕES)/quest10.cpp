#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#ifdef _WIN32
#endif

void imprimiFatorial(int a[10]);

int main (){
	
	setlocale(LC_ALL, "portuguese");
	 
	int x[10];
	
	printf("Insira 10 valores para calcular o fatorial:\n");
	for(int i = 0; i < 10; i++){
        printf("Valor %d: ", i+1);
        if(scanf("%d", &x[i]) != 1){
            printf("Entrada inválida.\n");
            return 1;
        }
    }
    system("cls");
	imprimiFatorial(x);
		             	
	return 0;
}

void imprimiFatorial(int a[10]){
	int fatorial[10];
	for(int i = 0; i<10; i++){
		int n = a[i];
		
		if( n < 0){
			printf("%d! = (Não existe para números negativos!)\n", n);
			fatorial[i] = -1;
			continue;
		}
		
		int fat = 1;
		for(int j = 1; j<= n; j++){
			fat *= j;
		}
		fatorial[i] = fat;
	}
	printf("\n");
	printf("Valores dos Fatoriais\n\n");
	for(int i = 0; i< 10; i++){
		if(fatorial[i] == -1){
			printf("Posição %d: Valor Innválido!\n", i);
		}else{
			printf("Posição %d: %d\n", i, fatorial[i]);
		}
		
		#ifdef _WIN32
            Sleep(1200); // 500 ms (meio segundo)
        #else
            struct timespec ts;
            ts.tv_sec = 0;
            ts.tv_nsec = 1200 * 1000000L; // 500ms em nanossegundos
            nanosleep(&ts, NULL);
        #endif
	}
}

