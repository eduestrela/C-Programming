#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int codCarga, codPaisOrigem, pesoQuilos, valorQuilos;
	float pesoProd, impostoProd, valorTotal;
	
	printf("Insira o codigo do produto:\n");
	scanf("%d", &codCarga);
	printf("Insira o peso do produto em toneladas:\n");
	scanf("%f", &pesoProd);
	printf("Insira o codigo do pais de origem:\n");
	scanf("%f", &codPaisOrigem);
	
	pesoQuilos = pesoProd * 1000;
	if(codPaisOrigem < 1 && codPaisOrigem >3){
		printf("Erro: Insira um codigo de pais de origem valido:\n");
		scanf("$d", codPaisOrigem);
		if(codPaisOrigem == 1 || codPaisOrigem == 2 || codPaisOrigem == 3){
			if(codPaisOrigem == 1){
				if(codCarga >= 10 && codCarga <= 20){
					valorQuilos = pesoQuilos * 100;
					impostoProd = valorQuilos * 0.35;
					
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: R$ %.2f        \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}else if(codCarga >= 21 && codCarga <= 30){
					valorQuilos = pesoQuilos * 250;
					impostoProd = valorQuilos * 0.35;
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: R$ %.2f        \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}else if(codCarga >= 31 && codCarga <= 40){
					valorQuilos = pesoQuilos * 340;
					impostoProd = valorQuilos * 0.35;
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: R$ %.2f        \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}
			}else if(codPaisOrigem == 2){
				if(codCarga >= 10 && codCarga <= 20){
					valorQuilos = pesoQuilos * 100;
					imposto = valorQuilos * 0.25;
					valorTotal = valorTotal + impostoProd + valorQuilos;
			
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: R$ %.2f        \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}else if(codCarga >= 21 && codCarga <= 30){
					valorQuilos = pesoQuilos * 250;
					imposto = valorQuilos * 0.25;
					valorTotal = valorTotal + impostoProd + valorQuilos;
			
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: R$ %.2f        \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}else if(codCarga >= 31 && codCarga <= 40){
					valorQuilos = pesoQuilos * 340;
					imposto = valorQuilos * 0.25;
					valorTotal = valorTotal + impostoProd + valorQuilos;
			
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: R$ %.2f        \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}
			}else if(codPaisOrigem == 3){
				if(codCarga >=10 && codCarga <= 20){
					valorQuilos = pesoQuilos * 100;
					imposto = valorQuilos * 0.15;
					valorTotal = valorTotal + impostoProd + valorQuilos;
			
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: R$ %.2f        \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}else if(codCarga >= 21 && codCarga <= 30){
					valorQuilos = pesoQuilos * 250;
					imposto = valorQuilos * 0.15;
					valorTotal = valorTotal + impostoProd + valorQuilos;
				printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: R$ %.2f        \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}else if(codCarga >=31 && codCarga <= 40){
					valorQuilos = pesoQuilos * 340;
					imposto = valorQuilos * 0.15;
					valorTotal = valorTotal + impostoProd + valorQuilos;
				printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: R$ %.2f        \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}
			}else if(codPaisOrigem == 4){
				if(codCarga >=10 && codCarga <= 20){
					valorQuilos = pesoQuilos * 100;
					imposto = valorQuilos * 0.05;
					valorTotal = valorTotal + impostoProd + valorQuilos;
			
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: R$ %.2f        \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}else if(codCarga >= 21 && codCarga <= 30){
					valorQuilos = pesoQuilos * 250;
					imposto = valorQuilos * 0.05;
					valorTotal = valorTotal + impostoProd + valorQuilos;
				printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: R$ %.2f        \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}else if(codCarga >=31 && codCarga <= 40){
					valorQuilos = pesoQuilos * 340;
					imposto = valorQuilos * 0.05;
					valorTotal = valorTotal + impostoProd + valorQuilos;
				printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: R$ %.2f        \n", impostoProd);
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}
			}else if(codPaisOrigem == 5){
				if(codCarga >=10 && codCarga <= 20){
					valorQuilos = pesoQuilos * 100;
					valorTotal = valorTotal + valorQuilos;
			
					printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: ISENTO          \n");
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}else if(codCarga >= 21 && codCarga <= 30){
					valorQuilos = pesoQuilos * 250;
					valorTotal = valorTotal + valorQuilos;
				printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: ISENTO        \n");
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}else if(codCarga >=31 && codCarga <= 40){
					valorQuilos = pesoQuilos * 340;
					valorTotal = valorTotal + valorQuilos;
				printf("\n CARACTERISTICAS DO PRODUTO \n");
					printf("    PESO DA CARGA EM KG: %.2f \n", pesoQuilos);
					printf("     PRECO TOTAL: %.2f        \n", valorQuilos);
					printf("      IMPOSTO: ISENTO          \n");
					printf("   VALOR TOTAL: R$ %.2f       \n", valorQuilos);
				}
			}
		}
	}
	return 0;
}