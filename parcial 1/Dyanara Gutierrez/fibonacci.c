#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, siguiente;

    printf("Ingrese el numero de terminos de Fibonacci (n > 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Ingrese un entero positivo mayor a cero.\n");
    } else {
        printf("Serie Fibonacci (%d terminos):\n", n);
        for (i = 1; i <= n; i++) {
            printf("%lld ", t1);
            siguiente = t1 + t2;
            t1 = t2;
            t2 = siguiente;
        }
        printf("\n");
    }

    return 0;
}
