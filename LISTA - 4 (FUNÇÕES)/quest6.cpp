#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float selecaoConta(float x, float y, float z, char w);

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, n3, resultado;
	char caractere;
	
	printf("Insira a sua 1� nota:\n");
	scanf("%f", &n1);
	printf("\n");
	printf("Insira a sua 2� nota:\n");
	scanf("%f", &n2);
	printf("\n");
	printf("Insira a sua 3� nota:\n");
	scanf("%f", &n3);
	printf("\n");
	printf("Insira um caractere correspondente as op��es abaixo:\n");
	printf("A - M�dia Aritm�tica\n");
	printf("p - M�dia Ponderada\n");
	scanf(" %c", &caractere);
	printf("")
	
	resultado = selecaoConta(n1,n2,n3,caractere);
	
	if(caractere == 'A' || caractere == 'a'){
		printf("M�dia Aritm�tica\n");
		printf("%.2f", resultado);
	}else if( caractere == 'P' || caractere == 'p'){
		printf("M�dia Ponderada\n");
		printf("%2.f", resultado);
	}else{
		printf("Erro: Por favor seelcione uma op��o v�lida!");
		printf("\n");
	}
	
}

float selecaoConta(float x, float y, float z, char w){
	if(w == 'A' || w == 'a'){
		float mediaAritmetica = (x+y+z)/3;
		return mediaAritmetica;
	}else if(w == 'P' || w == 'p'){
		float mediaPonderada = ((x* 5) + (y * 3) + (z * 2)/10);
		return mediaPonderada;                        
	}
}