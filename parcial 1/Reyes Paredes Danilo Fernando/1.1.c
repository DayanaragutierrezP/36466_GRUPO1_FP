#include <stdio.h>

int main() {
    float a, b, media;

    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);

    media = (a + b) / 2;

    printf("La media de %.2f y %.2f es: %.2f\n", a, b, media);
    return 0;
}
