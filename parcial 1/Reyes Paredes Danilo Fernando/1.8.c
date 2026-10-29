#include <stdio.h>

int main() {
    int n, d, esPrimo;

    printf("Ingrese un entero n: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("n debe ser mayor que 1\n");
    } else {
        esPrimo = 1;
        d = 2;
        while (d * d <= n && esPrimo) {
            if (n % d == 0) {
                esPrimo = 0;
            }
            d = d + 1;
        }

        if (esPrimo) {
            printf("%d es primo\n", n);
        } else {
            printf("%d no es primo\n", n);
        }
    }

    return 0;
}
