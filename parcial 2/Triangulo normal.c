//El codigo realiza un triangulo normal
#include <stdio.h>

int main() {
    int filas, i = 1, j, k;

    printf("Introduce el numero de filas: ");
    if (scanf("%d", &filas) != 1 || filas <= 0) {
        return 1;
    }

    while (i <= filas) {
        for (j = i; j < filas; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
        i++;
    }

    return 0;
}
//Creado por el grupo conformado por.-Danilo Reyes, Dayanara Gutrierrez, Genesisi Alarcon
