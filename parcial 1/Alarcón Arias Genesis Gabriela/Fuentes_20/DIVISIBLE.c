#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    printf("Ingrese el primer numero entero (a): ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero entero (b): ");
    scanf("%d", &b);

    if (b == 0) {
        printf("\nError: No es posible dividir entre cero.\n");
    } else {
        if (a % b == 0) {
            printf("\nEl numero %d ES divisible por %d.\n", a, b);
        } else {
            printf("\nEl numero %d NO es divisible por %d.\n", a, b);
        }
    }

    return 0;
}
