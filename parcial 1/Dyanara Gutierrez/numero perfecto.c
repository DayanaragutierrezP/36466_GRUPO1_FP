#include <stdio.h>

int main() {
    int num, i, suma = 0;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Error: Ingrese un numero entero mayor que cero.\n");
    } else {
        for (i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                suma += i;
            }
        }
        if (suma == num) {
            printf("El numero %d ES un numero perfecto.\n", num);
        } else {
            printf("El numero %d NO es un numero perfecto.\n", num);
        }
    }

    return 0;
}
