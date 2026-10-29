#include <stdio.h>

#define SEG_DIA  (24 * 60 * 60)
#define SEG_HORA (60 * 60)
#define SEG_MIN  60

int main() {
    long c, resto;
    int dias, horas, minutos, segundos;

    printf("Ingrese los segundos (C): ");
    scanf("%ld", &c);

    if (c < 0) {
        printf("Valor invalido\n");
    } else {
        dias = c / SEG_DIA;
        resto = c % SEG_DIA;
        horas = resto / SEG_HORA;
        resto = resto % SEG_HORA;
        minutos = resto / SEG_MIN;
        segundos = resto % SEG_MIN;

        printf("%ld segundos = %d dias, %d horas, %d minutos y %d segundos\n",
               c, dias, horas, minutos, segundos);
    }

    return 0;
}
