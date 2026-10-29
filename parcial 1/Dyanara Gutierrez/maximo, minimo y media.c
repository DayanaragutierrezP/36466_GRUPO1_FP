#include <stdio.h>

int main() {
    float altura, suma = 0.0, maximo = 0.0, minimo = 0.0, media;
    int contador = 0;

    printf("Ingrese una altura (valor negativo para terminar): ");
    scanf("%f", &altura);

    while (altura >= 0) {
        if (contador == 0) {
            maximo = altura;
            minimo = altura;
        } else {
            if (altura > maximo) maximo = altura;
            if (altura < minimo) minimo = altura;
        }

        suma += altura;
        contador++;

        printf("Ingrese una altura (valor negativo para terminar): ");
        scanf("%f", &altura);
    }

    if (contador > 0) {
        media = suma / contador;
        printf("\nMedia de alturas: %.2f\n", media);
        printf("Altura maxima: %.2f\n", maximo);
        printf("Altura minima: %.2f\n", minimo);
    } else {
        printf("\nNo se ingresaron alturas validas.\n");
    }

    return 0;
}
