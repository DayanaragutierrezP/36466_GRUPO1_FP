#include <stdio.h>

#define SECRETO 42

int main() {
    int intento, n;

    n = 0;
    do {
        printf("Adivine el numero: ");
        scanf("%d", &intento);
        n = n + 1;

        if (intento > SECRETO) {
            printf("Mas bajo\n");
        } else if (intento < SECRETO) {
            printf("Mas alto\n");
        }
    } while (intento != SECRETO);

    printf("Acertaste en %d intentos\n", n);
    return 0;
}
