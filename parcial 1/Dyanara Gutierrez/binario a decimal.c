#include <stdio.h>

int main() {
    long long binario, aux, decimal = 0, potencia = 1;
    int digito, es_valido = 1;

    printf("Ingrese un numero en sistema binario: ");
    scanf("%lld", &binario);

    if (binario < 0) {
        printf("El numero debe ser no negativo.\n");
    } else if (binario == 0) {
        printf("El numero binario 0 en decimal es: 0\n");
    } else {
        aux = binario;
        while (aux > 0 && es_valido == 1) {
            digito = aux % 10;
            if (digito != 0 && digito != 1) {
                es_valido = 0;
            } else {
                decimal = decimal + (digito * potencia);
                potencia = potencia * 2;
                aux = aux / 10;
            }
        }

        if (es_valido == 1) {
            printf("El numero binario %lld en decimal es: %lld\n", binario, decimal);
        } else {
            printf("Error: El numero ingresado contiene digitos distintos de 0 y 1.\n");
        }
    }

    return 0;
}
