#include <stdio.h>

int main() {
    long long n, aux;
    int suma = 0;
    printf("Ingrese un numero entero: ");
    scanf("%lld", &n);

    aux = (n < 0) ? -n : n;

    while (aux > 0) {
        suma += (int)(aux % 10);
        aux /= 10;
    }

    printf("La suma de los digitos de %lld es: %d\n", n, suma);

    return 0;
}
