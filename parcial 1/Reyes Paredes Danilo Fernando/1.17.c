//1.17 Dado m entero positivo n en base 10, mostrar su represtacion en binario
#include <stdio.h>

int main() {
    int n;
    unsigned long long bin, pot;

    printf("Ingrese un entero positivo n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n debe ser positivo\n");
    } else if (n > 524287) {
        printf("n es demasiado grande (maximo 524287)\n");
    } else {
        bin = 0;
        pot = 1;
        while (n > 0) {
            bin = bin + (n % 2) * pot;
            pot = pot * 10;
            n = n / 2;
        }
        printf("En binario: %llu\n", bin);
    }

    return 0;
}
//Creado por Danilo Reyes