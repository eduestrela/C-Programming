#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int codProd, codPaisOrigem, pesoGramas, valorGramas;
	float pesoProd, impostoProd, valorTotal;
	
	printf("Insira o codigo do produto:\n");
	scanf("%d", &codProd);
	printf("Insira o peso do produto em quilos:\n");
	scanf("%f", &pesoProd);
	printf("Insira o codigo do pais de origem:\n");
	scanf("%f", &codPaisOrigem);
	
	pesoGramas = pesoProd * 1000;
	if(codPaisOrigem < 1 && codPaisOrigem >3){
		printf("Erro: Insira um codigo de pais de origem valido:\n");
		scanf("$d", codPaisOrigem);
		if(codPaisOrigem == 1 || codPaisOrigem == 2 || codPaisOrigem == 3){
			if(codPaisOrigem == 1){
				if(codProd >= 1 && codProd <= 4){
					valorGramas = pesoGramas * 10;
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO EM GRAMAS: %.2f      \n", pesoGramas);
					printf("     PRECO TOTAL: %.2f        \n", valorGramas);
					printf("      IMPOSTO: ISENTO         \n");
					printf("   VALOR TOTAL: R$ %.2f       \n", valorGramas);
				}else if(codProd >= 5 && codProd <= 7){
					valorGramas = pesoGramas * 25;
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO EM GRAMAS: %.2f      \n", pesoGramas);
					printf("     PRECO TOTAL: %.2f        \n", valorGramas);
					printf("      IMPOSTO: ISENTO         \n");
					printf("   VALOR TOTAL: R$ %.2f       \n", valorGramas);
				}else if(codProd >= 8 && codProd <= 10){
					valorGramas = pesoGramas * 35;
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO EM GRAMAS: %.2f      \n", pesoGramas);
					printf("     PRECO TOTAL: %.2f        \n", valorGramas);
					printf("      IMPOSTO: ISENTO         \n");
					printf("   VALOR TOTAL: R$ %.2f       \n", valorGramas);
				}
			}else if(codPaisOrigem == 2){
				if(codProd >= 1 && codProd <= 4){
					valorGramas = pesoGramas * 10;
					imposto = valorGramas * 0.15;
					valorTotal = valorTotal + impostoProd + valorGramas;
			
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO EM GRAMAS: %.2f  \n", pesoGramas);
					printf("     PRECO TOTAL: %.2f    \n", valorGramas);
					printf("      IMPOSTO: %.2f       \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f   \n", valorTotal);
				}else if(codProd >= 5 && codProd <= 7){
					valorGramas = pesoGramas * 25;
					imposto = valorGramas * 0.15;
					valorTotal = valorTotal + impostoProd + valorGramas;
			
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO EM GRAMAS: %.2f  \n", pesoGramas);
					printf("     PRECO TOTAL: %.2f    \n", valorGramas);
					printf("      IMPOSTO: %.2f       \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f   \n", valorTotal);
				}else if(codProd >= 8 && codProd <= 10){
					valorGramas = pesoGramas * 35;
					imposto = valorGramas * 0.15;
					valorTotal = valorTotal + impostoProd + valorGramas;
			
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO EM GRAMAS: %.2f  \n", pesoGramas);
					printf("     PRECO TOTAL: %.2f    \n", valorGramas);
					printf("      IMPOSTO: %.2f       \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f   \n", valorTotal);
				}
			}else if(codPaisOrigem == 3){
				if(codProd >=1 && codProd <= 4){
					valorGramas = pesoGramas * 10;
					imposto = valorGramas * 0.25;
					valorTotal = valorTotal + impostoProd + valorGramas;
			
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO EM GRAMAS: %.2f  \n", pesoGramas);
					printf("     PRECO TOTAL: %.2f    \n", valorGramas);
					printf("      IMPOSTO: %.2f       \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f   \n", valorTotal);
				}else if(codProd >= 5 && codProd <= 7){
					valorGramas = pesoGramas * 25;
					imposto = valorGramas * 0.25;
					valorTotal = valorTotal + impostoProd + valorGramas;
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO EM GRAMAS: %.2f  \n", pesoGramas);
					printf("     PRECO TOTAL: %.2f    \n", valorGramas);
					printf("      IMPOSTO: %.2f       \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f   \n", valorTotal);
				}else if(codProd >=8 && codProd <= 10){
					valorGramas = pesoGramas * 35;
					imposto = valorGramas * 0.25;
					valorTotal = valorTotal + impostoProd + valorGramas;
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO EM GRAMAS: %.2f  \n", pesoGramas);
					printf("     PRECO TOTAL: %.2f    \n", valorGramas);
					printf("      IMPOSTO: %.2f       \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f   \n", valorTotal);
				}
			}
		}
	}
	return 0;
}