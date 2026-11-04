//1.16 Dado un entero n > 9, determinar si es un numero perfecto 
#include <stdio.h>

int main() {
    int n, d, s;

    printf("Ingrese un entero n: ");
    scanf("%d", &n);

    s = 0;
    for (d = 1; d < n; d++) {
        if (n % d == 0) {
            s = s + d;
        }
    }

    if (s == n) {
        printf("%d es perfecto\n", n);
    } else {
        printf("%d no es perfecto\n", n);
    }

    return 0;
}
//Creado por Danilo Reyes