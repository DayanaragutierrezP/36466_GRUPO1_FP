#include <stdio.h>
int main() {
    int a, b, inicio, fin, num, i, es_primo, encontrados = 0;
    printf("Ingrese el primer limite: ");
    scanf("%d", &a);
    printf("Ingrese el segundo limite: ");
    scanf("%d", &b);
    if (a < b) {
        inicio = a;
        fin = b;
    } else {
        inicio = b;
        fin = a;
    }
    if (inicio < 2) {
        inicio = 2;
    }
    printf("Primos en el rango [%d, %d]:\n", a, b);
    for (num = inicio; num <= fin; num++) {
        es_primo = 1;
        i = 2;
        while (i < num && es_primo == 1) {
            if (num % i == 0) {
                es_primo = 0;
            } else {
                i++;
            }
        }
        if (es_primo == 1) {
            printf("%d ", num);
            encontrados++;
        }
    }
    if (encontrados == 0) {
        printf("No existen numeros primos en este rango.");
    }
    printf("\n");

    return 0;
}
