#include <stdio.h>

#define LIM_INF 0
#define LIM_SUP 10

int main() {
    float x;

    printf("Ingrese un numero real x: ");
    scanf("%f", &x);

    if (x >= LIM_INF && x <= LIM_SUP) {
        printf("%.2f pertenece a [0, 10]\n", x);
    } else {
        printf("%.2f no pertenece a [0, 10]\n", x);
    }

    return 0;
}
