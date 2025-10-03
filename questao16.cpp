#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float preco, vendaMensalMedia, novoPreco, aumento, decremento;
	
	printf("Insira o preco do produto:\n");
	scanf("%f", &preco);
	printf("Insira a venda mensal media do produto:\n");
	scanf("%f", &vendaMensalMedia);
	
	if(vendaMensalMedia < 500 || preco < 30){
		aumento = preço * 0.10;
		novoPreco = novoPreco + aumento;
		printf("O novo preco sera de: R$ %.2f", novoPreco);
	}else if(vendaMensalMedia >= 500 || preco < 80){
		aumento = preco * 0.15;
		novoPreco = novoPreco + aumento;
		printf("O novo preco sera de: R$ %.2f", novoPreco);
	}else if(vendaMensalMedia >=1200 || preco >= 80){
		decremento = preco * 0.20;
		novoPreco = novoPreco - decremento;
		printf("O novo preco sera de: R$ %.2f", novoPreco);
	}
	return 0;
}