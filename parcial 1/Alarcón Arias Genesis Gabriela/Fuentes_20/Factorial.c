#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Ingrese un numero entero no negativo (n >= 0): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: El numero debe ser mayor o igual a cero.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es: %lld\n", n, factorial);
    }

    return 0;
}
