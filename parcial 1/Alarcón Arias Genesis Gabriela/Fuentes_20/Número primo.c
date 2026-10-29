#include <stdio.h>

int main() {
    int n, i = 2, es_primo = 1;

    printf("Ingrese un numero entero mayor que 1: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("El numero debe ser mayor que 1\n");
    } else {
        while (i < n && es_primo == 1) {
            if (n % i == 0) {
                es_primo = 0;
            } else {
                i++;
            }
        }
    }

    if (es_primo == 1) {
        printf("%d es un numero primo\n", n);
    } else {
        printf("%d no es un numero primo\n", n);
    }

    return 0;
}
