//1.6 Leer alturas reales hasta ingresar un valor negativo y mostrar la media el maximo y el minimo
#include <stdio.h>

int main() {
    float h, suma, maximo, minimo, media;
    int n;

    printf("Ingrese una altura (negativo para terminar): ");
    scanf("%f", &h);

    if (h < 0) {
        printf("No se ingresaron alturas\n");
    } else {
        maximo = h;
        minimo = h;
        suma = h;
        n = 1;

        printf("Ingrese una altura (negativo para terminar): ");
        scanf("%f", &h);

        while (h >= 0) {
            if (h > maximo) {
                maximo = h;
            }
            if (h < minimo) {
                minimo = h;
            }
            suma = suma + h;
            n = n + 1;

            printf("Ingrese una altura (negativo para terminar): ");
            scanf("%f", &h);
        }

        media = suma / n;
        printf("Media: %.2f\n", media);
        printf("Maximo: %.2f\n", maximo);
        printf("Minimo: %.2f\n", minimo);
    }

    return 0;
}
//creado por Danilo Reyes