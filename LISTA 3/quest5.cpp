#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i = 2;
	int sequencia[8];
	
	sequencia[0] = 0;
	sequencia[1] = 1;
	
	for(i = 2; i<8; i++){
		sequencia[i] = sequencia[i - 1] + sequencia[i - 2];
	}
	printf("\tSEQUÊNCIA DE FIBONACCI\n\n");
	for(i = 0; i<8; i++){
		printf("TERMO %d : %d \n", i+1, sequencia[i]);
	}
	
}
