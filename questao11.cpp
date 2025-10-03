#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int horaInicial, minutoInicial, horaFinal, minutoFinal, tempo;
	int terminoHora, terminoMinuto;
	
	printf("Insira a hora inicial de jogo:\n");
	scanf("%d", &horaFinal);
	printf("Insira os minuto inicial de jogo:\n");
	scanf("%d", &minutoInicial);
	printf("Insira a hora do termino do jogo:\n");
	scanf("%d", &horaFinal);
	printf("Insira o minuto de termino do jogo:\n");
	scanf("%d", &minutoFinal);
	
	terminoHora = horaFinal - horaInicial;
	terminoMinuto = minutoFinal - minutoInicial;
	
	if(terminoHora >= 24){
		printf("O tempo de jogo ultrapassou o limite de horas!");
	}else{
		printf("O tempo gasto em jogo foi de: %d Horas e %d minutos!", terminoHora, terminoMinuto);
	}
}