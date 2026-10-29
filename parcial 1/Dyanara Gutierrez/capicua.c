#include <stdio.h>

int main() {
    long long num, aux, invertido = 0;

    printf("Ingrese un numero entero positivo: ");
    scanf("%lld", &num);

    if (num < 0) {
        printf("El numero debe ser no negativo.\n");
    } else {
        aux = num;
        while (aux > 0) {
            invertido = (invertido * 10) + (aux % 10);
            aux /= 10;
        }

        if (num == invertido) {
            printf("El numero %lld ES capicua.\n", num);
        } else {
            printf("El numero %lld NO es capicua.\n", num);
        }
    }

    return 0;
}
