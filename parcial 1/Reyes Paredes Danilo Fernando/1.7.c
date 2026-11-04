//1.7 Dado un entero N, calcular la raiz cuadrada entera(el mayor R tal que R <= N)
#include <stdio.h>

int main() {
    int n, i, r;

    printf("Ingrese un entero positivo N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("N debe ser positivo\n");
    } else {
        i = 1;
        while (i * i <= n) {
            i = i + 1;
        }
        r = i - 1;
        printf("La raiz cuadrada entera de %d es %d\n", n, r);
    }

    return 0;
}
//Crewado por Danilo Reyes