//1.11 Dado un entero n =>1, mostrar los priemros terminos de la serie de fibonacci
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long a, b, s;

    printf("Ingrese la cantidad de terminos n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n debe ser mayor o igual que 1\n");
    } else {
        a = 0;
        b = 1;
        for (i = 1; i <= n; i++) {
            printf("%llu ", a);
            s = a + b;
            a = b;
            b = s;
        }
        printf("\n");
    }

    return 0;
}
//Creado por Danilo Reyes