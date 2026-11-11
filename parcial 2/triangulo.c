//Dado un entero n =>1, mostrar un triangulo de n filas donde la fila i tiene asteriscos
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Ingrese el numero de filas n: ");
    scanf("%d", &n);

    i = 1;
    do {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
        i++;
    } while (i <= n);

    return 0;
}
//Creado por el grupo 1