//creado por el grupo 1, realiza un tirangulo invertido
#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Introduce el numero de filas: ");
    scanf("%d", &n);

    while (i <= n) {
        for (int j = i; j <= n; j++) {
            printf("*");
        }
        printf("\n");
        i++;
    }

    return 0;
}
//Grupo 1.-Danilo Reyes, Dayanara Gutierrez, Genesis Alarcon
