#include <stdio.h>

int main() {
    float a, b, media;
    printf("Ingrese el primer numero: ");
    scanf("%f", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &b);
    media = (a + b) / 2.0f;
    printf("La media de %.2f y %.2f es: %.2f\n", a, b, media);

    return 0;
}
