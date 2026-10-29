#include <stdio.h>

int main() {
    int n, c, inv;

    printf("Ingrese un entero n: ");
    scanf("%d", &n);

    c = n;
    inv = 0;
    while (c > 0) {
        inv = inv * 10 + c % 10;
        c = c / 10;
    }

    if (inv == n) {
        printf("%d es capicua\n", n);
    } else {
        printf("%d no es capicua\n", n);
    }

    return 0;
}
