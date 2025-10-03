#include <stdio.h>
#include <stdlib.h>

int main() {
    float x, y, z;
    
    printf("VERIFICAR TRIANGULO\n");
    printf("Digite os tres lados do triangulo:\n");
    printf("Lado X: \n");
    scanf("%f", &x);
    printf("Lado Y: \n");
    scanf("%f", &y);
    printf("Lado Z: \n");
    scanf("%f", &z);
    
    if (x <= 0 || y <= 0 || z <= 0) {
        printf("\nERRO: Os lados do triangulo devem ter valores positivos!\n");
    }
    else if (x >= y + z || y >= x + z || z >= x + y) {
        printf("\nOs valores %.2f, %.2f e %.2f nao correspondem um triangulo!\n", x, y, z);
        printf("Um lado nao pode ser maior ou igual a soma dos outros dois lados.\n");
    }
    else {
        printf("\nOs valores %.2f, %.2f e %.2f correspondem a um triangulo!\n", x, y, z);
        if (x == y && y == z) {
            printf("Tipo: TRIANGULO EQUILATERO (todos os lados iguais)\n");
        }
        else if (x == y || x == z || y == z) {
            printf("Tipo: TRIANGULO ISOSCELES (dois lados iguais)\n");
        }
        else {
            printf("Tipo: TRIANGULO ESCALENO (todos os lados diferentes)\n");
        }
	}
    return 0;
}