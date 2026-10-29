#include <stdio.h>

int main() {
    int n, s;

    printf("Ingrese un entero n: ");
    scanf("%d", &n);

    s = 0;
    while (n > 0) {
        s = s + n % 10;
        n = n / 10;
    }

    printf("La suma de los digitos es: %d\n", s);
    return 0;
}
