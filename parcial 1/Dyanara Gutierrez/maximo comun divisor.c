#include <stdio.h>

int main() {
    int a, b, temp, num1, num2;

    printf("Ingrese el primer entero positivo: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo entero positivo: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Ambos numeros deben ser enteros positivos.\n");
    } else {
        a = num1;
        b = num2;

        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }

        printf("El MCD de %d y %d es: %d\n", num1, num2, a);
    }

    return 0;
}
