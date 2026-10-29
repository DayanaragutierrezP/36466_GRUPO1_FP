#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto, intento, intentos = 0;

    srand(time(NULL));
    secreto = (rand() % 100) + 1;

    printf("=== JUEGO: ADIVINA EL NUMERO (1 al 100) ===\n\n");

    do {
        printf("Ingrese su intento: ");
        scanf("%d", &intento);
        intentos++;

        if (intento < secreto) {
            printf("mas alto\n\n");
        } else if (intento > secreto) {
            printf("mas bajo\n\n");
        } else {
            printf("¡acertaste!\n\n");
        }
    } while (intento != secreto);

    printf("Numero total de intentos usados: %d\n", intentos);

    return 0;
}
