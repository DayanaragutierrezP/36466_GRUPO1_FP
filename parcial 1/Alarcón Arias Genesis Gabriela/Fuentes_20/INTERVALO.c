#include <stdio.h>

int main() {
    float x;

    printf("Ingrese un numero: ");
    scanf("%f", &x);

    if (x >= 0 && x <= 10) {
        printf("%.2f pertenece al intervalo [0, 10]\n", x);
    } else {
        printf("%.2f no pertenece al intervalo [0, 10]\n", x);
    }

    return 0;
}
