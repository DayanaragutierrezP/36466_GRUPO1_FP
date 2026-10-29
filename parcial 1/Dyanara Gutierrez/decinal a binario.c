#include <stdio.h>

int main() {
    long long n, aux, binario = 0, posicion = 1;
    int resto;

    printf("Ingrese un numero entero positivo (n >= 0): ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("El numero debe ser un entero no negativo (n >= 0).\n");
    } else if (n == 0) {
        printf("El numero 0 en binario es: 0\n");
    } else {
        aux = n;
        while (aux > 0) {
            resto = aux % 2;
            binario = binario + (resto * posicion);
            posicion = posicion * 10;
            aux = aux / 2;
        }
        printf("El numero %lld en binario es: %lld\n", n, binario);
    }

    return 0;
}
