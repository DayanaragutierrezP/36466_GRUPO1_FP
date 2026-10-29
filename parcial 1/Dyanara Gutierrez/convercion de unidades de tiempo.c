#include <stdio.h>

int main() {
    int c, dias, horas, minutos, segundos, resto;

    printf("Ingrese la cantidad de segundos (c): ");
    scanf("%d", &c);

    if (c < 0) {
        printf("El numero de segundos debe ser >= 0\n");
    } else {
        dias = c / 86400;
        resto = c % 86400;

        horas = resto / 3600;
        resto = resto % 3600;

        minutos = resto / 60;
        segundos = resto % 60;

        printf("%d segundos equivalen a %d dias, %d horas, %d minutos y %d segundos.\n",
               c, dias, horas, minutos, segundos);
    }

    return 0;
}
