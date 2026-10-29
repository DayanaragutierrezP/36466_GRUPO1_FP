#include <stdio.h>

int main() {
    int x, mayor, segundo;

    mayor = 0;
    segundo = 0;

    printf("Ingrese un entero positivo (0 para terminar): ");
    scanf("%d", &x);

    while (x != 0) {
        if (x > mayor) {
            segundo = mayor;
            mayor = x;
        } else if (x > segundo && x < mayor) {
            segundo = x;
        }
        printf("Ingrese un entero positivo (0 para terminar): ");
        scanf("%d", &x);
    }

    if (segundo == 0) {
        printf("No hay segundo mayor\n");
    } else {
        printf("Mayor: %d\nSegundo mayor: %d\n", mayor, segundo);
    }

    return 0;
}
