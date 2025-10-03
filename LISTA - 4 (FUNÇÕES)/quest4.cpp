#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tranformarTempo(int x);

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float horas =0;
	int minutos = 0;
	int segundos = 0;
	float resultado = 0;
	
	printf("Insira em segundos a quantidade de tempo que deseja transformar:\n");
	scanf("%f", &segundos);
	printf("\n");
	
	tranformarTempo(int x)
	return 0;
}

void transformarTempo(int x){
	int minutos = 0;
	int horas = 0;
	
	horas = minutos/60;
	minutos = x/60;
	
	printf("\n");
	printf("Saída de dados");
	prinf("\n");
	printf("Segundos : %.d", x);
	printf("\n");
	printf("Minutos : %d", minutos);
	printf("\n");
	printf("Horas : %d", horas);
	
}