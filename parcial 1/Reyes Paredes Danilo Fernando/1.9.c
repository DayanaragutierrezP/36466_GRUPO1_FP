#include <stdio.h>

int main() {
    int a, b, aux, n, d, esPrimo, cont;

    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    n = (a > 2) ? a : 2;
    cont = 0;

    printf("Primos entre %d y %d: ", a, b);
    while (n <= b) {
        esPrimo = 1;
        d = 2;
        while (d * d <= n && esPrimo) {
            if (n % d == 0) {
                esPrimo = 0;
            }
            d = d + 1;
        }

        if (esPrimo) {
            printf("%d ", n);
            cont = cont + 1;
        }
        n = n + 1;
    }

    if (cont == 0) {
        printf("No hay primos");
    }
    printf("\n");

    return 0;
}
