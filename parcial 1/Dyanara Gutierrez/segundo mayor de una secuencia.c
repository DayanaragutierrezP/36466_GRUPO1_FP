#include <stdio.h>

int main() {
    int num;
    int mayor = 0;
    int segundo = 0;
    int contador = 0;

    printf("Ingrese un numero entero positivo (0 para terminar): ");
    scanf("%d", &num);

    while (num != 0) {
        if (num > 0) {
            contador++;

            if (num > mayor) {
                segundo = mayor;
                mayor = num;
            } else if (num > segundo) {
                segundo = num;
            }
        } else {
            printf("Atencion: Solo se permiten numeros enteros positivos.\n");
        }

        printf("Ingrese un numero entero positivo (0 para terminar): ");
        scanf("%d", &num);
    }

    if (contador < 2) {
        printf("\nSe ingresaron menos de dos valores validos.\n");
    } else {
        printf("\nMayor = %d\n", mayor);
        printf("Segundo mayor = %d\n", segundo);
    }

    return 0;
}
