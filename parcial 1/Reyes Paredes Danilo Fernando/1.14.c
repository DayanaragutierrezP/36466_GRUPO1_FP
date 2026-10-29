#include <stdio.h>

int main() {
    int a, b, r;

    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("El MCD es: %d\n", a);
    return 0;
}
